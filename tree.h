//
// Created by owlya on 15.04.2022.
//
#include <malloc.h>
#include <stdlib.h>

#ifndef UNTITLED3_TREE_H
#define UNTITLED3_TREE_H

#endif //UNTITLED3_TREE_H

struct node;

typedef struct node Node_t;

void treeprint(Node_t *tree, int level);
void add_new_node(int x, Node_t **p, Node_t *parent);
void insert(Node_t **root, int x, Node_t *parent);
