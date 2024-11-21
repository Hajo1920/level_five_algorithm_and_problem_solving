#include <iostream>
#include "./lib/double_linked_list_lib.h"


using namespace std;

int main(){
    clsDblLinkedList<int> DblLinkedList;

    DblLinkedList.InsertAtBeginning(5);
    DblLinkedList.InsertAtBeginning(4);
    DblLinkedList.InsertAtBeginning(3);
    DblLinkedList.InsertAtBeginning(2);
    DblLinkedList.InsertAtBeginning(1);

    cout << "Current List: ";
    DblLinkedList.PrintList();

    clsDblLinkedList<int>::Node * N1 = DblLinkedList.Find(2);

    if( N1 != nullptr){
        cout << "\nNode Found!" << endl;
    }else cout << "\nNode Not Found" << endl;

    cout << "\nAdding element after specific node\n";
    DblLinkedList.InsertAfterNode(N1, 500);
    DblLinkedList.PrintList();

    cout << "\nAdding element at End of the Linkd List\n";
    DblLinkedList.InsertAtEnding(700);
    DblLinkedList.PrintList();

    clsDblLinkedList<int>::Node * N2 = DblLinkedList.Find(4);

    cout << "\nspecific node to delete = " << N2->value << endl;

    DblLinkedList.DeleteNode(N2);
    DblLinkedList.PrintList();

    cout << "\nDeleting the first Node" << endl;
    DblLinkedList.DeleteFirst();
    DblLinkedList.PrintList();

    cout << "\nDeleting the last Node" << endl;
    DblLinkedList.DeleteLast();
    DblLinkedList.PrintList();


    return 0;
}
