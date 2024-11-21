#pragma once
#include "../../Project_1/lib/double_linked_list_lib.h"
#include "../../Project_2/lib/myQueue.h"

template <typename T>
class clsmyStack: public clsMyQueue<T> {
 
    public:

    void push(T value){

        clsMyQueue<T>::_List.InsertAtBeginning(value);
    }

    

    T top(){

        return clsMyQueue<T>::_List.GetItem(0);
    }

    T bottom(){

        return clsMyQueue<T>::_List.GetItem(clsMyQueue<T>::_List.Size()-1);
    }

    

};