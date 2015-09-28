/* Bubble sort */

#include <stdio.h>

int main() {
    int size = 10;
    int numbers[10] = {5,2,3,9,0,-1,6,3,5,8};

    for (int i=0; i < size; i++) {
        for (int j=0; j < size-1; j++) {
            if (numbers[j] > numbers[j+1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;
            }
        }
    }

    for (int i=0; i < 10; i++) {
        printf("%i ",numbers[i]);
    }
    printf("\n");

}
