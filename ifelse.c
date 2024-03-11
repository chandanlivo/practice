#include <stdio.h>

int main()
{
    int result;
    printf("Type 0 for pass in both subject\n");
    printf("Type 1 for pass in maths subject\n");
    printf("Type 2 for pass in Science subject\n\n");
    printf("Please enter the subject passed ?");
    scanf("%d", &result);
    if (result == 0)
    {
        printf("You will get 45 rs");
    }
    else if (result == 1)
    {
        printf("You will get Rs25");
    }
    else if (result == 2)
    {
        printf("You will get 15 rs");
    }
    else
    {
        printf("Please enter Valid code");
    }
    return 0;
}