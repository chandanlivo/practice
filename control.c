#include<stdio.h>
int main(){
    int age;
    printf("Enter your age:\n");
    scanf("%d", &age);
    printf("you have entered your age as %d\n",age);
    if(age >= 18){
        printf("you can vote\n");
       }
       else if(age >10){
        printf("your age is between 10 and 18 you can vote for kids\n");
       }
       else{
        printf("you can't vote");
       }
    return 0;
}