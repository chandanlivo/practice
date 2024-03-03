#include<stdio.h>
int main()
    {
      char input;
      float  ktm = 0.621371;    
      float  itf = 0.0833333;
      float  cmt = 0.393701;
      float  ptk = 0.453592;
      float  itm = 0.0254;
      float first , second;
      while(1)
      {
        printf("  Enter the character q to quit\n  1.kms to miles\n  2.inches to foot\n  3.cms to inch\n  4.pound to kilo\n 5.inches to meters\n");
        scanf("  %c", &input);

        switch (input)
        {
        case 'q':
          printf("Quiting the program....\n");
          goto end;
          break;
           
        case '1':
          printf("Enter the quantity in terms of first unit\n");
          scanf("%f", &first);
          second = first*ktm;
          printf("%f kms is equal to %f miles\n",first , second);
          break;

             
        case '2':
          printf("Enter the quantity in terms of first unit\n");
          scanf("%f", &first);
          second = first*itf;
          printf("%f inches is equal to %f foot\n",first , second);
          break;

          
             
        case '3':
          printf("Enter the quantity in terms of first unit\n");
          scanf("%f", &first);
          second = first*cmt;
          printf("%f cms is equal to %f inches\n",first , second);
          break;

          
             
        case '4':
          printf("Enter the quantity in terms of first unit\n");
          scanf("%f", &first);
          second = first*ptk;
          printf("%f pounds is equal to %f kilos\n",first , second);
          break;

          
             
        case '5':
          printf("Enter the quantity in terms of first unit\n");
          scanf("%f", &first);
          second = first*itm;
          printf("%f inches is equal to %f metres \n",first , second);
          break;

          
        default:
        printf("IN default now");
          break;
        }
      }
      end:
      return 0;

}
