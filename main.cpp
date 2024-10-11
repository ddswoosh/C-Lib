// Standard includes
#include <iostream>

// Header includes
#include "Structs/Vectors/vector.cpp"


int main() {
    Vector<int>* vec = new Vector<int>;

    std::cout << vec->Length();
    vec->Append(1);
    vec->Append(5);
    vec->Append(343);
    vec->Append(-123); 
    std::cout << vec->Length();
    //

    // for (int i =0; i < vec->Length(); ++i) {
     
    //     std::cout << val << " ";
    // }
}