#include <stdio.h>

// C gives you ultimate POWER over pointers like
// no other language except some others

int main() {
    int a = 12;
    printf("%i\n",a);

    // Where is that 12?
    printf("%p\n", &a);

    // Let's make a variable that holds that memory loc
    int *x;
    x = &a;
    printf("%p\n", x);

    // Modify a by going through the pointer x
    *x = 18;
    printf("%i\n",a);
    printf("%i\n",*x);

    // Create mayhem and destruction
    //x = (int*)42; // point to somewhere crazy, bad idea
    //printf("%i\n",*x);


    // Create mayhem and destruction
    x = x-1; // point to somewhere crazy, bad idea
    printf("%i\n",*x);

    // character fun
    char letter = 'q';
    char *ltrptr = &letter;
    printf("%c\n",letter);
    printf("%p\n",ltrptr);

}
