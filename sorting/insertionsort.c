#include<stdio.h>
void printArray(int* a, int size){
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
void insertionsort(int* a, int size){
    int key,j;
    for(int i=1;i<size;i++){
        key=a[i];
        j=i-1;
        while(j>=0 && key<a[j]){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;   
    }
}
int main(){
    int a[]={8,6,9,4,2,10,12,16},size;
    size=sizeof(a)/sizeof(int);
    printArray(a,size);
    insertionsort(a,size);
    printArray(a,size);
    return 0;
}