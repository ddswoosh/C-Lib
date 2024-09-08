// Standard includes
#include <iostream>
#include <string>

// Header includes
#include "Structs\Lists\singly_linked.cpp"


int main() {
    List* linked_list = new List;

    linked_list->Append(2);
    linked_list->Append(4);
    linked_list->Append(152);
    linked_list->Append(1123);
    linked_list->Insert(25, 1);
    linked_list->Insert(556, 3);
    linked_list->Insert(1024, 0);
    linked_list->Insert(100, 1);

    linked_list->SearchVal(1024);
    linked_list->SearchVal(100);

    // linked_list->Show();
   
   
}