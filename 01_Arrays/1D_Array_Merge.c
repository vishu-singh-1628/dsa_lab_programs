#include<stdio.h>


void merge(int *arr1,int n1,int *arr2 ,int n2,int* arr){
   
    for(int i=0;i<n1;i++){
        arr[i]=arr1[i];

    }
    for(int i=0;i<n2;i++){
        arr[i+n1]=arr2[i];

    }
}

void display(int* arr,int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}


int main(){
    
    int arr1[10]={1,2,3,4,5,6,7,8,9,10};
    int arr2[10]={21,22,23,24,25,26,27,28,29,30};
    int n1,n2;
    n1=sizeof(arr1)/sizeof(arr1[0]);
    printf("%d\n",n1);
    n2=sizeof(arr1)/sizeof(arr1[0]);
    printf("%d\n",n2);

    int arr[n1+n2];
    merge(arr1,n1,arr2,n2,arr);
    printf("The first array is : ");
    display(arr1,n1);
    printf("The second array is : ");
    display(arr2,n2);
    printf("The merged array is : ");
    display(arr,n1+n2);

}