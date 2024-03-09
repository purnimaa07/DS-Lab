#include<stdio.h>

void printarray(int *arr,int n){
    for(int i=0;i<n;i++){

        printf("%d ",arr[i]);

    }
    printf("\n");    
}

void bubblesort(int *arr,int n){
    int temp;
    for(int i=0;i<n;i++){ //for number of pass

        for( int j=0;j<n-1-i;j++){ //for comparison in each pass
            
             if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
             }
        }
    }
}

 int main(){
    int arr[]={23,45,78,99,56,98};
    int n=6;
    printarray(arr,n);
    bubblesort(arr,n);
    printarray(arr,n);
    return 0;
 }