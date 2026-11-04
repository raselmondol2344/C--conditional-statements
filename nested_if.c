#include<stdio.h>
int main(){

    int taka;
    scanf("%d",&taka);

    if(taka >= 5000)
    {
        printf("cox bazare jabo\n");



        if(taka >= 10000){
            printf("senmartin jabo\n");
        }

        else{
            printf("senmatrin jabo na\n");
        }

    }

    else
    {
        printf("kotaw jabo na\n");
    }


    return 0;
}