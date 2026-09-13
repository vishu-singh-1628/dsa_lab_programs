#include<stdio.h>

bool search(int* arr,int y,int n){
    for(int i=0;i<n;i++){
        if (arr[i]==y){
            return true;
        }
    }
    return false; 
}

int main(){
    int arr1[30]={1,2,3,4,5,6,7,8,9};
    int no_of_elements =9;
    printf("Enter the element to search : ");
    int n;
    scanf("%d",&n);
    printf("\n");
    bool result = search(arr1,n,no_of_elements);
    if(result){
        printf("Element found \n");
    }
    else{
        printf("Element not found \n");
        
    }
}