#include <iostream>
#include <string>
#include <memory>

using std::cout;
using std::endl;
using std::string;
using std::allocator;

int main()
{/*
    string *pArr = new string[5];

    pArr[0] = string("AAA");
    pArr[1] = string("BBB");
    pArr[2] = string("CCC");
    pArr[3] = string("DDD");
    pArr[4] = string("FFF");

    for (int i = 0; i != 5; ++i)
        cout << pArr[i] << endl;

    delete [] pArr;
*/
    allocator<string> alloc;
    string *pArr = alloc.allocate(5);

//    ununitialized_fill(pArr, pArr + 5, string("hello"));

    alloc.construct(pArr, "AAA");
    alloc.construct(pArr+1, "BBB");
    alloc.construct(pArr+2, "CCC");
    alloc.construct(pArr+3, "DDD");
    alloc.construct(pArr+4, "FFF");

    // string *pArr2 = alloc.allocate(5);
    // uninitialized_copy(pArr, pArr + 5, pArr2);

    for (int i = 0; i != 5; ++i)
        cout << pArr[i] << endl;

    for (int i = 0; i != 5; ++i){
        alloc.destroy(pArr + i);
        // alloc.destroy(pArr2 + i);
    }

    // alloc.deallocate(pArr2, pArr2->size());
    alloc.deallocate(pArr, pArr->size());

    return 0;
}