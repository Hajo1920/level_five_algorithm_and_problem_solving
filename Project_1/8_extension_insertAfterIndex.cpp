#include <iostream>
#include "./lib/double_linked_list_lib.h"

using namespace std;

int main(){
    clsDblLinkedList<int> DblLinkedList;

    DblLinkedList.InsertAtEnding(1);
    DblLinkedList.InsertAtEnding(2);
    DblLinkedList.InsertAtEnding(3);
    DblLinkedList.InsertAtEnding(4);
    DblLinkedList.InsertAtEnding(5);
    DblLinkedList.InsertAtEnding(6);

    cout << "\nLinked List before insertion: ";
    DblLinkedList.PrintList();
    cout << "\nLinked List after insertion: ";
    DblLinkedList.InsertAfterByIndex(0, 9);
    DblLinkedList.PrintList();
    cout << DblLinkedList.Size() << endl;


}