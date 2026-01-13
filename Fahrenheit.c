#include<stdio.h>


int main(){
        float Temper;
        printf("Enter Temperature in Celcius: ");
        scanf("%f",&Temper);
        float Fahrenheit = (Temper * 9/5) + 32;
        printf("Temperature in Fahrenheit: %.2f\n", Fahrenheit);
   return 0;
}
