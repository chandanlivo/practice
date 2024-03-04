#include<stdio.h>
int main()
{
    int num, i = 1;
    printf("Enter the number");
    scanf("%d", &num);

    do{
        printf("%d\n", i);
        i = i+2;

    }while(i<num);
    return 0;

    }

