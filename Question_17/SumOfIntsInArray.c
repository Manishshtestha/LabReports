#include <stdio.h>
int main(){
    int a[10],sum=0;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter a number(%d):",i+1);
        scanf("%d",&a[i]);
        sum += a[i];
    }
    printf("The sum of the given numbers is %d",sum);
    return 0;
}//Main