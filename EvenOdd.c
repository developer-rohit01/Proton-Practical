#include<stdio.h>

int main(){
      
  int num;
  printf("Enter the number to Check Even or Odd= ");
  scanf("%d",&num);
  if(num % 2==0){
    printf("The given number is Even");
  }
  else{
    printf("The number is Odd");
  }
   return 0;
}