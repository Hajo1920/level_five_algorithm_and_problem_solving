#include <iostream>
#include "./lib/myString.h"

using namespace std;


int main(){
    clsString<string> Value;

    cout << "\n\n\t\t UNDO / REDO PROJECT \t\t\n\n";

    Value.Value(":/");
    cout << "\nString value = ";
    cout << Value.Value() << endl;


    Value.Value("Ahmed");
    cout << "\nString value = ";
    cout << Value.Value() << endl;

    Value.Value("Osman");
    cout << "\nString value = ";
    cout << Value.Value() << endl;

    Value.Value("Mohammed");
    cout << "\nString value = ";
    cout << Value.Value() << endl;

    

    cout << "\n\n\t\t -------UNDO----- \n\n\t\t";
    Value.Undo();
    cout << "\nUndo String value = ";
    cout << Value.Value() << endl;

     Value.Undo();
    cout << "\nUndo String value = ";
    cout << Value.Value() << endl;

     Value.Undo();
    cout << "\nUndo String value = ";
    cout << Value.Value() << endl;

     cout << "\n\n\t\t -------REDO----- \n\n\t\t";
    Value.Redo();
    cout << "\nRedo String value = ";
    cout << Value.Value() << endl;

     Value.Redo();
    cout << "\nRedo String value = ";
    cout << Value.Value() << endl;

     Value.Redo();
    cout << "\nRedo String value = ";
    cout << Value.Value() << endl;
    return 0;
}