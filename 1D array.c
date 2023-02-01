//ARRAY

/*//READ AND PRINT ALL ELEMENTS
#include<stdio.h>
void main()
{
    int n;
    scanf("%d\n",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
       scanf("%d", &a[i]);
       printf("%d",a[i]);
    }
}*/


/*//PRINT AND COUNT OF NEGATIVE ELEMENTS
#include<stdio.h>
void main()
{
    int n,k=0;
    scanf("%d\n",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            k++;
            printf("%d ",a[i]);
        }
        else;
    }
    printf("\n%d",k);
}*/


/*//SUM OF ALL ELEMENTS
#include<stdio.h>
void main()
{
    int n,sum=0;
    scanf("%d\n",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
}*/


/*//MIN AND MAX AMONG ELEMENTS
#include<stdio.h>
void main()
{
    int n,max=0,min=99999;
    scanf("%d\n",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i=0;i<n;i++)
    {
        {
            if(a[i]<min)
            min=a[i];
            else;
        }
        {
        if(a[i]>max)
        max=a[i];
        else if(a[i]<min)
        min=a[i];
        }
    }
    printf("%d\n%d",max,min);
}*/


/*//COUNT OF EVEN AND ODD ELEMENTS
#include<stdio.h>
void main()
{
    int n,k=0,l=0;
    scanf("%d\n",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i=0;i<n;i++)
    {
            if(a[i]%2==0)
            k++;
            else
            l++;
    }
    printf("%d\n%d",k,l);
}*/


/*//SUM OF EVEN AND PRODUCT OF ODD NUMBERS
#include<stdio.h>
void main()
{
    int n,sum=0,product=1;
    printf("enter the size");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            sum=sum+a[i];
        }
        else if(a[i]%!=0)
        product=product*a[i];
    }

    printf("%d\n",sum);
    printf("%d",product);

}*/


/*//PRINT ELEMENTS AT ODD POSITIONS
#include<stdio.h>
void main()
{
    int n,i;
    printf("enter the size ");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("the elememts at odd positions are"); 
    for(i=0;i<n;i=i+2)
    {
        printf("%d",a[i]);
    }
}*/


/*//COPY ELEMENTS OF 1 ARRAY INTO ANOTHER
#include<stdio.h>
void main()
{
    int n,k=0;
    scanf("%d\n",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i=0;i<n;i++)
    {
        b[i]=a[i];
        printf("%d ",b[i]);
    }
}*/


/*//MERGE TWO ARRAY IN THIRD ONE
#include<stdio.h>
void main()
{
    int m,n,o,i;
    scanf("%d \n%d",&m,&n);
    o=m+n;
    int a[m],b[n],c[o];
    
    for(i=0;i<m;i++)
    {
    scanf("%d",&a[i]);
    c[i]=a[i];
    }
    
    for(i=0;i<n;i++)
    scanf("%d",&b[i]);
    for(i=0;i<o;i++)
    c[m+i]=b[i];

    for(i=0;i<o;i++)
    printf("%d",c[i]);
}*/


/*
//INSERTION OF AN ELEMENT AT PARRTICULAR LOCTION
#include <stdio.h>
void main()
{
    int n,i,j,pos,ele;
    scanf("%d",&n);
    printf("enter the element and position");
    scanf("%d %d",&ele,&pos);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[n]);
    n++;
    for(i=n-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=ele;
    for(i=0;i<n;i++)
    printf("%d",a[i]);
}*/

/*//DELETION OF ELEMENT
#include<stdio.h>
void main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    printf("enter elements");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    int ele;
    printf("Enter the element to be deleted");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
        if(a[i]==ele)
        {
            j=i;
            for(j=i;j<n;j++)
            a[j]=a[j+1];
        }
    }
    for(i=0;i<(n-1);i++)
    printf("%d",a[i]);
}*/


/*//COUNT OF A DUPLICATE NUMBER
#include<stdio.h>
void main()
{
    int n,i,ele,k=0;
    printf("size of array");
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter element");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
        if(ele==a[i])
        k++;
    }
    printf("frequency of %d is %d",ele,k);
}*/


/*//PRINT ARRAY IN REVERSE ORDER
#include<stdio.h>
void main()
{
    int n,i,max=0;
    printf("size of array");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=n-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
}*/


/*//SORTING OF ARRAY
#include<stdio.h>
void main()
{
    int n,i,t=0;
    printf("enter the size");
    scanf("%d",&n);
    int a[n];
    printf("enter elements");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }

    for(i=0;i<n;i++)
    printf("%d",a[i]);
}*/


/*//SECOND LARGEST ELEMENT
#include<stdio.h>
void main()
{
    int n,i,t=0;
    printf("enter the size");
    scanf("%d",&n);
    int a[n];
    printf("enter elements");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }

    for(i=0;i<n;i++)
    printf("%d",a[i]);
    for(i=0;i<n;i++)
    {
        s=a[n-1];
    }
    if(a[i]==s)
    {
        printf("second largest number is %d",a[i-1]);
        break;
    }
}*/

