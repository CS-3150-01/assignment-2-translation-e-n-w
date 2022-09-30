#include <stdio.h>
#include <stdlib.h>

struct BinarySearchTree{
    struct Node* root;
};

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct BinarySearchTree* createBST(){
    struct BinarySearchTree* tree = (struct BinarySearchTree*)malloc(sizeof(struct BinarySearchTree));
    tree->root = NULL;
    return tree;
}

struct Node* createNode(int data){
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

int factorial(int n){
    if(n == 0){
        return 1;
    }
    int result = 1;
    while(n>1){
        result *= n;
        n--;
    }
    return result;
}

int numOfBST(int key){
    int catalanNumber = factorial(2 * key)/(factorial(key + 1) * factorial(key));    
    return catalanNumber;
}

int main() {
    printf("%d", factorial(4));
    return 0;
}