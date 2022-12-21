#include <stdio.h>

int main() {
int p;
int time;
int w;
int a;
scanf("%d",&p);
if (p<20){
    time =10;
    printf("%d",time);
}
else{
    w=p/20;
    a=((w*2)*10)+10;
    printf("%d",a);
    
}

    return 0;
}