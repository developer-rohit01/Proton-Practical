#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
     float a,b;
     char ch;

        printf("\n");

        printf("\n================================= CALCULATOR === DEVLOPER---> ROHIT =============================\n");
        printf("                              +\t\t-\t*\t/\n");
        printf("=================================================================================================\n\n");
        printf("Enter The First value: ");
        scanf("%f",&a);
        printf("Enter the Second value: ");
        scanf("%f",&b);

     
       printf("Choose the Operator =   ");
       scanf(" %c",&ch);
    
     if(ch=='+'){
        printf("%.1f + %.1f = %.1f",a,b,a+b);
     }
     
     else if(ch=='-'){
        printf("%.1f - %.1f = %.1f",a,b,a-b);
     }
     else if(ch=='*'){
        printf("%.1f * %.1f = %.1f",a,b,a*b);
     }
     else if(ch=='/'){
        printf("%.1f / %.1f = %.1f",a,b,a/b);
     }
     else {
        printf("Invalid Opeator Selected");
     }
    
    printf("\nPRESS ENTER TO EXIT...");
    getch();
    getch();

     
     return 0;
     
}