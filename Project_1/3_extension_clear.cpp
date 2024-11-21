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

    cout << "Linked List: ";
    DblLinkedList.PrintList();

    DblLinkedList.Clear();

    cout << "Linked List After Clear:";
    DblLinkedList.PrintList();
    return 0;
}