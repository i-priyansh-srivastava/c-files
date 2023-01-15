/*//CUBE OF A NUMBER
#include<stdio.h>
int cube(int a);
void main()
{
    int a,x;
    printf("enter the numbere");
    scanf("%d",&a);
    x=cube(a);
    printf("cube of number is %d",x);
}

int cube(int a)
{
    return a*a*a;
}
*/


/*//DIAMETER, CIRCUMFERENCE AND AREA OF CIRCLE
#include<stdio.h>
float diameter (float r);
float circum (float r);
float area (int r);

void main()
{
    float r,d,c,a;
    scanf("%f",&r);
    d=diameter(r);
    c=circum(r);
    a=area(r);
    printf("diameter is %.3f\n circumference is %.3f\n area is %.3f\n ",d,c,a);
}

float diameter (float r)
{
    return 2*r;
}
float circum (float r)
{
    return 2*3.14*r;
}
float area (int r)
{
    return 3.14*r*r;
}*/


/*//MIN AND MAX BETWEEN TWO NUMBERS
#include<stdio.h>

int max (int x, int y);
void main()
{
    int a,b,M,m;
    printf("enter two numbers");
    scanf("%d \n %d",&a,&b);
    M=max(a,b);
    m=min(a,b);
    printf("max is %d\n",M);
    printf("min is %d\n",m);
}

int max (int x, int y)
{
    return (x>y)?x:y;
}

int min (int x, int y)
{
    return (x<y)?x:y;
}*/


/*//EVEN OR ODD
#include<stdio.h>
int find(int a);

void main()
{
    int n,x;
    printf("enter the number");
    scanf("%d",&n);
    x=find(n);
    if (x==0)
    printf("entered number is even\n");
    else
    printf("entered number is odd\n");
}

int find(int a)
{
    return (a%2==0)?0:1;
}*/


/*//POWER OF NUMBER INSERTED
#include<stdio.h>
#include<math.h>
int power(int a, int b);
void main()
{
    int n,p,x;
    printf(" Enter number and its power");
    scanf("%d %d",&n,&p);
    x=power(n,p);
    printf("resutl is %d",x);
}

int power(int a, int b)
{
    return pow(a,b);
}*/



/*//PRINT ALL NUMBERS IN GIVEN RANGE
#include<stdio.h>
void nat_no (int a, int b);
void main()
{
     int n1,n2,j,x,n=0,i;
     printf("Enter the range");
     scanf("%d %d",&n1,&n2);
     if(n1>n2)
     {
     n=n1;
     n1=n2;
     n2=n;
     }
     else;
     x=nat_no(n1,n2);
     printf("number series is as follows\n");
     for(j=n1;j<=n2;j++)
     printf("%d\n",j);
}

void nat_no (int a, int b)
{
    for(int i=a;i<=b;i++)
    {
        printf("%d",&i);
    }

}*/


/*//even and odd numbers in given range
#include<stdio.h>
int eve (int h);
int odd (int g);
void main()
{
    int x,y,i,j;
    printf("enter the range");
    scanf("%d %d",&x,&y);
    printf("even numbers are \n");
    for(i=x;i<=y;i++)
    {
      if(eve(i))
      printf("%d ",i);
    }

    printf("\nodd numbers are \n");
    for(j=x;j<=y;j++)
    {
      if(odd(j))
      printf("%d ",j);
    }
}


int eve(int h)
{
    if(h%2==0)
    return 1;
    else
    return 0;

}


int odd(int g)
{
    if(g%2!=0)
    return 1;
    else
    return 0;
}*/


/*//ARMSTRONG and PERFECT number
#include<stdio.h>
#include<math.h>
int armstrong(int n);
int perfect(int n);
void main()
{
    int a;
    printf("enter number ");
    scanf("%d",&a);
    {
        if(armstrong(a))
        printf("%d is a armstrong number",a);
        else
        printf("%d is not a armstrong number",a);
    }
    
    {
    if(perfect(a))
    printf("%d is a perfect number",a);
    else
    printf("%d is not a perfect number",a);
    }
}

int armstrong(int n)
{
    int r,t=0;
    int k=n;
    int l=log10(n)+1;
    while(n>0)
    {
        r=n%10;
        n/=10;
        t=t+pow(r,l);
    }
    if(k==t)
    return 1;
    else
    return 0;
}

int perfect(int n)
{
    int sum=0;
    int k=n;
    for(int i=1;i<=(n/2);i++)
    {
        if((n%i)==0)
        sum=sum+i;
    }
    if(k==sum)
    return 1;
    else
    return 0;
}*/


/*//PRIME NUMBER IN BETWEEN GIVEN RANGE
#include<stdio.h>
int prime(int a);

void main()
{
    int n1,n2,i;
    printf("ener the range");
    scanf("%d %d",&n1,&n2);
    printf("prime numbers in this range are");
    for(i=n1;i<=n2;i++)
    {
        if(prime(i))
        printf("%d  ",i);
        else;
    }

}

int prime(int a)
{
    int c=0,i;
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        c++;
    }
    if(c==2)
    return 1;
    else
    return 0;
}*/


/*//REVERSE OF A NUMBER
#include<stdio.h>
int reverse(int n);
void main()
{
    int a,z;
    printf("enter the number");
    scanf("%d",&a);
    z=reverse(a);
    printf("the revese of a number is %d",z);
}

int reverse(int n)
{
    int t=0,x=0;
    while(n>0)
    {
        t=n%10;
        n=n/10;
        x=x*10+t;
    }
    return x;
}*/

                                 //9 
                                 