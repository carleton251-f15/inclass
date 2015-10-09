#include <stdio.h>

union Keeper {
        int i;
        double d;
};

typedef union Keeper Keeper;

typedef enum {INT_TYPE,DOUBLE_TYPE,STR_TYPE} valueType;

int main() {
    Keeper k;
    k.i = 12;
    printf("i Value is %i\n",k.i);
    k.d = 9.6;
    printf("d Value is %f\n",k.d);
    printf("i Value is %i\n",k.i);
    printf("d Value is %f\n",k.d);
    k.i = 12;
    printf("i Value is %i\n",k.i);
    printf("d Value is %f\n",k.d);

    valueType dave = INT_TYPE;
    valueType steviep = STR_TYPE;
    printf("%i\n",dave);
    printf("%i\n",steviep);
    if (dave == INT_TYPE)
        printf("YES!");
}
