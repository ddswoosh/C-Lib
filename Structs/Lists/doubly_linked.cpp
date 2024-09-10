// Standard includes
#include <iostream>

// Header includes
#include "Doubly_linked.h"

DoublyList::DoublyList() : head(nullptr), length(0) {}
DoublyList::~DoublyList() {}

void DoublyList::Append(int val) {
    DoublyNode* node = new DoublyNode;
    node->val = val;
    node->next = nullptr;
    node->prev = nullptr;

    if (head == nullptr) {
        node->prev = head;
        head = node;
    } else {
        DoublyNode* temp = head;

        while (temp->next != nullptr) {
            temp = temp->next;
        }
        node->prev = temp;
        temp->next = node;
        temp = temp->next;
    }
    ++length;
}

void DoublyList::Insert(int val, int idx) {
    if (idx < 0) {
        throw std::out_of_range("Insertion index is before the head node.");
    } else if (idx >= length) {
        std::cout << idx << " " << length;
        throw std::out_of_range("Insertion index larger than list length, use append instead.");
    }
    DoublyNode* node = new DoublyNode;
    node->val = val;
    node->next = nullptr;
    node->prev = nullptr;
    
    if (head == nullptr) {
        node->prev = head;
        head = node;

    } else if (idx == 0) {
        node->next = head;
        node->next->prev = node;
        head = node;
    } else {
        DoublyNode* temp = head;

        int i = 0;
        while (i < idx - 1) {
            temp = temp->next;
            ++i;
    }
        node->prev = temp;
        node->next = temp->next;
        temp->next->prev = node;       
        temp->next = node;
    }
    ++length;   
}

void DoublyList::DeleteIdx(int idx) {
    if (idx < 0) {
        throw std::out_of_range("Deletion index is before the head node.");
    } else if (idx > length - 1) {
        throw std::out_of_range("Deletion index larger than list length. Are you looking to delete a value? Use DeleteVal.");       
    } else {
        DoublyNode* temp = head;
        
        int i = 0;
        while (i < idx - 1) {
            temp = temp->next;
            ++i;
    }
        temp->next = temp->next->next;
    }
    --length;
}

void DoublyList::DeleteVal(int val) {
    if (!length) {
        throw std::out_of_range("There are no nodes to delete.");
    } else {
        DoublyNode* temp = head;
        bool success = false;

        int i = 0;
        while (i < length - 1) {
            if (temp->next->val == val) {
                temp->next = temp->next->next;
                success = true;
                std::cout << "Deleted value at idx " << i + 1;
                
                break;
            }
            temp = temp->next;
            ++i;
        }
        if (!success) {
            std::cout << "Node value was not found within this list.";
        }
    }
    --length;
}

DoublyNode* DoublyList::SearchIdx(int idx) {
    if (idx < 0) {
        throw std::out_of_range("Search index is before the head node.");
    } else if (idx > length - 1) {
        throw std::out_of_range("Search index larger than list length. Are you looking to delete a value? Use DeleteVal.");      
    } else {
        DoublyNode* temp = head;
        
        int i = 0;
        while (i != idx) {
            temp = temp->next;
            ++i;
        }
        return temp;
    }
}

DoublyNode* DoublyList::SearchVal(int val) {
    DoublyNode* temp = head;
    bool success = false;

    int i = 0;
    while (i < length - 1) {
        if (temp->val == val) {
            success = true;
            std::cout << "Found value at idx " << i;

            break;
        }
        temp = temp->next;
        ++i;
    }
    if (!success) {
        std::cout << "Node value was not found within this list.";
    }
    return temp;
}

void DoublyList::Show() {
    DoublyNode* temp = head;

    while (temp != nullptr) {
        std::cout << temp->val << "-->";
        temp = temp->next;
    }
}

void DoublyList::ShowReversed() {
    DoublyNode* init = head;
    DoublyNode* prev = nullptr;

    while (init != nullptr) {
        DoublyNode* temp = init->next;
        init->next = prev;
        prev = init;
        init = temp;
    }
    while (prev != nullptr) {
        std::cout << prev->val << "-->";
        prev = prev->next;
    }
}

int DoublyList::Length() {
    return length;
}