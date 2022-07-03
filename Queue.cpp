#include<iostream>

using namespace std;
#define n 20

class queue{
    int *arr;
    int front;
    int back;

    public:
    queue(){
        arr=new int[n];
        front=-1;
        back=-1;

    }

    void push(int x){
        if(back==n-1){
            cout<<"Queue is full"<<endl;
            return;
        }
        back++;
        arr[back]=x;

        if(front==-1)
            front++;
        
    }

    void pop(){
        if(front==-1 || front>back){
            cout<<"Queue is empty"<<endl;
            return;
        }
        front++;
    }

    int peek(){
        if(front==-1 || front>back){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        else
            return arr[front];
    }

    bool isEmpty(){
        if(front==-1 || front>back){
            cout<<"Queue is empty"<<endl;
            return true;
        }
        else
            return false;
    }
};



int main(){

queue q;

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

cout<<q.peek()<<endl;


return 0;
}