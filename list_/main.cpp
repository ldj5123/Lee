#include <iostream>
#include "list.h"

int main()
{
	List list1;
	
	
	list1.insertFirstNode(4);			// [4]
	std::cout << list1 << std::endl;
 	list1.insertFirstNode(3);			// [3,4]
 	std::cout << list1 << std::endl;
	list1.insertFirstNode(1);			// [1,3,4]
	std::cout << list1 << std::endl;
	
	list1.insertNode(1, 2);			// [1, 2, 3, 4]
	std::cout << list1 << std::endl;
	
	list1.deleteNode(3);				// [1, 2, 4]
	std::cout << list1 << std::endl;
	
	
	return 0;
}
