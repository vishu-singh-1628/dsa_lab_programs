#include<stdio.h>

// printing array
void display(int* arr,int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
// insertion
void insertion(int* arr,int indx,int value,int n){
    
    for(int i=n;i>indx;i--){
        arr[i]=arr[i-1];


    }
    arr[indx]=value;
    
}

// deletion
void delete(int *arr,int indx,int n){
    for(int i= indx; i<n-1;i++){
        arr[i]=arr[i+1];
    }
}

int main(){
    // creating array
    int arr1[30]={1,2,3,4,5,6,7,8,9};
    int no_of_elements =9;
    printf("Before insertion : ");
    display(arr1,no_of_elements);
    
    insertion(arr1,2,20,no_of_elements);
    no_of_elements ++;
    printf("after insertion: ");
    display(arr1,no_of_elements);
    
    delete(arr1,2,no_of_elements);
    no_of_elements --;
    printf("after deletion: ");
    display(arr1,no_of_elements);




}