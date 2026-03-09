#include <stdio.h>

// Function declaration
int search(int arr[], int n);
int evenodd(int arr [],int n);
int sum(int arr [], int n);

int main() {
    int n, key, index;
    int arr[100];
    int khatam;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    index = search(arr, n);
    if (index != -1)
        printf("Element found at index %d\n", index);
    else
        printf("Element not found\n");

    evenodd(arr,n);

    printf("\nSum of array is: %d",khatam=sum(arr,n));
    

    return 0;
}

// Function definition
int search(int arr[], int n) {
    int key;
    printf("Enter element to search: ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i;   // return index immediately
    }
    return -1;          // not found
}
int evenodd(int arr[],int n){
    int count=0;
    int ncount=0;
    for(int i=0;i<n; i++){
        if(arr[i]%2==0){
            count++;
        }else{
          ncount++;
        }
        
    }
    printf("Numbers of even elements: %d\n",count);
    printf("Number of Odd Elements : %d",ncount);
}


int sum(int arr[], int n){
    int total = 0;
    for(int i=0; i<n; i++){
        total += arr[i];
    }
    return total;
}

