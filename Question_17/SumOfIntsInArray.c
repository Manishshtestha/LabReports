#include <stdio.h>
int main(){
    int a[10],sum=0;
    float avg;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter a number(%d):",i+1);
        scanf("%d",&a[i]);
        sum += a[i];
    }
    avg = (float)sum / 10;
    printf("The sum and average of the given numbers is %d and %0.1f",sum,avg);
    return 0;
}//Main