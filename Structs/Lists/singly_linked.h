#ifndef SINGLY_LINKED
#define SINGLY_LINKED

struct SinglyNode {
    int val;
    SinglyNode* next;
};

class SinglyList {
    public: SinglyNode* head;
    private: int length;

    public:
        SinglyList();
        ~SinglyList();
        void Append(int);
        void Insert(int, int);
        void DeleteIdx(int);
        void DeleteVal(int);
        SinglyNode* SearchVal(int);
        SinglyNode* SearchIdx(int);
        void Show();
        int Length();
};

#endif