#include <iostream>
#include "avl_tree.h"

void AVLTree::insert(const int key) {
  this->root = insert(key, this->root);
}

BinaryNode* AVLTree::insert(const int key, BinaryNode* node) {
  if (node == NULL) {
    return new BinaryNode(key);
  }

  if(key < node->key) {
    if(node->left == NULL) {
      node->left = new BinaryNode(key); 
    } 
    else {
      node->left = insert(key, node->left);
    }
  }
  else {
    if(node->right == NULL) {
      node->right = new BinaryNode(key); 
    } 
    else {
      node->right = insert(key, node->right);
    }
  }

  return node;
}
