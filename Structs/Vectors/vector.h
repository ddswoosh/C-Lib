#ifndef VECTOR
#define VECTOR

template <typename T>
class Vector {
    private: 
        int memSize = 1;
        int length;
        T* vector;
    

    public:
        Vector();
        ~Vector();
        void Resize();
        void Append(T);
        T PopLeft();
        T PopRight();
        void Sort(T*);
        int search(T*);
        int Length();
};

#endif