#ifndef BST_H
#define BST_H

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
};

class BST {
    public: TreeNode* head;
    private: int height;
    
    public:
        BST();
        ~BST();
        void Insert(int);
        void Delete(int, int);
        void Swap(TreeNode*);
        int* BFS(TreeNode*);
        int* PreOrderDFS(TreeNode*);
        int* PreOrderDFS(TreeNode*);
        int* PreOrderDFS(TreeNode*);
        TreeNode* SearchVal(int);
        TreeNode* SearchIdx(int);
        int Height();
        int Diameter();
};

#endif