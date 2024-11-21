#pragma once
#include <iostream>

template <class T >

class clsDblLinkedList {

    protected:
    int _Size = 0;
    
    public:

     class Node{
        public:
        T value;
        Node * next, * prev;

    };

    Node * head = nullptr;

    void InsertAtBeginning(T value) {
        Node* new_node = new Node();
        new_node->value = value;
        new_node->next = head;
        
        if (head != nullptr) {
            head->prev = new_node;
        }
        
        head = new_node;
        _Size++;
    }

    void InsertAtEnding(T value){
    Node * new_node = new Node();
    new_node->value = value;
    new_node->next = nullptr;
    
    if(head == nullptr){
        new_node->prev = nullptr;
        head = new_node;
        _Size++;
        return;
    }

    Node * temp = head;
    while(temp->next != nullptr){
       temp = temp->next;
    }
   
     temp->next = new_node;
     new_node->prev = temp;
     _Size++;
    }

    void InsertAfterNode(Node * node, T value){
         Node * new_node = new Node();
         new_node->value = value;
         Node * current = head;

    while(current->next != nullptr && current->value != node->value){
        
        current = current->next;
      
    }
     new_node->next = current->next;
    current->next = new_node;

    new_node->prev = current;

    new_node->next->prev = new_node;
    _Size++;

    }

    Node * Find(T element){
    if(head == NULL){
        return NULL;
    }

    Node * node = head;
   
    while(node != NULL){
        if(node->value == element){
            return node;
        }
        node = node->next;
    }

    return NULL;
    }

    void DeleteNode(Node * node){
        if(head == nullptr || node == nullptr){
            return;
        }

        Node * temp = head;
    if((temp->next == nullptr && temp->prev == nullptr) && temp->value == node->value){
        
       node = nullptr;
       delete temp;
       _Size--;
        return;
    }
  
      if(temp->value == node->value && temp->prev == nullptr ){
            temp->next->prev = nullptr;
            node = temp->next;
            delete temp;
            _Size--;
            return;
         }

     
    while(temp->value != node->value){
        temp = temp->next;
        if(temp->next == nullptr && temp->value != node->value){
            return;
        }
         
    }

    
    if(temp->next == nullptr && temp->value == node->value){
        temp->prev->next = nullptr;
        delete temp;
        _Size--;
        return;
    }
   
    temp->next->prev = temp->prev;
    temp->prev->next = temp->next;
    delete temp;
    _Size--;

    }


    void DeleteFirst() {
    if(head == nullptr) {
        return;
    }

    Node* temp = head;
    head = head->next;

    if(head != nullptr) {
        head->prev = nullptr;
    }

    delete temp;
    _Size--;
}
    void DeleteLast(){
        if(head == nullptr){
            return;
        }

        Node * temp = head;

        while(temp->next != nullptr){
            temp = temp->next;
        }
        temp->prev->next = nullptr;
        delete temp;
        _Size--;

    }

    void PrintList(){
        Node * temp = head;
        while(temp != NULL){
        std::cout << temp->value << "  ";
        temp = temp->next;
    }
    }

    int Size(){
        return _Size;
    }

    bool isEmpty(){
        return (head == nullptr);
    }

    void Clear(){
        while(_Size != 0){
            DeleteFirst();
        }
        if(_Size <= 0){
                head = nullptr;
        }
    }

    void Reverse(){
        if(head == nullptr){
            return;
        }
        Node * current = head;
        Node * previous = nullptr;
        Node * next = nullptr;

        while(current != nullptr){
            next = current->next;
            current->next = previous;
            previous = current;
            current = next;
            
        }
        head = previous;
    }

    Node * GetNode(int index){
        if(head ==  nullptr && (index > _Size-1 || index < 0)){
            return nullptr;
        }
        Node * temp = head;
        int counter = 0;
        while(temp != nullptr){
            if(counter == index){
                break;
            }
            temp = temp->next;
            counter++;
            
        }
        return temp;
    }

    T GetItem(int index){
        Node * node = GetNode(index);
        return node->value;
    }


    bool UpdateItemByIndex(int index, T value){
        Node * node = GetNode(index);
        if(node == nullptr){
            return false;
        }
        
        node->value = value;
        return true;

    }

    bool InsertAfterByIndex(int index, T value){
        Node * new_node = new Node();
        new_node->value = value;

        Node * followerNode = GetNode(index);
        if(followerNode == nullptr){
            delete new_node;
            return false;
        }
        InsertAfterNode(followerNode, value);
        return true;
    }

};