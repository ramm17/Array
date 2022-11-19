#include<stdio.h>
#include<conio.h>
int main()
{
    int m=2,n=3,sum=0;
    int a[m][n],i,j;
    printf("Enter elements in %dx%d matrix:\n",m,n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nDisplaying Array elemnts:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("a[%d][%d]=%d\n",i,j,a[i][j]);
        }
    }
    printf("\nDisplaying Array elements in Matrix form:\n");
    for(i=0;i<m;i++)
    {
        sum=0;
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
            sum+=a[i][j];
        }
        printf("=%d\n",sum);
    }
    getch();
    return 0;
}

