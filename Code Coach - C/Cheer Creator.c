#include <stdio.h>

int main() {
int a;
char c[] = "shh";
char c1[] = "Ra!";
char c2[]= "High Five";
scanf("%d",&a);
if(a>=1&&a<=10){
for(int i=0;i<a;i++)
{
    printf("%s",c1);
    }
}
/*
else if(a<1){
for(int i=1;i>a;i--){
    printf("%s",c);}}*/

else if(a<1){
printf("%s",c);}
else if(a>10){
    printf("%s",c2);
}
    return 0;
}