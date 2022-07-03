#include<iostream>

using namespace std;

class node{
    public:
    int data;
    node* next;
};

class LLqueue{
node *front=NULL;
node *back=NULL;

public:

void enqueue(int x){
node *t = new node();
t->data=x;
t->next=NULL;

if(front==NULL){
    front=t;
    back=t;
}
else{
    back->next=t;
    back=t;
}

}

void dequeue(){
if(front==NULL){
    cout<<"Queue is empty"<<endl;
    return;
}
node* p=front;
front=front->next;
delete p;
}

int peek(){
if(front==NULL){
    cout<<"Queue is empty"<<endl;
    return -1;
}
return front->data;
}

};

int main(){
    LLqueue q;
    cout<<q.peek()<<endl;
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    q.enqueue(8);
    
    cout<<q.peek()<<endl;
    q.dequeue();
    cout<<q.peek()<<endl;
    q.dequeue();
    cout<<q.peek()<<endl;
    q.dequeue();
    cout<<q.peek()<<endl;
    q.dequeue();

    cout<<q.peek()<<endl;

    q.enqueue(9);
    q.enqueue(10);
    cout<<q.peek()<<endl;
    q.dequeue();
    cout<<q.peek()<<endl;
    q.dequeue();
    
return 0;
}