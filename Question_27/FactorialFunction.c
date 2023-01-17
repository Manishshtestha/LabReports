#include <stdio.h>

int factorial(int num){
    int product = 1;
    while (num>1)
    {
        product = product * num;
        num--;
    }
    return product;
}
int main(){
    int num;
    printf("Enter a number to find the factorial:");
    scanf("%d",&num);
    printf("factorial of %d is %d",num,factorial(num));
    return 0;
}//Main