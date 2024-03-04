#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *ptr = NULL;
    char string[34];
    ptr = fopen("myfile.txt", "r");
    fscanf(ptr, "%s", string);
    fprintf(ptr,"The content of this file has %s\n", string);


    return 0;
}