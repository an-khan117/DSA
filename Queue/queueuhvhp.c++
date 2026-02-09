// UNSORTED HIGHER VALUE HIGHER PRIORITY

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

void enqueue(int data, int max, int queue[]) {
    if (rare == max - 1) {
        cout << "\nQueue Overflow!\n";
        return;
    }

    if (front == -1)
        front = 0;

    rare++;
    queue[rare] = data;
}

void dequeue(int queue[], int max) {
    if (front == -1 || front > rare) {
        cout << "\nQueue is Empty!\n";
        return;
    }

    int maxIndex = front;

    for (int i = front + 1; i <= rare; i++) {
        if (queue[i] > queue[maxIndex]) {
            maxIndex = i;
        }
    }

    cout << "Deleted value: " << queue[maxIndex] << endl;

    for (int i = maxIndex; i < rare; i++) {
        queue[i] = queue[i + 1];
    }

    rare--;
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

    cout << "Queue operations!\n";

    do {
        cout << "1) Is Empty\t2) Is Full\t3) Add\t4) Delete\t5) Print\n";
        cin >> ch;

        switch (ch) {
        case 1:
            empty();
            break;

        case 2:
            isfull(max);
            break;

        case 3:
            cout << "Enter the value\t";
            cin >> data;
            enqueue(data, max, queue);
            cout << "\nQueue: ";
            print(max, queue);
            cout<<endl;
            break;

        case 4:
            cout<<endl;
            dequeue(queue, max);
            cout<<endl;
            print(max, queue);
            break;

        case 5:
            cout << "\nQueue: ";
            print(max, queue);
            cout<<endl;
            break;

        default:
            cout << "\nEXITED!!!!\n";
        }
    } while (ch < 6);

    return 0;
}