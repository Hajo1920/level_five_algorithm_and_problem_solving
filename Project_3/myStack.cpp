#include <iostream>
#include "./lib/myStack.h"

using namespace std;

int main(){
    clsmyStack<int> Stack;

    Stack.push(10);
    Stack.push(20);
    Stack.push(30);
    Stack.push(40);
    Stack.push(50);
    Stack.push(60);
    Stack.push(70);
    Stack.push(80);
    Stack.push(90);
   
  


    cout << "\n\nStack List: ";
   Stack.display();
    cout << "\n\nStack Size: " << Stack.size() << endl;
    cout << "\nStack Top: " << Stack.top() << endl;
    cout << "\nStack Bottom: " << Stack.bottom() << endl;

    Stack.pop();
    cout << "\nStack list after pop(): ";
    Stack.display();

    //Extension 1
    cout << "\n\nItem(2): " << Stack.getItem(2) << endl;

    //Extension 2
    Stack.reverse();
    cout << "\nStack list after reverse: ";
    Stack.display();

    //Extension 3
    Stack.reverse(); // to return them normal
    Stack.updateItem(2, 600);
    cout <<"\n\nStack after update element(index=2, updateValue=600) :";
    Stack.display();

    //Extension 4
    
    cout << "\n\nStack list item after element insertion: ";
    Stack.insertAfter(2, 800);
    Stack.display();

    //Extension 5
    cout << "\n\nStack list item front insertion: ";
    Stack.insertFront(1000);
    Stack.display();

    //Extension 6
    cout << "\n\nStack list item back insertion: ";
    Stack.insertBack(2000);
    Stack.display();

    //Extension 7
    cout <<"\n\nStack after clear: " << endl;

    Stack.clear();
    
    Stack.display();
    return 0;
}