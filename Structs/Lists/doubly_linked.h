#ifndef DOUBLY_LINKED
#define DOUBLY_LINKED

struct DoublyNode {
    int val;
    DoublyNode* next;
    DoublyNode* prev;
    
};

class DoublyList {
    public: DoublyNode* head;
    private: int length;

    public:
        DoublyList();
        ~DoublyList();
        void Append(int);
        void Insert(int, int);
        void DeleteIdx(int);
        void DeleteVal(int);
        DoublyNode* SearchVal(int);
        DoublyNode* SearchIdx(int);
        void Show();
        void ShowReversed();
        int Length();
};

#endif