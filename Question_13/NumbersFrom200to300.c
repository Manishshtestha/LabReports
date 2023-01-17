#include <stdio.h>

int main(){
    int i = 201,j = 201;
    printf("Printing numbers from 201 to 300 using while loop \n");
    while (i <= 300)
    {
        printf("%d\n",i);
        i++;
    }
    printf("Printing numbers from 201 to 300 using do while loop \n");
    do
    {
        printf("%d\n",j);
        j++;
    } while (j <= 300);
    
    return 0;
}//Main