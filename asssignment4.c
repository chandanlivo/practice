//    take input from user
//    print star patterns
//    *
//    **
//    **
//    ****

//    ****
//    ***
//    **
//    *

#include <stdio.h>

void RevStarPattern( int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= rows-i-1 ; j++){
            printf("*");
        }
        printf("\n");
    }
}


void StarPattern( int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
}




int main()
{
    int rows;
    printf("How many rows do you want\n");
    scanf("%d", &rows);
    RevStarPattern(rows);
    StarPattern(rows);
    
    return 0;
}

// #include<stdio.h>
// int main()
//{
//     char c ='*';
//     for(int i = 1;i<5;i++){// but we have to take user input
//         printf("%c\n",c);
//     }
//     return 0;
// }