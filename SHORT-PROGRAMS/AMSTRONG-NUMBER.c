#include<stdio.h>
#include<math.h>

int main(){
    int a, digit = 0;
    double sum =0;
    printf("Enter your no here: ");
    scanf("%d",&a);

    for(int i = 10,j = 1;;i *=10,j++){
        if(a/i == 0){
            digit  = j;
            break;
        }
    }

    int copy_a = a;
    while(copy_a>0){
        sum += pow(copy_a%10,digit);
        copy_a = copy_a/10;
        
    }

    if((int)sum == a)
        printf("Your given no is amstrong\n");
    else
        printf("Your given no is not amstrong\n");

    return 0;
}
