
#include<stdio.h>
void main()
{
    int a,b;
    char op;

    printf("enter a,b values");
    scanf("%d %d",&a,&b);

    printf("enter the operator");
    scanf(" %c",&op);

    switch(op)
    {
        case '+':
            printf("%d",a+b);
            break;

        case '-':
            printf("%d",a-b);
            break;

        case '*':
            printf("%d",a*b);
            break;

        case '%':
            printf("%d",a%b);
            break;

        case '/':
            printf("%d",a/b);
            break;

        default:
            printf("enter only arithmetic operations");
    }
}

