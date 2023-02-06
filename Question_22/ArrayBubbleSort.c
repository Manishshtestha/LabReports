#include <stdio.h>
#define count 10
int main()
{
    int i, j, temp,a[count];
    printf("Enter number 10 numbers:\n");
    for(i=0;i<count;i++){
        scanf("%d",&a[i]);
    }
    for(i = 0;i<count;i++){
        for(j = 0;j<count-i;j++){
            if (a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for(i = 0;i<count;i++){
        printf("%s%d%s",(i==0)?"[":"",a[i],(i+1 == count)?"]":",");
    }
    return 0;
}//Main

