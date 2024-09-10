// Standard includes 
#include <iostream>

// Header includes
#include "singly_linked.h"

SinglyList::SinglyList() : head(nullptr), length(0) {}
SinglyList::~SinglyList() {}

void SinglyList::Append(int val) {
    SinglyNode* node = new SinglyNode;
    node->val = val;
    node->next = nullptr;
    
    if (head == nullptr) {
        head = node;
    } else {
        SinglyNode* temp = head;

        while (temp->next != nullptr) {
            temp = temp->next;
    }
        temp->next = node;
    }
    ++length;   
}

void SinglyList::Insert(int val, int idx) {
    if (idx < 0) {
        throw std::out_of_range("Insertion index is before the head node.");
    } else if (idx >= length) {
        throw std::out_of_range("Insertion index larger than list length, use append instead.");
    }
    SinglyNode* node = new SinglyNode;
    node->val = val;
    node->next = nullptr;
    
    if (head == nullptr) {
        head = node;
    } else if (idx == 0) {
        node->next = head;
        head = node;
    } else {
        SinglyNode* temp = head;

        int i = 0;
        while (i < idx - 1) {
            temp = temp->next;
            ++i;
    }
        node->next = temp->next;
        temp->next = node;
    }
    ++length;   
}

void SinglyList::DeleteIdx(int idx) {
    if (idx < 0) {
        throw std::out_of_range("Deletion index is before the head node.");
    } else if (idx > length - 1) {
        throw std::out_of_range("Deletion index larger than list length. Are you looking to delete a value? Use DeleteVal.");       
    } else {
        SinglyNode* temp = head;
        
        int i = 0;
        while (i < idx - 1) {
            temp = temp->next;
            ++i;
    }
        temp->next = temp->next->next;
    }
    --length;
}

void SinglyList::DeleteVal(int val) {
    if (!length) {
        throw std::out_of_range("There are no nodes to delete.");
    } else {
        SinglyNode* temp = head;
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

SinglyNode* SinglyList::SearchIdx(int idx) {
    if (idx < 0) {
        throw std::out_of_range("Search index is before the head node.");
    } else if (idx > length - 1) {
        throw std::out_of_range("Search index larger than list length. Are you looking to delete a value? Use DeleteVal.");      
    } else {
        SinglyNode* temp = head;
        
        int i = 0;
        while (i != idx) {
            temp = temp->next;
            ++i;
        }
        return temp;
    }
}

SinglyNode* SinglyList::SearchVal(int val) {
    SinglyNode* temp = head;
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

void SinglyList::Show() {
    SinglyNode* temp = head;

    while (temp != nullptr) {
        std::cout << temp->val << "-->";
        temp = temp->next;
    }
}

int SinglyList::Length() {
    return length;
}