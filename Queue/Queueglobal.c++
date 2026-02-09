//Queue (queue size and queue globally defined)
#include<iostream>
using namespace std;
#define max 10
 int front=-1;
 int rare=-1;
 int queue[max];

void empty(){
   if (front==-1) {
      cout<<"\n Queue is Empty ! \n";
      }
   else {
   cout<<"\n Queue contains some data ... \n";
   }
 }
 
void isfull(){
  if (rare==max-1){
    cout<<"\n Queue is FULL ! \n";
    }
  else {
  empty();
  }
}

void add(int data) {
  if (rare == max - 1) {
        cout << "\nQueue Overflow!\n";
        return;
    }
    if (front == -1)
        front = 0;

    rare++;
    queue[rare] = data;
}

void del(){
    if (front == -1 || front > rare) {
        cout << "\nQueue is Empty!\n";
        return;
    }
    cout << "Deleted value: " << queue[front] << endl;
    front++;
}

void print(){
  if (front==-1) {
   cout<<"\n Queue is Empty ! \n";
  }
  else {
     for (int i=front;i<max;i++) {
        if (queue[i]!=0) {
          cout<<queue[i]<<" ";
          }
      } cout<<endl;
  }
}

int main () {
 int ch,data;
 int front=-1;
 int rare=-1;
 cout<<"\nQueue operations !\n";
 cout<<"1)Is Empty \n2)Is Full \n3)Add  \n4)Delete 5)Print \n ";
 
 do {
    cin>>ch;
   switch (ch) {
   case 1: 
          empty();
   break;
   case 2:
        isfull();
   break;
   case 3:
        cout<<"Enter the value\n";
        cin>>data;
        add(data);
        cout<<"Queue:";
        print();
   break;
   case 4:
        del();
        print();
   break;
      case 5:
        cout<<"Queue:";    
        print();
   break;
   default:
       cout<<"\n Enter valid choice\n\tExited!!!!";
   break;
   }
 } while (ch<6);
}