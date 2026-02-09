//Queue (Queue size not define globally)

#include<iostream>
using namespace std;

int front = -1;
int rare = -1;

void empty(){
    if (front == -1) {
        cout << "\nQueue is Empty!\n";
    } else {
        cout << "\nQueue contains some data...\n";
    }
}

void isfull(int max){
    if (rare == max - 1){
        cout << "\nQueue is FULL!\n";
    } else {
        empty();
    }
}

void enqueue(int data, int max, int queue[]){
    if (rare == max - 1) {
        cout << "\nQueue Overflow!\n";
        return;
    }
    if (front == -1)
        front = 0;

    rare++;
    queue[rare] = data;
}

void dequeue(int queue[], int max){
    if (front == -1 || front > rare) {
        cout << "\nQueue is Empty!\n";
        return;
    }
    cout << "Deleted value: " << queue[front] << endl;
    front++;
}

void print(int max, int queue[]){
    if (front == -1 || front > rare) {
        cout << "\nQueue is Empty!\n";
    } else {
        for (int i = front; i <= rare; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

int main(){
    int ch, data;
    int max;

    cout << "Enter the size of Queue!\n";
    cin >> max;

    int queue[max];

    cout << "\nQueue operations!\n";

    do {
        cout << "1) Is Empty\n2) Is Full\n3) Add\n4) Delete\n5) Print\n";
        cin >> ch;

        switch (ch) {
        case 1:
            empty();
            break;

        case 2:
            isfull(max);
            break;

        case 3:
            cout << "Enter the value\n";
            cin >> data;
            enqueue(data, max, queue);
            cout << "Queue: ";
            print(max, queue);
            break;

        case 4:
            dequeue(queue, max);
            print(max, queue);
            break;

        case 5:
            cout << "Queue: ";
            print(max, queue);
            break;

        default:
            cout << "\nEXITED!!!!\n";
        }
    } while (ch < 6);

    return 0;
}


