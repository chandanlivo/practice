#include<stdio.h>
int main(){
    int sub;
    
    printf("Enter 0 for passed in both subjects\n");
    printf("Enter 1 for passed in maths subject\n");
    printf("Enter 2 for passed in science subject\n");
    printf("Enter the subject you've paseed:\n");
    scanf("%d", &sub);
    if(sub == 0){
        printf("you will gwt 45 as gift\n");

    }
    else if( sub == 1){
        printf("you will get 15 as gift\n");
    }
    else{
        printf("you will get 15 as gift\n");
    }
    return 0;
}