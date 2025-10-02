#include<stdio.h>

int main(){
    int arr[3] = {1,5,2};
    (arr[0]<arr[1])? (arr[0] = arr[1]): (arr[0] = arr[0]);
    (arr[0]<arr[2] ) ? printf("%d",arr[2]) : printf("%d",arr[0]);

    return 0;
}
