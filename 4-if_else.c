#include<stdio.h>

int main(){
    int age;
    scanf("%d",&age);
    if(age > 18){
        printf("Age %d Eligible to vote",age);
    }
    else{
        printf("Age %d Not eligible to vote",age);
    }
}
