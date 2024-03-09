#include<stdio.h>

void printarray(int *arr,int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void inser_sort(int *arr,int n){
    int temp,j;
    printf("After insertion sort-");
    for(int i=1;i<=n-1;i++){
        temp=arr[i];
        j=i-1;
        while(temp<=arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}

int main(){
    int arr[]={39,9,81,45,90,27,72,38};
    int n=8;
    printarray(arr,n);
    inser_sort(arr,n);
    
    
    printarray(arr,n);
    return 0;
    

}