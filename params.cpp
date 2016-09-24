#include <stdio.h>

// call by value
void doit1(int x) {
    x = 12;
}


// call by value
void doit2(int *x) {
    *x = 12;
}


// call by reference (C++ only, not C)
//void doit3(call-by-reference int x)
//void doit3(ref int x)
//void doit3(int ref x)
void doit3(int &x) {
    printf("address of x%p\n",&x);
    x = 19;
}



int main() {
    int y = 9;
    doit1(y);
    // See! call by value.
    printf("%i\n",y);

    // Still call by value; difference is a
    // memory address is the value being copied
    // in
    doit2(&y);
    printf("%i\n",y);

    int z = 5;
    doit3(z);
    printf("%i\n",z);
    printf("address of z%p\n",&z);
    

    
    
}
    
