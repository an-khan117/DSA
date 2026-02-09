#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* front = NULL;
Node* rare  = NULL;

void empty(){
    if (front == NULL) {
        cout << "\nQueue is Empty!\n";
    } else {
        cout << "\nQueue contains some data...\n";
    }
}

void isfull(){
    // Linked list queue never gets full (until memory exhausts)
    cout << "\nQueue is NOT FULL (Linked List Implementation)\n";
}

void enqueue(int data){
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;

    if (front == NULL) {
        front = rare = newNode;
    } else {
        rare->next = newNode;
        rare = newNode;
    }
}

void dequeue(){
    if (front == NULL) {
        cout << "\nQueue is Empty!\n";
        return;
    }

    Node* temp = front;
    cout << "Deleted value: " << temp->data << endl;
    front = front->next;

    if (front == NULL)
        rare = NULL;

    delete temp;
}

void print(){
    if (front == NULL) {
        cout << "\nQueue is Empty!\n";
        return;
    }

    Node* temp = front;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    int ch, data;

    cout << "\nQueue operations (Linked List)!\n";

    do {
        cout << "1) Is Empty\n2) Is Full\n3) Add\n4) Delete\n5) Print\n";
        cin >> ch;

        switch (ch) {
        case 1:
            empty();
            break;

        case 2:
            isfull();
            break;

        case 3:
            cout << "Enter the value\n";
            cin >> data;
            enqueue(data);
            cout << "Queue: ";
            print();
            break;

        case 4:
            dequeue();
            print();
            break;

        case 5:
            cout << "Queue: ";
            print();
            break;

        default:
            cout << "\nEXITED!!!!\n";
        }
    } while (ch < 6);

    return 0;
}