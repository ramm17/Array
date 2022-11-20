#include<stdio.h>
#include<conio.h>
int main()
{
    int n=5;
    int arr[n],i;
    printf("Enter the no of elements in the array\n",n);
    printf("Enter the numbers\n");

    for(i=0;i<n;++i)
    {
        scanf("%d",&arr[i]);
    }
    printf("nGiven Array elements in Reverse order");
    for(i=n-1;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
    getch();
    return 0;
}
