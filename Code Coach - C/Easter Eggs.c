#include <stdio.h>

int main() {
int c;//candy 
int m;//my candy 
int f;//friend candy
scanf("%d",&c);
scanf("%d",&m);
scanf("%d",&f);
int sum;
sum=m+f;
if(sum==c){
    printf("Candy Time");
}
else{
    printf("Keep Hunting");
}
return 0;
}