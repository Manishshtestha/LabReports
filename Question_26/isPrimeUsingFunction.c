#include <stdio.h>

int isPrime(int num){
    int T = 0;
    for(int i = 0; i<=(num/2) ;i++){
        if(num % i == 0){
            T++;
            break;
        }
    }
    T == 1 ? printf("%d",1):printf("%d",0);
}

int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    isPrime(num);
    return 0;
}