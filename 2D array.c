//SUM OF TWO MATICES
/*#include<stdio.h>
void main()
{
    int n,m,i,j;
    scanf("%d%d",&m,&n);
    int a[m][n],b[m][n],c[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&b[i][j]);
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        c[i][j]=a[i][j]+b[i][j];
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        printf("%d",c[i][j]);
        printf("\n");
    }
}*/


/*//SCALAR MULTIPLICATION OF MATRIX
#include<stdio.h>
void main()
{
    int m,n,i,j,k;
    scanf("%d %d %d",&m,&n,&k);
    int a[m][n], scalar[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scalar[i][j]=k*a[i][j];
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",scalar[i][j]);
            printf("\n");
        }
    }
}*/


/*//TWO MATRICES EQUAL OR NOT
#include<stdio.h>
void main()
{
    int m,n,i,j,f=1;
    scanf("%d %d",&m,&n);
    int a[m][n], b[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&a[m][n]);
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&b[m][n]);
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]!=b[i][j])
            {
                f=0;
                break;
            }
        }
        if(f==1)
        printf("Equal Matrices");
        else
        printf("Unequal Matrices");
    }
}*/

/*//SWAP ARRAY
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() 
{
    int n,temp,i;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    for(i=0;i<n/2;i++)
    {
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}*/


/*//SUM OF MAIN DIAGONALS
#include<stdio.h>
void main()
{
    int n,i,j,sum=0;
    scanf("%d",&n);
    int a[n][n];
    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        if(i==j)
        sum=sum+a[i][j];
        }
    }
    printf("%d",sum);
}*/


/*//SUM OF ELEMENTS OF MINOR DIAGONAL
#include<stdio.h>
void main()
{
    int n,i,j,sum=0;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i+j==(n-1))
            sum=sum+a[i][j];
        }
    }
    printf("%d",sum);
}*/


/*// SUM OF ALL ELEMENTS OF ROWS AND COMPLEX
#include<stdio.h>
void main()
{
    int n,i,j,sum=0;
    scanf("%d",&n);
    int a[n][n];
    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    printf("Sum of each row is");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        sum=sum+a[i][j];
        }
        printf("%d\n",sum);
        sum=0;
    }
    printf("Sum of column matrcix");
    for(j=0;j<n;j++)
    {
        for(i=0;i<n;i++)
        {
        sum=sum+a[i][j];
        }
        printf("%d",sum);
        sum=0;
    }
}*/


/*//PRINT UPPER TRIANGLE OF MATRIX
#include<stdio.h>
void main()
{
    int n,i,j,sum=0;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if((i+j)<n)
            printf("%d ",a[i][j]);
        }
    }
}*/


/*// PRINT LOWER TRIANGLE OF MATRIX
#include<stdio.h>
void main()
{
    int n,i,j,sum=0;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if((i+j)>=(n-1))
            printf("%d ",a[i][j]);
        }
    }
}*/


/*// SUM OF ELEMENTS OF UPPER TRIANGLE
#include<stdio.h>
void main()
{
    int n,i,j,sum=0;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if((i+j)<=(n-1))
            {
                sum=sum+a[i][j];
            }
        }
    }
    printf("%d",sum);
}*/


/*//SUM OF ELEMENTS OF LOWER TRIANGLR
#include<stdio.h>
void main()
{
    int n,i,j,sum=0;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if((i+j)>=(n-1))
            {
                sum=sum+a[i][j];
            }
        }
    }
    printf("%d",sum);
}*/


/*//SPARSE MATRIX
#include<stdio.h>
void main()
{
    int m,n,i,j,k=0,p=0;
    scanf("%d %d",&m,&n);
    int a[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]==0)
            k++;
            else
            p++;
        }
    }
    if(k>p)
    printf("SPARSE MATRIX");
    else
    printf("NON-SPARSE MATRIX");
}*/


/*//IDENTITY MATRIX
#include<stdio.h>
void main()
{
    int m,n,i,j,k=1,f=1;
    scanf("%d %d",&m,&n);
    int a[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                if (a[i][j]==1)
                f=1;
                else
                {
                 f=0;
                 break;
                }
            }
            else if(i!=j)
            {
                if(a[i][j]==0)
                k=1;
                else
                {
                    k=0;
                    break;
                }
            }
        }
    }
    if(f==1 && k==1)
    printf("IDENTITY MATRIX");
    else
    printf("NOT A IDENTITY MATRIX");
}*/


/*//TRANSPOPSE MATRIX
#include<stdio.h>
void main()
{
    int m,n,i,j;
    scanf("%d %d",&m,&n);
    int a[m][n], transpose[n][m];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            transpose[j][i]=a[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        printf("%d ",transpose[i][j]);
        printf("\n");
    }
}*/








