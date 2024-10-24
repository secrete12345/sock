#include <stdio.h>

int main() {
    int yes = 0;
    int a , b;
    printf("enter the first number: ");
    scanf("%d" , &a);
    printf("enter the second number: ");
    scanf("%d" , &b);
    if(((a % 7 == 0) && (b % 7 == 0)) && ((a % 3 != 0) && (b % 3 != 0))){
        printf("yes this is sock 1");
        yes = 1;
    }
    if((a % 100 == 0) && (b % 100 == 0)){
        printf("yes this is sock 2");
        yes = 1;
    }
    if(((a % 1000) - (a %100) == 900 && (a % 10 == 9)) && ((b % 1000) - (b %100) == 900 && (b % 10 == 9))){
        printf("yes this is sock 3");
        yes = 1;
    }
    if((a % 10000) == (b % 10000)){

        printf("yes this is sock 4");
        yes = 1;
    }
    if(yes == 0){
        printf("no");
    }
    return 0;
}
