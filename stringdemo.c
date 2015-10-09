#include <stdio.h>
#include <stdlib.h>

int main() {

    char *word = "hello";
    printf("%s\n",word);
    printf("%c\n",word[0]);
    printf("%c\n",word[1]);
    
    char funfun[4];
    funfun[0] = 'a';
    funfun[1] = 'b';
    funfun[2] = 'c';
    funfun[3] = '\0';
    printf("here it is: %s\n",funfun);

}
