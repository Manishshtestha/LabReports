#include <stdio.h>
#include <math.h>

int Power(int x,int y){
    return pow(x,y);
}
int main(){
    int num1,num2;
    printf("Enter two numbers:");
    scanf("%d%d",&num1,&num2);
    printf("%d raised to the power %d is %d",num1,num2,Power(num1,num2));
    return 0;
}//Main