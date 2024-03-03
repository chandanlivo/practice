#include <stdio.h>
int main()
{
    int marks[2][4] = {{32, 41, 21, 87},
                       {44, 54, 67, 9}};
    // for(int i = 0; i<4; i++){
    //     printf("Enter the value of %d element of the array\n", i);
    //     scanf("%d", &marks[i]);
    // }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("The value of [%d] [%d] element of the array is %d\n", i, j, marks[i][j]);
            //printf("%d  ", marks[i] [j]);
        }
        //printf("\n");
    }
    return 0;
}