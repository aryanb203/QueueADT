#include<iostream>

using namespace std;
#define n 6  //size of the array

class DEqueue{
    public:
    int *arr;
    int front;
    int back;

DEqueue(){
    arr= new int[n];
    front=-1;
    back=-1;
}

void insertFront(int x){
    if(front == -1)
        cout<<"Queue is full from front"<<endl;
    else{
        
        arr[front]=x;
        front--;
    }
}

void insertBack(int x){
    if(back==n)
        cout<<"Queue is full from back"<<endl;
    else{
        if(front==-1 && back==-1){
            front++;
            back++;
        }
        back++;
        arr[back]=x;
    
    }
}

void deleteBack(){
    if(back==-1 || back==front)
        cout<<"Queue is empty"<<endl;
    else{
        back--;
    }
}

void deleteFront(){
    if(front==back)
        cout<<"Queue is empty"<<endl;
    else{
        front++;
    }
}

int peekFront(){
if(front == back){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        else
            return arr[front+1];
    }

int peekBack(){
if(front == back || back==-1){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        else
            return arr[back];
    }
};

int main(){
    DEqueue q;
    q.insertBack(2);
    q.insertBack(3);

    cout<<q.peekFront()<<endl;
    cout<<q.peekBack()<<endl;
    q.deleteFront();
    cout<<q.peekFront()<<endl;
    cout<<q.peekBack()<<endl;
    q.insertFront(4);
    cout<<q.peekFront()<<endl;
    cout<<q.peekBack()<<endl;
    q.insertFront(5);
    q.insertFront(5);
}