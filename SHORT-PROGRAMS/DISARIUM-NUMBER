#include<stdio.h>


int main(){
    int no1,no2;
    char operation ;
    float div = 1;
    printf("Enter your first no: ");
    scanf("%d",&no1);

    printf("Enter your second no: ");
    scanf("%d",&no2);

    printf("Enter your operation: ");
    //because scanf return the \n and it is readed by getc;
    operation = getc(stdin);
    //but here getc does not return \n;
    scanf("%c",&operation);

    if(operation == '+') goto sum;
    else if(operation == '-') goto minus;
    else if(operation == '*') goto multiply;
    else if(operation == '/') goto divide;
    else if(operation == '^') goto power;

    sum:
        no1 = no1+no2;
        printf("Sum: %d",no1);
        return 0;
    minus:
        no1 = no1-no2;
        printf("Minus: %d",no1);
        return 0;
    multiply:
        no1 = no1*no2;
        printf("Multiply: %d",no1);
        return 0;
    divide:
        div = (float)no1/no2;
        printf("Divide: %f",div);
        return 0;
    power:
        int pow = 1;
        for(int i =1;i<=no2;i++){
            pow *= no1;
        }
        printf("Power: %d",pow);
        return 0;

    return 0;
}
