#include <unistd.h>						// 유닉스에서 제공하는 함수 (시스템콜)
#include <sys/types.h>
#include <sys/socket.h>
#include <assert.h>
#include <stdio.h>
#include <pthread.h>
#include <arpa/inet.h>
#include <string.h>

pthread_mutex_t mutex;

int dataSockets[1024];
int count;				// 클라이언트 수



void* handleClient(void* arg)
{
	int dataSocket = *(int*)arg;
	
	int nread;
	char msg[1024];
	while( nread = read(dataSocket, msg, 1024) ) { // 3번째 인자는 최대로 읽을 수 있는 데이터의 크기, 반환된 값 -> 읽어온 데이터 크기, 파일의 끝(end of file)을 만나면 0을 리턴, 잘 실행되지 않았으면 -1을 리턴
pthread_mutex_lock(&mutex);
		// write all client
		fputs(msg, stdout);
		for ( int i=0; i<count; ++i)
			write(dataSockets[i], msg, nread);
pthread_mutex_unlock(&mutex);
	}
	//EOF
	close(dataSocket);
	return NULL;
}

int main(void)
{
	pthread_mutex_init(&mutex, NULL);
	
	int servSocket = socket(AF_INET, SOCK_STREAM, 0);			// file descriptor 0표준입력, 1표준출력 ,2표준에러 는 예약 (stdio)
	assert(servSocket != -1);
	
	int option;
	socklen_t optionLen = sizeof(option);
	option = 1;
	setsockopt(servSocket, SOL_SOCKET, SO_REUSEADDR, (void*)&option, optionLen);
	
	struct sockaddr_in servAddr;
	servAddr.sin_family = AF_INET;
	servAddr.sin_addr.s_addr = htonl(INADDR_ANY);
	servAddr.sin_port = htons(7777);
	
	assert( bind(servSocket, (struct sockaddr*)&servAddr, sizeof(struct sockaddr_in)) != -1);
		
	assert( listen(servSocket, 5) != -1);
	
	for(;;){
		struct sockaddr_in clientAddr;
		int len;
		
		int dataSocket;	
		assert( (dataSocket = accept(servSocket, (struct sockaddr *)&clientAddr, &len)) != -1);
		printf("client IP : %s\n", inet_ntoa(clientAddr.sin_addr));
pthread_mutex_lock(&mutex);
		dataSockets[count] = dataSocket;
		++count;
pthread_mutex_unlock(&mutex);
		// create thread for read()/write()
		pthread_t pid;
		pthread_create(&pid, NULL, handleClient, &dataSocket);
		pthread_detach(pid);
	}
	close(servSocket);
	return 0;
}
