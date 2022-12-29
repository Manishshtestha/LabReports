#include <stdio.h>
#define count 10

int main(){
    int a[count],larNum,smaNum,temp;
    for(int i = 0;i<count;i++){
        printf("Enter a number to store at index (%d)",i);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<count;i++){
        for(int j = i+1;j<count;j++){
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    larNum = a[9];
    smaNum = a[0];
    printf("Largest and Smallest number in the array is %d and %d",larNum,smaNum);
    return 0;
}//Main