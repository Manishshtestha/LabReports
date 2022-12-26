#include <stdio.h>
#define row 2
#define col 3
int main()
{
    int a[row][col],b[row][col],c[row][col];
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            printf("Enter the value of row(%d) and column (%d) of A:",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            printf("Enter the value of row(%d) and column (%d) of B:",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            printf("%d ",a[i][j]);
        }
        printf("\t+\t");
        for(int j = 0;j<col;j++){
            printf("%d ",b[i][j]);
        }
        printf("\t=\t");
        for(int j = 0;j<col;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}//Main
