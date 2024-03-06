#include<stdio.h>
int sum(int a, int b){
    return a+b;
}
void printstar(int n){
for(int i = 0; i<n; i++)
{
    printf("%c\n", '*');
    }
    
}
int takenumber(){
    int i;
    printf("Enter a number:\n");
    scanf("%d", &i);
    return i;
}
int main()
    {
        int a, b, c;
        a = 3;
        b = 14;

       // c =sum(a , b) ;
      //printf("the sum is %d\n", c);
      //printstar(7);
       c = takenumber();
      printf("The entered number is %d\n", c);
     
      return 0;

}