#include <stdio.h>

int main() {

int p;//points
scanf("%d",&p);
int c;//cost
scanf("%d",&c);
    
int con; // convert of points 
con= p /12;
if(con>=c){
    printf("Buy it!");
}
else {
    printf("Try again");
}
return 0;
}