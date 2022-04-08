//
// Created by owlya on 08.04.2022.
//

#include "list.h"
struct list{
    int data;
    struct list *ptr
};

void add(List_t **head, int data){
    List_t *new_var = malloc(sizeof (List_t));
    new_var->data = data;
    new_var->ptr = *head;
    *head = new_var;
}

void print_list(List_t *head){
    while(head){
        printf("%d  ", head->data);
        head = head->ptr;
    }
}