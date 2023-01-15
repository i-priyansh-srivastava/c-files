/*//Prime number
#include<stdio.h>
#include<math.h>
void main()
{
    int n,i,c=0;
    printf("enter a number ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        c++;
        else;
    }
    
    if(c==2)
    printf("%d is a prime number",n);
    else
    printf("%d isn't a prime number",n);
}*/

/*//ARMSTRONG
#include<stdio.h>
#include<math.h>
void main()
{
    int n,r,t=0;
    scanf("%d",&n);
    int k=n;
    int l=log10(n)+1;
    while(n>0)
    {
        r=n%10;
        n/=10;
        t=t+pow(r,l);
    }
    if(k==t)
    printf("armstrong");
    else
    printf("not");
}*/


/*//FIBONACCI
#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c=0,n;
    scanf("%d%d%d",&a,&b,&n);
    while(c<n)
    {
        c=a+b;
        printf("%d",c);
        a=b;
        b=c;
    }
}*/


/*//FACTORIAL
#include<stdio.h>
#include<math.h>
void main()
{
    int n,ans=1;
    scanf("%d",&n);
    for(int i=1;n>0;n--)
    {
        ans=ans*n;
    }
    printf("%d",ans);
}*/


/*//STRONG
#include<stdio.h>
#include<math.h>
void main()
{
    int n,ans=1,sum=0,r;
    scanf("%d",&n);
    int k=n;
    while(n>0)
    {
        r=n%10;
        for(int i=1;r>0;r--)
    {
        ans=ans*r;
    }
     sum=sum+ans;
     n=n/10;
     ans=1;
    }
    if(k==sum)
    printf("strong");
    else
    printf("not");
}*/


/*//PERFECT
#include<stdio.h>
#include<math.h>
void main()
{
    int n,sum;
    scanf("%d",&n);
    int k=n;
    for(int i=1;i<=(n/2);i++)
    {
        if((n%i)==0)
        sum=sum+i;
        else;
    }
    if(k==sum)
    printf("perfect");
    else
    printf("non perfect");
}*/


/*//PALLINDROME
#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,t=0;
    scanf("%d",&a);
    int k=a;
    while(a>0)
    {
        b=a%10;
        a=a/10;
        t=t*10+b;
    }
    if(k==t)
    printf("yes");
    else
    printf("x");
}*/


/*//CHECK POWER OF 2
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d",&n);
    while(n%2==0)
    {
     n=n/2;
    }
    if(n==1)
        printf("%d",1);
        else
            printf("%d",0);
    return 0;
}*/


/*//MIN AND MAX AMONG SET OF NUMBERS ENTERED
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() 
{
    int T,N,Ni,i=1,min=0,max=0;
    scanf("%d\n",&T);
    while(T>0)
    {
        scanf("%d\n",&N);
        while(N>0)
        {
            scanf("%d ",&Ni);
            {
                if(i==1)
                {
                    min=max=Ni;
                    i++;
                }
                else if(i>=2)
                {
                    if(min>Ni)
                        min=Ni;
                    else
                        max=Ni;
                }
            }
            N--;
        }
        T--;
    }
    printf("Min=%d Max=%d", min,max);
    return 0;
}*/


/*//SUM OF SERIES 1-1!+2/2!+3/3!+.....N/N!
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n,fact=1;
    scanf("%d",&n);
    float x=0;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
        x=x+(n/fact); 
    }
    printf("%f",x);
    return 0;
}*/



                                                //10







