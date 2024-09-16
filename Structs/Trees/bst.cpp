// Standard includes 
#include <iostream>

// Header includes
#include "bst.h"
#include "Vectors/vector.cpp"

BST::BST() : head(nullptr), height(0) {}
BST::~BST() {}

void BST::Insert(int val) {
    TreeNode* node = new TreeNode;
    node->val = val;
    node->left, node->right = nullptr;

    if (head == nullptr) {
        head = node;
    } else {
        TreeNode* temp = head;

    }
}

void BST::Swap(TreeNode* node) {

}

void BST::Delete(int val, int idx) {
}

template <typename T>
Vector<T>* BFS(TreeNode* node) {
    Vector<int>* queue = new Vector<int>;
    Vector<int>* res = new Vector<int>;

    queue->Append(node->val);

    while (queue->Length()) {
        TreeNode* temp = queue->PopLeft();

        res->Append(temp->val);

        if (temp->left != nullptr) {
            queue->Append(temp->left);
        }
        if (temp->right != nullptr) {
            queue->Append(temp->right);
        }
    }

    return res;
}

int* PreOrderDFS(TreeNode*){

}
int* PreOrderDFS(TreeNode*){

}
int* PreOrderDFS(TreeNode*){

}

TreeNode* SearchVal(int){
    
}
TreeNode* SearchIdx(int){
    
}
int Height(){
    
}
int Diameter(){
    
}