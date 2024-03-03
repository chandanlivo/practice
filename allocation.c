#include <stdio.h>
#include <stdlib.h> // library for memory allocation functions

int main()
{
    // Use of malloc
   // int *ptr;
   // int n;
   // printf("Enter the size of the array you want to create \n",n);
   // scanf("%d",&n);
   // ptr = (int *)malloc(3 * sizeof(int));
   // for(int i = 0;i < n; i++)
   // {
   //     printf("Enter the value no %d of this array\n",i);
   //     scanf("%d", &ptr[i]);
   // }
//
   //  for(int i = 0;i < n; i++)
   // {
   //     printf("The value at %d of this array is %d\n",i,ptr[i]);
   //     
   // }


//use of calloc
int *ptr;
    int n;
    printf("Enter the size of the array you want to create \n",n);
    scanf("%d",&n);
    ptr = (int *)calloc(n , sizeof(int));
    for(int i = 0;i < n; i++)
    {
        printf("Enter the value no %d of this array\n",i);
        scanf("%d", &ptr[i]);
    }

     for(int i = 0;i < n; i++)
    {
        printf("The value at %d of this array is %d\n",i,ptr[i]);
        
    }


 // Use of REALLOC()

 //int *ptr;
    //int n;
    printf("Enter the size of the new array you want to create \n",n);
    scanf("%d",&n);
    ptr = (int *) realloc(ptr , n*sizeof(int));
    for(int i = 0;i < n; i++)
    {
        printf("Enter the value no %d of this array\n",i);
        scanf("%d", &ptr[i]);
    }

     for(int i = 0;i < n; i++)
    {
        printf("The value at %d of this array is %d\n",i,ptr[i]);
        
    }
    free(ptr);
    return 0;
}