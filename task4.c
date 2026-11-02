#include<stdio.h>
int row_sum(int row, int col, int arr[row][col]){
    int sum;
    for(int i=0;i<row;i++){
        sum=0;
        for(int j=0; j<col;j++){
            sum = sum+arr[i][j];
        }
        printf("Sum of row %d is %d",i+1,sum);
        printf("\n");
    }

}
int main()
{
    int arr[4][4]={{1,23,4,5},{11,1,2,54},{1,6,7,8},{9,8,76,5}};
    row_sum(4,4,arr);

}