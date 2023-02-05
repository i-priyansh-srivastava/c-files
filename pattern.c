/*
    // 1
    // 12
    // 123
#include<stdio.h>
void main()
{
    int n,i,j;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        printf("%d",j);
        printf("\n");
    }

}*/


/*
//   *
//   **
//   ***
#include<stdio.h>
void main()
{
    int n,i,j;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        printf("*");
        printf("\n");
    }
}*/


/*
//  *
//   *
//    *
//     *
//      *
#include<stdio.h>
void main()
{
    int n,i,j;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        printf(" ");
        printf("*");
        printf("\n");
    }
}*/


/*
// ***
// **
// *  
#include<stdio.h>
void main()
{
    int n,i,j;
    printf("enter the number");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        for(j=1;j<=i;j++)
        printf("*");
        printf("\n");
    }
}*/


/*
// 321
// 21
// 1
#include<Stdio.h>
void main()
{
    int n,i,j;
    printf("enter the number");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        for(j=i;j>0;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}*/


/*
//   *
//  *
// *
#include<Stdio.h>
void main()
{
    int n,i,j,k;
    printf("enter the number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            printf(" ");
        }
        for(k=i;k<=i;k++)
        printf("*");
        printf("\n");
    }
}*/


/*
//   *
//  **
// ***
#include<stdio.h>
void main()
{
    int n,i,j,k;
    printf("enter the number ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
        printf(" ");
        for(k=1;k<=i;k++)
        printf("*");
        printf("\n");
    }
}*/


/*
//   $
//  $$$
// $$$$$
#include<stdio.h>
void main()
{
    int n,i,j,k;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(n-i);j++)
        printf(" ");
        for(k=1;k<=(2*i-1);k++)
        printf("$");
        printf("\n");
    }
}*/