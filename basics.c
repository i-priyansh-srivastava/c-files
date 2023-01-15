/*
#include<stdio.h>
#include<math.h>
void main()

{
    printf("Hello world ");
}
*/


/*//ARITHMETIC OPERATIONS
#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c;
    printf("enter the two number");
    scanf("%d %d",&a,&b);
    c=pow(a,b);
    printf("the sum is %d\n",a+b);
    printf("the difference is %d\n",a-b);
    printf("the product is %d\n",a*b);
    printf("the quiotient is %d\n",a/b);
    printf("the remainder is %d\n",a%b);
    printf("the result is %d\n",c);
}*/

/*//CIRCLE
#include<stdio.h>
#include<math.h>
void main()
{
    float r,pie=3.47;
    printf("Enter the radius of circle");
    scanf("%f",&r);
    printf("diameter is %f",2*r);
    printf("circumference is is %f",2*pie*r);
    printf("area is %f",pie*r*r);
}*/


/*//DECIMAL VALUE UPTO N VALUES
#include<stdio.h>
#include<math.h>
void main()
{
    float num,n;
    printf("enter the number",&num);
    scanf("%f",&num);
    printf("%0.2f",num);

}*/


/*//TABLE of Nth number entered
#include<stdio.h>
#include<math.h>
void main()
#include <stdio.h>
int main()
{
   int a;
   printf("Enter the number you want table of:\n");
   scanf("%d", &a);
   printf("Multiplication table of %d is as follows\n", a);
   
   printf("%d X 1 = %d\n", a, a*1);   
   printf("%d X 2 = %d\n", a, a*2);   
   printf("%d X 3 = %d\n", a, a*3);   
   printf("%d X 4 = %d\n", a, a*4);   
   printf("%d X 5 = %d\n", a, a*5);   
   printf("%d X 6 = %d\n", a, a*6);   
   printf("%d X 7 = %d\n", a, a*7);   
   printf("%d X 8 = %d\n", a, a*8);   
   printf("%d X 9 = %d\n", a, a*9);   
   printf("%d X 10 = %d\n", a, a*10);   
   return 0;
}*/


/*//MESSAGE ACCORDING TO TIME
#include<stdio.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int HH,MM;
    scanf("%d %d",&HH,&MM);
    if((HH>=4&&HH<=11)&&(MM>=0&&MM<=59)){
        printf("Good Morning");
    }
    else if((HH>=12&&HH<=15)&&(MM>=0&&MM<=59)){
        printf("Good Afternoon");
    }
    else if((HH>=16&&HH<=20)&&(HH>=0&&MM<=59)){
        printf("Good Evening");
    }
    else if(((HH>=22&&HH<=23) || (HH>=1&&HH<=3))&&(MM>=0&&MM<=59)){
        printf("Good Night");
    }
return 0;
}*/


/*//FIND THE OPERATOR
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,r;
    scanf("%d %d %d",&a,&b,&r);
    if(a+b==r){
        printf("+");
    }
    else if(a-b==r&&b-a==-r)
        printf("-");
    else if(a/b==r)
        printf("/");
    else if(a*b==r)
        printf("*");
    else if(a%b==r)
        printf("%%");
    return 0;
}*/

/*//SWAP WITH BITWISE
#include<stdio.h>
#include<math.h>
void main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("%d\n%d",a,b);
}*/


