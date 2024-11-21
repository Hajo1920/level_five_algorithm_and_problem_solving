#include <iostream>
#include "./lib/myDynamicArray.h"

using namespace std;

int main(){
    clsDynamicArray<int> DynamicArray(5);

    DynamicArray.SetItem(0, 10);
    DynamicArray.SetItem(1, 20);
    DynamicArray.SetItem(2, 30);
    DynamicArray.SetItem(3, 40);
    DynamicArray.SetItem(4, 50);

    cout << "\n\nDynamic Array Is Empty ? " << DynamicArray.isEmpty() << endl;


    cout << "\n\nDynamic Array Size: " << DynamicArray.size() << endl;


    cout << "\n\nDynamic Array List: ";
    DynamicArray.PrintList();

    cout << "\n\nDynamic Array InsertAfter(index = 2): ";
    DynamicArray.InsertAfter(2, 700);
    DynamicArray.PrintList();
    
    return 0;
}