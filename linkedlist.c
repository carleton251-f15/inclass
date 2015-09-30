// Dave's linked list!!!!!
#include <stdlib.h>
#include <stdio.h>

struct LinkedList {
    int value;
    struct LinkedList *next;
};

// Stop typing 'struct LinkedList' every time
typedef       struct LinkedList      LinkedList;


// Insert at front of list
LinkedList *insertFrontLL(LinkedList *list, int item) {
    LinkedList *cell = malloc(sizeof(LinkedList));
    // WORKS: (*cell).value = item;
    cell->value = item;
    cell->next = list;
    return cell;
}

// display the list
void displayLL(LinkedList *list) {
    LinkedList *cur = list;
    while (cur != NULL) {
        printf("Value = %i\n",cur->value);
        cur = cur->next;
    }
}

// Clean all the memory
void cleanup(LinkedList *list) {
    LinkedList *cur = list;
    while (cur != NULL) {
        LinkedList *follow = cur->next;
        free(cur);
        cur = follow;
    }
}

int main() {
    /*LinkedList *list1 = NULL;
    LinkedList *list2 = insertFrontLL(list1, 12);
    LinkedList *list3 = insertFrontLL(list2, 15);
    LinkedList *list4 = insertFrontLL(list3, 17);
    printf("%i\n",list4->value);
    printf("%i\n",list4->next->value);
    printf("%i\n",list4->next->next->value);*/
    LinkedList *list1 = NULL;
    list1 = insertFrontLL(list1, 12);
    list1 = insertFrontLL(list1, 15);
    list1 = insertFrontLL(list1, 17);
    /* printf("%i\n",list1->value);
    printf("%i\n",list1->next->value);
    printf("%i\n",list1->next->next->value);*/
    displayLL(list1);
    cleanup(list1);
}
