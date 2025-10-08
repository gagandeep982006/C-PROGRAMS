#include<stdio.h>
#include<math.h>

int main(){
    int a, digit = 0,copy_a;
    double sum =0;
    printf("Enter your no here: ");
    scanf("%d",&a);

    copy_a = a;
    while(copy_a != 0){
        digit++;
        copy_a = copy_a/10;
    }

    copy_a = a;
    while(copy_a>0){
        sum += pow(copy_a%10,digit);
        copy_a = copy_a/10;
        
    }

    if((int)sum == a)
        printf("Yes it is a amstrong number\n");
    else
        printf("No it is not a amstrong number\n");

    return 0;
}
