#include<stdio.h>

int main(){
  int ac[100]={};
  int n;

  printf("Enter the number of elements to find maximum n= ");
  scanf("%d",&n);
  for(int i=0; i<n; i++){
    printf("Enter element %d: ",i+1);
    scanf("%d",&ac[i]);
  }

  for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
        if(ac[i]<ac[j]){
            int temp = ac[i];
            ac[i]=ac[j];
            ac[j]=temp;
        }
    }
  }
  printf("The Maximum Element is: %d\n",ac[0]);
  printf("The Minimum Element is: %d",ac[n-1]);
   return 0;
}
