#include <stdio.h>
 int main(){
    int num1, num2 ,num3;
    int result;
    printf("enter three numbers:");
    scanf("%d %d", &num1 , &num2 ,&num3);
    result=num1 + num2 +num3;
    printf("%d + %d + %d = %d\n",num1,num2,result);
    return 0;
 }