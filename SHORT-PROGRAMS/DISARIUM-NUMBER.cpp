#include<stdio.h>
#include<math.h>

int main(){
    int number,copy_number,digit;
    double sum = 0;
    printf("Enter your no here: ");
    scanf("%d",&number);

    for(int i =10,j = 1;;i *= 10,j++){
        if(number/i == 0){
            digit = j;
            break;
        }
    }

    copy_number = number;
    int i = 0;
    while(copy_number >0){
        sum += pow(copy_number%10,(digit-i));
        copy_number = copy_number/10;
        i++;
    }

    if(number == (int)sum)
        printf("The number is disarium no...\n");
    else
        printf("The number is not a disarium no...\n");

    return 0;
}
