#include<stdio.h>
int bsort(int arr[],int size);
int main(){
    int arr[]={9,8,5,3,10,1,2,6,4,7},size;
    size=sizeof(arr)/sizeof(int);
    bsort(arr,size);
    return 0;
}
int bsort(int arr[],int size){
    int j,i,temp=0;
    for(i=1;i<size;i++){
        for(j=0;j<size-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=0;i<size;i++){
        printf(" %d",arr[i]);
    }
}