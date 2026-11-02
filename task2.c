#include<stdio.h>
int max(int a, int b, int c){
    int max;
    if(a>b&& a>c){
        max = a;
    }
    else if(b>a&&b>c){
        max =b;
    }
    else if(a==b&& b==c){
        printf("All numbers are equal\n");
    }
    else{
        max = c;
    }
    return max;
}
int main(){
    int num1,num2,num3;
    printf("Enter first nuber:");
    scanf("%d",&num1);
    printf("Enter second nuber:");
    scanf("%d",&num2);
    printf("Enter third nuber:");
    scanf("%d",&num3);

    printf("Maximum number is : %d",max(num1,num2,num3));

}