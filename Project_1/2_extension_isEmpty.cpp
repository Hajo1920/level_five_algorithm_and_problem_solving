#include <iostream>
#include "./lib/double_linked_list_lib.h"

using namespace std;

int main(){
    clsDblLinkedList<int> DblLinkedList;
    DblLinkedList.isEmpty() ? cout << "\nNo Linked List Found\n":cout <<"\nLinked List Found\n";

    DblLinkedList.InsertAtEnding(1);
    DblLinkedList.InsertAtEnding(2);
    DblLinkedList.InsertAtEnding(3);

    DblLinkedList.isEmpty() ? cout << "\nNo Linked List Found\n":cout <<"\nLinked List Found\n";
    return 0;
}