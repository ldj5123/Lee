#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <assert.h>
#include <pthread.h>

void *recvMsg(void *arg)
{
	int clientSocket = *(int *)arg;
	char msg[1024];
	for(;;){
	// recv() -->print console
		
		int nread = read(clientSocket, msg, 1024);
		msg[nread] = '\0';
		fputs(msg, stdout);
	}
	return NULL;
}

int main(void)
{
	int clientSocket = socket(AF_INET, SOCK_STREAM, 0);
	assert(clientSocket != -1);
	
	struct sockaddr_in servAddr;
	servAddr.sin_family = AF_INET;
	servAddr.sin_addr.s_addr = inet_addr("127.0.0.1");
	servAddr.sin_port = htons(7777);
	
	assert( connect(clientSocket, (struct sockaddr*)&servAddr, sizeof(struct sockaddr_in)) != -1);
	
	// create thread for read() --> print
	pthread_t tid;
	void *result;
	pthread_create(&tid, NULL, recvMsg, &clientSocket);
	//pthread_join(tid, &result);	
	char msg[1024];
	
	for(;;) {
		// key -->write
		
		fgets(msg, 1024, stdin);			// scanf와 다르게'\n'이 들어감
		if (strcmp(msg, "/q\n") == 0 || strcmp(msg, "/Q\n") == 0)
			break;
		
		write(clientSocket, msg, strlen(msg));
	}
	
	close(clientSocket);
	return 0;
}
