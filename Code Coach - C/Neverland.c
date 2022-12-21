#include <stdio.h>

int main() {
    int mage;
    scanf("%d",&mage);
    int twage;
    scanf("%d",&twage);
    
    //after you come neverland 
    int sum;
    sum = mage + twage;
    printf("My twin is %d years old and they are %d years older than me",sum,twage );

    return 0;
}