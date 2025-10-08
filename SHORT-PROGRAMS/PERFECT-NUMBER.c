//everyone make a program on perfect number but i use creative approach in it to make it faster
#include<stdio.h>
#include<math.h>

int main(){
    int number,sum = 1;
    printf("Enter your no : ");
    scanf("%d",&number);

    for(int i = 2; i<sqrt(number);i++){
        if(number %i == 0){
            sum += i;
            sum += number/i;
        }
    }
    if (sum == number) printf("Yes it is a prefect no.");
    else printf("No it is not a perfect no.");

    return 0;
}
