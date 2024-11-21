#pragma once
#include "../../Project_5/lib/myQueueArray.h"

template <typename T>

class clsMyStackArray: public clsMyQueueArray<T>{
      public:

    void push(T value){

        clsMyQueueArray<T>::_array.InsertAtBeginning(value);
    }

    

    T top(){

        return clsMyQueueArray<T>::_array.GetItem(0);
    }

    T bottom(){

        return clsMyQueueArray<T>::_array.GetItem(clsMyQueueArray<T>::_array.size()-1);
    }
};