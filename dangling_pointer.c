#include <stdio.h>
#include <stdlib.h>
int *funcdangling()
{
    int a, b, sum;
    a = 34;
    b = 364;
    sum = a + b;
    return &sum;
}

int main()
{
    // case 1: Deallocation of a memory block
    int *ptr = (int *)malloc(7 * sizeof(int));
    ptr[0] = 34;
    ptr[1] = 56;
    ptr[2] = 64;
    ptr[3] = 3;
    free(ptr); // ptr is now dangling pointer

    // case 2:function returning local variable address
    int *dangPtr = funcdangling();// ptr is now a dangling pointer
     
    int *danglingptr3;
     //case 3:If a variable goes out of the scope
    {
        int a = 12;
        danglingptr3 = &a;
    }
    //here vaariable goes out of the scope which means danglingptr3 is pointing a location which is freed and hence danglingptr3 is a dangling pointer
    return 0;
}