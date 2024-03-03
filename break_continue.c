#include<stdio.h>
int main()
{
    int i, age;
     for(i=0; i<10; i++){
    printf("%d\n Enter your age:\n", i);
    scanf("%d", &age);
     if(age>10){
        //break;
        continue;
     }
       printf("we have not come acros  any continue statements\n");
       printf("True friendship comes when the silence between two people is comfortable");
    

     }
}