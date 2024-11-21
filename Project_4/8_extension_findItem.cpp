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

    // Extension 8

    cout << "\n\nFind Dynamic array element index" << endl;

    int index = DynamicArray.FindItem(30);

    if(index == -1){
        cout << "\nItem not found in array" << endl;
    }else cout << "\nItem found at index = " << index << endl;

    
    return 0;
}