#pragma once
#include <iostream>
#include "../../Project_3/lib/myStack.h"
template <typename T>

class clsString {
    private:
    std::string _value = "";
    clsmyStack<T> _addStack;
    
    
    public:
    int index = 0;
    void Value(std::string str){
     _value = str;
     _addStack.push(_value);
    }

    std::string Value(){
        return _value;
    }


    
    void Undo(){
        
      if(index < 0){
        return;
    }
     index++;
    _value = _addStack.getItem(index);

   
    }

    void Redo(){
     
    if(index > _addStack.size()-1){
        return;
    }
    index--;
    _value = _addStack.getItem(index);
         
    }
};