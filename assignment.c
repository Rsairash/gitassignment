#include <stdio.h>
int sum();
int count();


int main()
{
    int n;
    printf("Choose the program \n \
    1. sum of two number: \n \
    2. count number upto 10. \n");
    scanf("%d",&n);

    switch (n)
    {
    case 1:
        sum();
        break;
    case 2:
        count();
        break;
    
    default:
        break;
    }
    return 0;
}

int sum()
{
    int a,b,sum;
    a=5;
    b=9;
    sum=a+b;
    printf("The sum is %d\n",sum);
}

int count()
{
    int i;
    for(i=1;i<=10;i++)
    {
        printf("%d\t",i);
    }
}