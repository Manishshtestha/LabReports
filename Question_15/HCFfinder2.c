#include <stdio.h>
int main(){
    int num1,num2,hcf;
    printf("Enter two numbers:");
    scanf("%d%d",&num1,&num2);
    while(hcf != 0){
        hcf = num1 % num2;
        num1 = num2;
        if(hcf == 0){
            printf("HCF = %d",num2);
        }
        num2 = hcf;
    }
    return 0;
}//Main