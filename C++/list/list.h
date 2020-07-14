#ifndef LIST_H
#define LIST_H

class Node {
private:

public:
	int data_;
	Node *next_;
	//Node();
	//Node(const Node& rhs);
	//~Node();

};

class List {
friend Node;
private:
	Node *ptr_;
public:
	
	List();
	List(const List& rhs);
	~List();
	
	void insertFirstNode(const List& rhs, int data);
	void insertNode(const List& rhs, int preData, int data);
	void deleteNode(const List& rhs, int data);
	
	void printList(const List& rhs);
	
	
	 	
};


#endif
