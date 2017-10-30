typedef long tree_entry;

typedef struct Node {
  tree_entry value; 
  struct Node* left;
  struct Node* right;
} Node;

typedef struct Tree {
  Node root;
};

