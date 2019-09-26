/*
 * This is the code to implement Parse Trees and contains all the function implementations.
 */
#include <stdio.h>
#include <stdlib.h>

#define MAX 20

int STACK[MAX], TOP;

typedef struct node{
    char * key;
    struct node *left;
    struct node *right;
} node_t;

void insert_left(node_t *, char *);
void insert_right(node_t*, char *);
node_t *getRightChild(node_t *);
node_t *getLeftChild(node_t *);
void postorder(node_t *);
void setRootVal(node_t *, char*);
char* getRootVal(node_t*);
void printStack(int []);
void push(int [], int);
void pop(int []);

int main(){
    node_t *tree = malloc(sizeof(node_t));
    tree->key = "";
    tree->left = NULL;
    tree->right = NULL;

}

void insert_left(node_t* tree, char * exp){
    if (tree->left == NULL){
        tree->key = exp;
        tree->left = tree->key;
    }
    else{
        struct node *BinTree = {exp, NULL, NULL};
        BinTree->left = tree->left;
        tree->left = BinTree;
    }
}

void insert_right(node_t* tree, char * exp){
    if (tree->right == NULL){
        tree->key = exp;
        tree->right = tree->key;
    }
    else{
        struct node *BinTree = {exp, NULL, NULL};
        BinTree->right = tree->right;
        tree->right = BinTree;
    }
}

node_t *getRightChild(node_t *tree){
    return tree->right;
}

node_t *getLeftChild(node_t *tree){
    return tree->left;
}
       
void setRootVal(node_t *tree, char* obj){
    tree->key = obj;
}
char* getRootVal(node_t* tree){
    return tree->key;
}

void postorder(node_t *tree){
    while(tree != NULL){
        postorder(getLeftChild(tree));
        postorder(getRightChild(tree));
        printf("%s\n", getRootVal(tree));
    }
}

void push(int STACK[], int toPush){
    if(TOP == MAX-1){
        printf("STACK is full. Cannot push.\n");
        return;
    }
    TOP++;
    STACK[TOP] = toPush;
    printf("Pushed the item %d!\n", toPush);
    printf("Updated STACK looks like this: \n");
    printStack(STACK);
}

void pop(int STACK[]){
    if(TOP == -1){
        printf("STACK is empty. Nothing to POP!\n");
        return;
    }
    int elem = STACK[TOP];
    TOP--;
    printf("POP'ed %d from STACK!\n", elem);
    printf("Updated STACK looks like this: \n");
    printStack(STACK);
}