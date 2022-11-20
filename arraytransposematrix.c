#include<stdio.h>
#include<conio.h>
int main()
{
    int m=3,n=2;
    int mat[m][n],tran[n][m],i,j;
    printf("Enter elements in %dx%d matrix:\n",m,n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            tran[j][i]=mat[i][j];
        }
    }
    printf("Transpose of given matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",tran[i][j]);
        }
        printf("\n");
    }
    getch();
    return 0;
}


