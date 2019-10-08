#ifndef AVL_TREE_H
#define AVL_TREE_H

struct BinaryNode {
  BinaryNode(const int key) : key(key), left(NULL), right(NULL) {}

  ~BinaryNode() {
    delete left;
    delete right;
    left = right = NULL;
  }

  int key;
  BinaryNode *left, *right;
};

class AVLTree {

public:
  AVLTree() : root(NULL) {}
  ~AVLTree() { 
    delete root;
  }

  void insert(const int key);

private:
  BinaryNode* insert(const int key, BinaryNode* node);

  BinaryNode* root;
};

#endif
