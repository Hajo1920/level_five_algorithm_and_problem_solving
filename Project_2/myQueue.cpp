#include <iostream>
#include "./lib/myQueue.h"

using namespace std;

int main(){

    clsMyQueue<int> Queue;

    Queue.push(10);
    Queue.push(20);
    Queue.push(30);
    Queue.push(40);
    Queue.push(50);
    Queue.push(60);

    Queue.display();

    cout << "Queue size: " << Queue.size() << endl;
    cout << "Queue Front element: " << Queue.front() << endl;
    cout << "Queue Back element: " << Queue.back() << endl;

    Queue.pop();
    cout << "After element Pop" << endl;
    Queue.display();

    //Extension 1
    cout << "\n\nItem(2): " << Queue.getItem(2) << endl;

    //Extension 2
    Queue.reverse();
    cout <<"\n\nQueue list after reverse: ";
    Queue.display();

    //Extension 3
     Queue.reverse(); // to return them to normal 
    Queue.updateItem(2, 300);
    cout << "\n\nQueue list after update: ";
    Queue.display();

    //Extension 4
    Queue.insertAfter(2, 600);
     cout << "\n\nQueue list after item insertion: ";
    Queue.display();

    //Extension 5
    Queue.insertFront(1000);
     cout << "\n\nQueue list front insertion: ";
    Queue.display();

    //Extension 6
    Queue.insertBack(2000);
     cout << "\n\nQueue list Back insertion: ";
    Queue.display();

    //Extension 7
    Queue.clear();
     cout << "\n\nQueue after clear: ";
    Queue.display();


    return 0;
}