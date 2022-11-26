#include<stdio.h>
#include<conio.h>
int main()
{
    int a=10;
    float num1,num2,choice;
    char case_var;
    printf("\nSIMPLE CALCULATOR !\n");
    while (choice)
    {
        printf("\nEnter number 1: ");
        scanf("%f",&num1);
        printf("Enter number 2: ");
        scanf("%f",&num2);
        printf("Select Operation: ( + , - , * , / ) : ");
        scanf(" %c",&case_var);
        switch(case_var)
        {
            case '+':
                printf("%.2f + %.2f = %.2f",num1,num2,num1+num2);
                break;
            case '-':
                printf("%.2f - %.2f = %.2f",num1,num2,num1-num2);
                break;
            case '*':
                printf("%.2f * %.2f = %.2f",num1,num2,num1*num2);
                break;
            case '/':
                printf("%.2f / %.2f = %.2f",num1,num2,num1/num2);
                break;
            default:
                printf("Invalid");   
        }
        printf("\n\nDo you want to continue(0-no): ");
        scanf("%f",&choice);
    } 
    printf("\nEND\n");
    return 0;
}

//this is the first commit that i have made
