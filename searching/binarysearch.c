#include<stdio.h>
int binarysearch(int arr[],int size,int search);
int main(){
    int arr[]={2,5,9,11,15,18,19,26,29,30,35,38,49,51,53,55,58,64,69,73,77,82,99},search,size;
    size=sizeof(arr)/sizeof(int);
    printf("size = %d",size);
    search=69;
    int f=binarysearch(arr,size,search);
    printf("\nLocation = %d",f);
    return 0;
}
int binarysearch(int arr[], int size, int search){
    int mid,low,high;
    low=0;
    high=size-1;
    mid=(low+high)/2;
    while(low<=high){
        if(search==arr[mid]){
            return mid+1;
        }
        if(arr[mid]<search){
        low=mid+1;
        }
        else
        high=mid-1;
        mid=(low+high)/2;
    }
}  