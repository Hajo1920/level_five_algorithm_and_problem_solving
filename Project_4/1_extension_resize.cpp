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

    //Extension 1

    DynamicArray.Resize(2);
    cout << "\n\nDynamic Array after resize to 2: ";
    DynamicArray.PrintList();


    cout << "\n\nDynamic Array after resize to 10: ";
    DynamicArray.Resize(10);
    DynamicArray.PrintList();
    
    return 0;
}