#include<stdio.h>
enum Colors { RED, GREEN, BLUE, YELLOW, ORANGE };

int main(){
    int i;
    enum Colors vr;
    char s[10];
    for(i = RED; i <= ORANGE; i++){
        vr = (enum Colors)i;
        switch(vr){
            case RED:
                printf("Color is RED\n");
                break;
            case GREEN:
                printf("Color is GREEN\n");
                break;
            case BLUE:
                printf("Color is BLUE\n");
                break;
            case YELLOW:
                printf("Color is YELLOW\n");
                break;
            case ORANGE:
                printf("Color is ORANGE\n");
                break;
            default:
                printf("Unknown Color\n");
        }
    }
   return 0;
}