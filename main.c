#include <stdio.h>
#include "list.h"

int main() {
    printf("Hello, World!\n");
    List_t *head = NULL;
    int val;
    int task = 0;
    while (task != 999){
        printf("Task: ");
        scanf("%d", &task);
        switch (task) {
            case 1:
                printf("New val: ");
                scanf("%d", &val);
                add(&head, val);
                break;
            case 2:
                printf("List: ");
                print_list(head);
        }
    }
    return 0;
}
