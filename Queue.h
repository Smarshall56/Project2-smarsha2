//
// Created by Sebastian Marshall on 2/13/23.
//
#ifndef PROJECT2_SMARSHA2_QUEUE_H
#define PROJECT2_SMARSHA2_QUEUE_H

#include "Node.h"
#include <iostream>
using std::cout, std::endl;

template<typename Object>
class Queue {
private:
    Node<Object>* front;
    Node<Object>* back;

public:
    Queue(){
        front = nullptr;
        back = nullptr;
    }
    ~Queue(){
        while (front != nullptr) {
            dequeue();
        }
    }

    void enqueue(Object item) {
        // Store the item in a Node in heap memory
        Node<Object>* newNodePtr = new Node<Object>(item,nullptr);

        if (front == nullptr){
            // The new Node becomes front
            front = newNodePtr;
        }
        Node<Object>* frontCopy = front;
        while (frontCopy->getNext() != nullptr){
            frontCopy = frontCopy->getNext();
        }
        if (frontCopy->getNext() == nullptr && front != newNodePtr){
            frontCopy->setNext(newNodePtr);
        }
        // The new Node becomes front
        back = newNodePtr;

    }

    Object dequeue() {
        // Check that there is a Node to dequeue
        if (front == nullptr) {
            // The queue is empty
            return Object();
        }
        // Create a copy of the value to be returned
        Object item = front->getItem();
        // Store a copy of front
        Node<Object>* frontCopy = front;
        // Update front
        front = front->getNext();
        // Delete the Node from heap memory
        delete frontCopy;
        // Return the value being dequeued
        return item;
    }


    bool search(Object item) const {
        Node<Object>* frontCopy = front;
        //Searches the queue for the item util frontCopy is a nullptr
        while (frontCopy != nullptr) {
            if (frontCopy->getItem() == item) {
                return true;
            }
            frontCopy = frontCopy->getNext();
        }
        return false;
    }

    void print() const {
        cout << "Front of the queue" << endl;
        Node<Object>* frontCopy = front;
        //prints each item in the Queue until the front copy is a nullptr, meaning there are no more items
        while (frontCopy != nullptr) {
            cout << frontCopy->getItem() << endl;
            frontCopy = frontCopy->getNext();
        }
        cout << "Back of the queue" << endl;
    }
};

#endif //PROJECT2_SMARSHA2_QUEUE_H
