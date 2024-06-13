#include <iostream>
using namespace std;
struct rect
{
    int length;
    int breadth;
};
int main()
{

    struct rect* p; // delcaring the pointer using struct /*"this is a DYNAMIC OBJECT"*/ or u can can skip the previous step n write struct rect *p= new rect;
    p = new rect;   // creating new object rect in external memory with variable name p
    p->length = 10;
    p->breadth = 20;
    delete p;

    /*Memory leaks occur when dynamically allocated memory that is no longer needed is not properly deallocated or freed. When memory is dynamically allocated using functions such as malloc(), calloc(), or new, it must be manually released by the programmer using the corresponding deallocation functions such as free(), realloc(), or delete.

    If this memory is not explicitly deallocated, it remains in use even if the program no longer needs it. Over time, multiple instances of this can cause the program to consume excessive amounts of memory, which may eventually lead to the program crashing or running out of memory.

    Memory leaks are a common problem in long-running applications and programs with dynamic allocation of large amounts of memory, especially those that run on systems with limited memory resources. Therefore, it is important for programmers to ensure that any memory they allocate is also properly released when it is no longer needed, to avoid memory leaks.*/

    return 0;
}