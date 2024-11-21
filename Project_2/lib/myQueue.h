#pragma once
#include "../../Project_1/lib/double_linked_list_lib.h"

template <typename T>


class clsMyQueue{
    protected:
    clsDblLinkedList<T> _List;
    public:

    void push(T value){
        
        _List.InsertAtEnding(value);
    }

    void display(){
        _List.PrintList();
    }

    int size(){
        return _List.Size();
    }

    bool empty(){
        return _List.isEmpty();
    }

    T front(){
        return _List.GetItem(0);
    }

    T back(){
        return _List.GetItem(size()-1);
    }

    void pop(){
        _List.DeleteFirst();
    }

    T getItem(int index){
        return _List.GetItem(index);
    }
    void reverse(){
        _List.Reverse();
    }

    void updateItem(int index, T value){
        _List.UpdateItemByIndex(index, value);
    }
    void insertAfter(int index, T value){
        _List.InsertAfterByIndex(index, value);
    }
    
    void insertFront(T value){
        _List.InsertAtBeginning(value);
    }

    void insertBack(T value){
        _List.InsertAtEnding(value);
    }

    void clear(){
        _List.Clear();
    }



};