#include<stdio.h>
int main(){
    // Take a number from user and check if its a even number or odd number.

    // int num1;
    // scanf("%d",&num1);
    
    // if(num1 % 2 == 0){
    //     printf("its a even number\n");
    // }
    // else{
    //     printf("its odd number\n");
    // }


//  Take a number from user and check if its a positive or negative number.

    int num2;

    scanf("%d",&num2);
    if(num2 > 0 ){
        printf("positive\n");
    }
    else if(num2 < 0){
        printf("negative");

    }

    else{
        printf("zero");
    }


    return 0;
}