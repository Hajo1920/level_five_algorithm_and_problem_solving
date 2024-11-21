#pragma once
#include <iostream>
template <class T>

class clsDynamicArray{
    protected:
    int _array_size = 0;
    T * Temp;

    public:
   
    T * OriginalArr;
    clsDynamicArray(int Size = 0)
    {
        if (Size < 0)
            Size = 0;

        _array_size = Size;

        OriginalArr = new T[_array_size];

    }

     ~clsDynamicArray(){
       
        delete[] OriginalArr;  
    }



    bool SetItem(int index, T value){
        if(index > _array_size || index < 0) return false;

        OriginalArr[index] = value;
        return true;
    }

    bool isEmpty(){
        return (_array_size == 0);
    }

    int size(){
        return _array_size;
    }

    void Resize(int new_size){
        if(new_size < 0) new_size = 0;

        Temp = new T[new_size];

        if(new_size < _array_size) _array_size = new_size;

        for(int x = 0; x < _array_size; x++){
            Temp[x] = OriginalArr[x];
        }

        _array_size = new_size;

        delete[] OriginalArr;
        OriginalArr = Temp;
       
        
    }

    void PrintList(){
        for(int x = 0; x < _array_size; x++){
            std::cout << OriginalArr[x] << " ";
        }
    }

    void Reverse(){
        int left = 0;
        int right = _array_size-1;
        T * Temp = new T[_array_size];

       while(_array_size-1 >= left){
        Temp[left] = OriginalArr[right];
            right--;
            left++;
       }
       delete[] OriginalArr;
       OriginalArr = Temp;
    }

    T GetItem(int index){
     
        return OriginalArr[index];
    }

    bool DeleteItem(int index){
        if(OriginalArr == nullptr || index > _array_size-1 || index < 0){
            return false;
        }

        for(int x = index; x < _array_size-1; x++){
            OriginalArr[x] = OriginalArr[x+1];
        }

        _array_size--;
        return true;
    }

    bool DeleteFirstItem(){
         if(OriginalArr == nullptr){
            return false;
        }

        DeleteItem(0);
        return true;
    }

    bool DeleteLastItem(){
        if(OriginalArr == nullptr){
            return false;
        }
        _array_size--;
        return true;
    }

    bool DeleteItemByValue(T item){
        int index = FindItem(item);

        if(index == -1) return false;

        DeleteItem(index);
        return true;
    }

    int FindItem(T item){
        if(OriginalArr == nullptr){
            return -1;
        }

        for(int x = 0; x <= _array_size-1; x++){
            if(OriginalArr[x] == item){
                return x;
            }
        }

        return -1;
    }

    bool InsertAt(int Index, T Value){
     if (Index >= _array_size || Index < 0 || OriginalArr == nullptr)return false;

     _array_size++;
     Temp = new T[_array_size];

     for (int i = 0; i < Index; i++){
        Temp[i] = OriginalArr[i];
     }

     Temp[Index] = Value;

     for (int i = Index; i < _array_size; i++){
        Temp[i + 1] = OriginalArr[i];
     }
     

     delete[]OriginalArr;
     OriginalArr = Temp;
     return true;
 }

 bool InsertAtBeginning(T item){

    return InsertAt(0, item);
 }

 bool InsertBefore(int Index, T item){
  
    if(Index == 0){
        
        return InsertAt(Index, item);
    }

    return InsertAt(Index-1, item);

 }

 bool InsertAtEnd(T item){
    if (OriginalArr == nullptr)return false;

    return InsertAt(_array_size-1, item);
 }

 bool InsertAfter(int index, T item){
    if (OriginalArr == nullptr)return false;

    if(index == _array_size-1){
        _array_size++;
        OriginalArr[_array_size-1] = item;
        return true;
    }
    
    return InsertAt(index+1, item);

 }

    bool Clear(){

        if(OriginalArr != nullptr && Temp != nullptr){
            OriginalArr = nullptr;
            _array_size = 0;

            return true;
        }
        
       return false;
    }
   
};