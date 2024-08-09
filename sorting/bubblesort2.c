#include<stdio.h>
void printArray(int* a, int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
void bubblesort(int* a, int size){
    int i,j,temp;
    for(i=1;i<size;i++){
        for(j=0;j<size-1-i;j++){
            if(a[j+1]<a[j]){
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
}
int main(){
    int a[]={8,6,9,4,2,10,12,16},size;
    size=sizeof(a)/sizeof(int);
    printArray(a,size);
    bubblesort(a,size);
    printArray(a,size);
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }
    return 0;
}