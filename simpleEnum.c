#include<stdio.h>
enum Colors { Four=4, Five, BLUE, YELLOW, ORANGE };
int main(){
  int a;
  a=Four+Five;
  printf("The value of a is %d\n",a);
   return 0;
}