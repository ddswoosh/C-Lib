#ifndef SINGLY_LINKED
#define SINGLY_LINKED

struct Node {
    int val;
    Node* next;
};

class List {
    public: Node* head;
    private: int length;

    public:
        List();
        ~List();
        void Append(int);
        void Insert(int, int);
        void DeleteIdx(int);
        void DeleteVal(int);
        Node* SearchVal(int);
        Node* SearchIdx(int);
        void Show();
        int Length();
};

#endif