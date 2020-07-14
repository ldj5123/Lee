#ifndef LIST_H
#define LIST_H
#include <iostream>

class Node { 		// class 기본멤버는 private  struct의 기본멤버는 public
friend class List;
private:
	int data;
	Node *next;

	Node(int data, const Node *next);
	
	Node(const Node& rhs);				// not use
	Node& operator=(const Node& rhs);	// not use
public:
	//Node* operator&();
	//const Node* operator&() const;
	//~Node();
//	int getData() const;
//	const Node* getNext() const;
};

class List {
friend std::ostream& operator << (std::ostream& out, const List& rhs);
private:
	Node *ptr;
	
	void print(std::ostream& out) const;			// Node class의 get함수 사용안했을때
	
	List(const List& rhs);
	List& operator=(const List& rhs);
public:
	
	List();
	~List();
	
	void insertFirstNode(int data);
	void insertNode(int preData, int data);
	void deleteNode(int data);

	
	
	 	
};


#endif
