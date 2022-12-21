#include <stdio.h>

int main() {
    int siblings, popsicles;
    scanf("%d", &siblings);
    scanf("%d", &popsicles);

    //your code goes here
    if (popsicles%siblings==0)
    {
        printf("give away");
    }
    else {
        printf("eat them yourself");
    }
    return 0;
}