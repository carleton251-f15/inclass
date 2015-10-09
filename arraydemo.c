#include <stdio.h>
#include <stdlib.h>

int main() {

    int values[3];
    values[0] = 8;
    values[1] = 9;
    values[2] = 10;
    *values = 11;
    *(values+1) = 12;
    printf("%i\n",values[0]);
    printf("%i\n",values[1]);
    printf("%i\n",values[2]);

    int *morevalues = malloc(sizeof(int)*3);
    morevalues[0] = 15;
    morevalues[1] = 16;
    morevalues[2] = 17;
    printf("%i\n",morevalues[0]);
    printf("%i\n",morevalues[1]);
    printf("%i\n",morevalues[2]);
    free(morevalues);
    

}
