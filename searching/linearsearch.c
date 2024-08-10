#include<stdio.h>
int linearsearch(int arr[],int size,int search);
int main(){
    int arr[]={28,348,347,459,457,36,4590,36,3478,74674,48745,4874,45890,2367,435897},search,size;
    size=sizeof(arr)/sizeof(int);
    search=347;
    int f=linearsearch(arr,size,search);
    printf("Location = %d",f+1);
    return 0;
}
int linearsearch(int arr[],int size,int search){
    int i;
    for(i=0;i<=size;i++){
        if(search==arr[i])
        return i;
    }
}