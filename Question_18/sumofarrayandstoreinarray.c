#include <stdio.h>

int main()
{
    int a[5] = {1,2,3,4,5}, b[5] = {6,7,8,9,4}, sum[5];
    for (int i = 0; i < 5; i++)
    {
        sum[i] = a[i] + b[i];
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%s%d%s",i==0?"[":"",sum[i],i==4?"]":",");
    }

} // Main