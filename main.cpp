// Standard includes
#include <iostream>
#include <string>

// Header includes
#include "Structs\Lists\singly_linked.cpp"
#include "Structs\Lists\doubly_linked.cpp"


int main() {
    DoublyList* linked_list = new DoublyList;

    linked_list->Append(2);
    linked_list->Append(4);
    linked_list->Append(152);
    linked_list->Insert(168, 0);
    linked_list->Insert(14, 3);
    linked_list->Append(66);
   
   
    linked_list->Show() ; std::cout << "\n";
}