
#include <stdio.h>
#include <stdlib.h>

struct node {
    int item;
};

void insert(int a, struct node *b) {
    b->item = a;
}

int main() {
    struct node newnode;  // local node
    int i = 5;

    insert(i, &newnode);  // passing the address of newnode
    printf("%d", newnode.item);  // printing the value of item in newnode

    return 0;
}

