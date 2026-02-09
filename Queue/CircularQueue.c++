#include<iostream>
using namespace std;

#define max 5

int cq[max];
int front = -1;
int rear = -1;

void isempty() {
    if (front == -1)
        cout << "\nQueue is Empty!\n";
    else
        cout << "\nQueue contains some data...\n";
}

void isfull() {
    if ((rear + 1) % max == front)
        cout << "\nQueue is Full!\n";
    else
        cout << "\nQueue is Not Full!\n";
}

void add(int data) {
    if ((rear + 1) % max == front) {
        cout << "\nQueue Overflow!\n";
        return;
    }

    if (front == -1) {
        front = rear = 0;
    }
    else {
        rear = (rear + 1) % max;
    }

    cq[rear] = data;
}

void del() {
    if (front == -1) {
        cout << "\nQueue Underflow!\n";
        return;
    }

    cout << "Deleted value: " << cq[front] << endl;

    if (front == rear) {
        front = rear = -1;
    }
    else {
        front = (front + 1) % max;
    }
}

void print() {
    if (front == -1) {
        cout << "\nQueue is Empty!\n";
        return;
    }

    cout << "Queue elements: ";
    int i = front;
    while (true) {
        cout << cq[i] << " ";
        if (i == rear)
            break;
        i = (i + 1) % max;
    }
    cout << endl;
}

int main() {
    int ch, data;

    cout << "\nCircular Queue using Array\n";
    cout << "1) Is Empty\n2) Is Full\n3) Add\n4) Delete\n5) Print\n";

    do {
        cin >> ch;
        switch (ch) {
        case 1:
            isempty();
            break;

        case 2:
            isfull();
            break;

        case 3:
            cout << "Enter value:\n";
            cin >> data;
            add(data);
            print();
            break;

        case 4:
            del();
            print();
            break;

        case 5:
            print();
            break;

        default:
            cout << "\nEnter valid choice\n";
        }
    } while (ch < 6);
}
