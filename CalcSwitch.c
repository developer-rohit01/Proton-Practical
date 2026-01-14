#include<stdio.h>

int main(){
     int a,b;
     char cr;

      printf("Enter First number = ");
      scanf("%d",&a);

      printf("Choose the operator + , - , * , /, %% \n");
      scanf(" %c",&cr);

      printf("Enter the Second number = ");
      scanf("%d",&b);

    switch(cr){
        case '+': 
         printf("%d + %d = %d",a,b,a+b);
        break;
        
        case '-':
         printf("%d - %d = %d",a,b,a-b);
        break;

        case '*':
         printf("%d * %d = %d",a,b,a*b);
        break;

         case '/':
         printf("%d / %d = %d",a,b,a/b);
        break;

          case '%':
         printf("Remainder when %d is divided by %d = %d",a,b,a%b);
        break;
         
        default:
        printf("Invalid Operator");
        
    }
     return 0;
}