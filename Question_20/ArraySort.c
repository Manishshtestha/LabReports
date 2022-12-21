#include <stdio.h>
#define count 10
int main()
{
    int i, j, temp,a[count];
    for(i=0;i<count;i++){
        printf("Enter number (%d)",i+1);
        scanf("%d",&a[i]);
    }
    for(i = 0;i<count;i++){
        for(j = i+1;j<count;j++){
            if (a[i] < a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(i = 0;i<count;i++){
        printf("%s%d%s",(i==0)?"[":"",a[i],(i+1 == count)?"]":",");
    }
    return 0;
}//Main

