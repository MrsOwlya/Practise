//
// Created by owlya on 08.04.2022.
//
#include <malloc.h>
#include <stdlib.h>

#ifndef UNTITLED3_LIST_H
#define UNTITLED3_LIST_H

#endif //UNTITLED3_LIST_H

struct list;
typedef struct list List_t;

void add(List_t **head, int data);
void print_list(List_t *head);