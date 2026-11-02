#include<stdio.h>
int sum(int size, int arr[]){
    int sum =0;
    int max = arr[0];
    int min = arr[0];
    for(int i=0; i<size;i++){
        sum = sum + arr[i];
        if(max<arr[i]){
            max = arr[i];
        }
        if(min>arr[i]){
            min = arr[i];
        }
    }
    printf("Sum of the array is:%d\n",sum);
    printf("Maximum number in array is:%d\n",max);
    printf("Minimum number in array is %d\n",min);
}

int main(){
    int arr[5] = {1,4,5,8,56};
    sum(5,arr);

    
}