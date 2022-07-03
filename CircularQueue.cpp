#include<iostream>

using namespace std;
#define n 6

class circularqueue{
    int *arr;
    int front;
    int back;

    public:
    circularqueue(){
        arr=new int[n];
        front=0;
        back=0;

    }

    void push(int x){
        if((back+1)%n == front){
            cout<<"Queue is full"<<endl;
            return;
        }
        back=(back+1)%n;
        arr[back]=x;
        
    }

    void pop(){
        if(front == back){
            cout<<"Queue is empty"<<endl;
            return;
        }
        front=(front+1)%n;
    }

    int peek(){
        if(front == back){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        else
            return arr[(front+1)%n];
    }

    bool isEmpty(){
        if(front == back){
            return true;
        }
        else
            return false;
    }
};



int main(){

circularqueue q;

q.push(1);
q.push(5);
q.push(8);
q.push(2);
q.push(1);

cout<<q.peek()<<endl;
q.pop();

cout<<q.peek()<<endl;
q.pop();

cout<<q.peek()<<endl;
q.pop();

cout<<q.peek()<<endl;
q.pop();

cout<<q.peek()<<endl;
q.pop();

q.push(3);
q.push(4);
q.push(5);

cout<<q.peek()<<endl;
q.pop();
cout<<q.peek()<<endl;
q.pop();
cout<<q.peek()<<endl;
q.pop();

cout<<q.peek()<<endl;
return 0;
}