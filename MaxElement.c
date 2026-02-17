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
        if(ac[i]>ac[j]){
            int temp = ac[i];
            ac[i]=ac[j];
            ac[j]=temp;
        }
    }
  }
  
  printf("sorted array is: ");
  for(int i=0; i<n; i++){
    printf("%d ",ac[i]);
  }

  printf("\nsecond maximum element is: %d\n",ac[n-2]);
  printf("\nsecond minimum element is: %d\n",ac[1]);

  printf("The Maximum Element is: %d\n",ac[n-1]);
  printf("The Minimum Element is: %d",ac[0]);

  printf("\nEnter to Exit...");
  getchar();
  getchar();

   return 0;
}
