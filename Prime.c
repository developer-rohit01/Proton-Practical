#include<stdio.h>

int main(){
        printf("Enter the Number to check prime or not = ");
        int n,flag=0;
        scanf("%d",&n);
        for(int i=2;i<=n/2;i++){
            if(n%i==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("The given number is Prime");
        }
        else{
            printf("The given number is not Prime");
        }
        printf("\nPRESS ENTER TO EXIT...");
        getchar();
        getchar();

  
   return 0;
}