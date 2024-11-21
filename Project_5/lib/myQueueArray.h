#pragma once
#include "myDynamicArray.h"

template <class T>

class clsMyQueueArray{
    protected:
    clsDynamicArray<T> _array;

    public:

    void push(T value){
        
        _array.InsertAtEnd(value);
    }

    void display(){
        _array.PrintList();
    }

    int size(){
        return _array.size();
    }

    bool empty(){
        return _array.isEmpty();
    }

    T front(){
        return _array.GetItem(0);
    }

    T back(){
        return _array.GetItem(size()-1);
    }

    void pop(){
        _array.DeleteFirstItem();
    }

    T getItem(int index){
        return _array.GetItem(index);
    }
    void reverse(){
        _array.Reverse();
    }

    void updateItem(int index, T value){
        _array.SetItem(index, value);
    }
    void insertAfter(int index, T value){
        _array.InsertAfter(index, value);
    }
    
    void insertFront(T value){
        _array.InsertAtBeginning(value);
    }

    void insertBack(T value){
        _array.InsertAtEnd(value);
    }

    void clear(){
        _array.Clear();
    }

};