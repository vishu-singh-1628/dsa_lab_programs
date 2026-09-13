#include<stdio.h>


void sum(int arr1[][2],int arr2[][2],int r1,int c1,int arr[][2]){
    
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            arr[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    

}
void display_2D(int (*arr)[2],int r1,int c1){
     for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
}

int main()
{
int arr1[5][2]={{1,2},{3,4},{5,6},{7,8},{9,10}};
printf("\nthe array1 is :\n");
display_2D(arr1,5,2);
int arr2[5][2]={{1,2},{3,4},{5,6},{7,8},{9,10}};
printf("\nthe array2 is :\n");
display_2D(arr2,5,2);
int arr_matrix_sum[5][2];
sum(arr1,arr2,5,2,arr_matrix_sum);
printf("\nthe sum of arrays is :\n");
display_2D(arr_matrix_sum,5,2);


return 0 ;
}