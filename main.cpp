#include <iostream>
#include <vector>
#include "Top_Songs.h"
#include "Queue.h"
#include "Stack.h"

int main() {

    Queue<int>int_queue;
    Queue<string>string_queue;
    //int queue queue's numbers 1 through 10
    for (int i = 1;i<11;i++) {
        int_queue.enqueue(i);
    }
    //Searching int queue for 2
    if (int_queue.search(2) == 1){
        cout << "True" << endl;
    }else{
        cout << "False" << endl;
    }
    //dequeue's first 3 numbers in queue
    int_queue.dequeue();
    int_queue.dequeue();
    int_queue.dequeue();
    //searches again or 2, and returns false because it has been dequeued
    if (int_queue.search(2) == 1){
        cout << "True" << endl;
    }else{
        cout << "False" << endl;
    }
    //prints remaining string
    int_queue.print();

    //string queue with three strings
    string_queue.enqueue("One");
    string_queue.enqueue("Two");
    string_queue.enqueue("Three");
    //searching string queue for word "two"
    if (string_queue.search("Two") == 1){
        cout << "True" << endl;
    }else{
        cout << "False" << endl;
    }
    //Print queue
    string_queue.print();
    //Dequeues all objects in queue
    string_queue.dequeue();
    string_queue.dequeue();
    string_queue.dequeue();

    //Creating songs Queue using Songs Vector from Project 1
    std::string fn = "Top_Songs.csv";
    std::vector<Top_Songs> Songs;
    Queue<Top_Songs>songsQueue;
    Stack<Top_Songs>songsStack;

    loadFromFile(fn, Songs);

    //Printing first 10 objects in vector
    for(int i =0; i <10;i++){
        songsQueue.enqueue(Songs[i]);
        std::cout << Songs.at(i) << std::endl;
    }
    //Dequeing all 10 items from the queue, and push first 10 items from vector
    for(int i =0; i <10;i++){
        songsQueue.dequeue();
        songsStack.push(Songs.at(i));
    }
    //Printing the stack
    songsStack.print();
    //poping all items off the stack
    for(int i =0; i <10;i++){
        songsStack.pop();
    }
    songsStack.print();


}