#include<stdio.h>
int calculator (int a,int b,int choice){
    int cal;
    if(choice == 4 && b==0){
        
    }
    if(choice == 1){
        cal = a+b;
    }
    else if (choice == 2){
        cal = a-b;
    }
    else if(choice == 3){
        cal = a*b;
    }
    else if(choice == 4 && b==0){
        printf("b must be greater than zero\n");
        
    }
    else if(choice == 4){
        cal = a/b;
    }
    else {
        printf("Invalid calculation\n");
    }

}
int main()
{
    int choice;
    do{

        int num1,num2;
        printf("Select the operation\n1.Sum\n2.Difference\n3.product\n4.quotient\n5.Exit\n(1-4):");
        scanf("%d",&choice);
        if(choice == 5){
            break;
        }
        printf("Enter the value of number 1:");
        scanf("%d",&num1);
        printf("Enter the value of number 2:");
        scanf("%d",&num2);
        int calculation =0; 
        calculation = calculator(num1,num2,choice);
        printf("calulation :%d\n",calculation);
    }while(choice !=5);
    
}