#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;
    x = 3;
    
    int *y;
    y = malloc(sizeof(int));
    //y = malloc(2);
    *y = 7111111;
    free(y);
    y = malloc(sizeof(int));
    *y = 12;

    printf("x = %i\n",x);
    printf("value for y = %i\n",*y);
    free(y);
}

