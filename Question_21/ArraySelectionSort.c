#include <stdio.h>
#define count 10
int main()
{
    int a[count],min,temp;
    for (int i = 0; i < count; i++)
    {
        printf("Enter the value to store at index %d:", i);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < count; i++)
    {
        min = i;
        for (int j = i + 1; j < count; j++)
        {
            if(a[min] > a[j]){
                min = j;
            }
        }
        if(min != i){
            temp = a[i];
            a[i] = a[min];
            a[min] = temp; 
        }
    }
    printf("Sorted Array:");
    for (int i = 0; i < count; i++)
    {
        printf("%s%d%s",(i==0)?"[":"",a[i],(i+1 == count)?"]":",");
    }
    return 0;
} // Main
