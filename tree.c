//
// Created by owlya on 15.04.2022.
//

#include "tree.h"

struct node{
    int field;
    struct node *left;
    struct node *right;
    struct node *parent;
};

void treeprint(Node_t *tree, int layer) {
    if (tree!=NULL) {
        treeprint(tree->left, layer+1);
        treeprint(tree->right, layer+1);
        printf("layer %d = %d\n", layer, tree->field);
    }
}

void add_new_node(int x, Node_t **p, Node_t *parent){ //FIXME: ** is bad practise
    Node_t *new_node = malloc(sizeof(Node_t));
    new_node->field = x;
    new_node->right = NULL;
    new_node->left = NULL;
    new_node->parent = parent;
    if(new_node->parent == NULL){
        printf("NULL\n");
    }else{
        printf("Parent: %d\n", new_node->parent->field); //TODO: delete parent
    }
    *p = new_node;
}

void insert(Node_t **root, int x, Node_t *parent){
    if(*root == NULL){
        add_new_node(x, root, parent);
        return;
    }
    if(x > (*root)->field){
        insert( &(*root)->right, x, *root);
    }else{
        insert( &(*root)->left, x, *root);
    }
}