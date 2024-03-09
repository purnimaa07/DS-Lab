#include<stdio.h>

void printarray(int *arr,int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void sel_sort(int *arr,int n){
    int indexofmin,temp;
    printf("After selection sorting-");
    for(int i=0;i<n-1;i++){ //for number of pass
        indexofmin=i;
        for(int j=i+1;j<n;j++){ //for comparison 
            if(arr[j]<arr[indexofmin]){
                indexofmin=j;
            }
            temp=arr[i];
            arr[i]=arr[indexofmin];
            arr[indexofmin]=temp;

        }
    }

}
int main(){
    int arr[]={1,0,8,4,7,5,3,2};
    int n=8;
    printarray(arr,n);
    sel_sort(arr,n);
    printarray(arr,n);
    return 0;
}