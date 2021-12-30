// find maximum using conditional operator

#include <stdio.h>  
  
int main() {  
    int a, b, maximum;  

    printf("Enter Two Integers\n");  
    scanf("%d %d", &a, &b);  
  
    if(a == b){
        printf("Both Equal\n");
        return 0;
    }

    maximum = (a > b) ? a : b;  
  
    printf("%d is Maximum\n", maximum);  
  
    return 0;  
} 