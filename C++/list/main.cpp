#include <iostream>
#include "list.h"

int main(void)
{
	List list;
	
	
	list.insertFirstNode(list, 4);			// [4]
	list.printList(list);
 	list.insertFirstNode(list, 3);			// [3,4]
 	list.printList(list);
	list.insertFirstNode(list, 1);			// [1,3,4]
	list.printList(list);
	
	list.insertNode(list, 1, 2);			// [1, 2, 3, 4]
	list.printList(list);
	
	list.deleteNode(list, 3);				// [1, 2, 4]
	list.printList(list);
	
	
	return 0;
}
