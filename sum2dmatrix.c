#include<stdio.h>
#include<conio.h>
int main()
{
    int m=2,n=2;
    int one[m][n],two[m][n],sum[m][n],i,j;
    printf("Enter elements in first %dx%d matrix:\n",m,n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&one[i][j]);
        }
    }
    printf("Enter the elments in second %dx%d matrix:\n",m,n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&two[i][j]);
        }
    }
    printf("Sum of given matrices\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            sum[i][j]=one[i][j]+two[i][j];
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
    getch();
    return 0;
}

