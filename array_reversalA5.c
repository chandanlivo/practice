#include<stdio.h>

    void arrayreversal(int arr[])
    {
        int temp;
         for(int i = 0; i < 7/2; i++)  // we traverse till the 4th element that's it
         {
            temp = arr[i];
            arr[i]= arr[6-i];  //Swapping the numbers 
            arr[6-i] = temp;
         }
    }
    void printarray(int arr[]){
        for(int i = 0; i < 7; i++){
            printf("The value of element %d is %d\n",i,arr[i]);
        }
    }

int main()
{
    int arr[] = {1,2,3,4,5,6,77};
    printf("Before reversing the array\n");
    printarray(arr);
     
    printf("\n Reversal of the array is\n");
     arrayreversal(arr);
     printarray(arr);

    return 0;
}