#include<stdio.h>
#include<conio.h>
int main()
{
    int n=5;
    int arr[n],i,num;
    for(i=0;i<n;i++)
    {
        printf("Enter Element[%d]:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be searched:\n");
    scanf("%d",&num);


    for(i=0;i<=n;i++)
    {
        if(num==arr[i])
        {
            printf("%d is in the Array list:",num);
            getch();
            return 0;
        }
    }
    printf("%d is in the array list",num);
    getch();
    return 0;
}

