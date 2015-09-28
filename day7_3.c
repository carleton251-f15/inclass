#include <stdio.h>
#include <stdlib.h>

int main() {
    int *y;
    for (int i=0; i < 100000000; i++) {
        y = malloc(sizeof(int));
        *y = i;
        //free(y);
    }
}

