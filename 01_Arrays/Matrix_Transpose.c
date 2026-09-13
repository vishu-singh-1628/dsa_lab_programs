#include<stdio.h>

void transpose(int arr[][2],int r1,int c1,int arr_transpose[][5]){
    
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            arr_transpose[j][i]=arr[i][j];
        }
    }
    

}

int main()
{ int arr1[5][2]={{21,22},{23,24},{25,26},{27,28},{29,30}};
    printf("\nthe array1 is :\n");
    for(int i=0;i<5;i++){
        for(int j=0;j<2;j++){
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
    
    int arr_matrix_transpose[2][5];
    transpose(arr1,5,2,arr_matrix_transpose);
    printf("\nthe transpose of array is :\n");  
    for(int i=0;i<2;i++){
        for(int j=0;j<5;j++){
            printf("%d ",arr_matrix_transpose[i][j]);
        }
        printf("\n");
    }
    

return 0 ;
}