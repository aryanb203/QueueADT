#include<iostream>
#include<stack>
#include "bits/stdc++.h"
using namespace std;

class StackQueue{
    stack<int> s1;
    stack<int> s2;
    
    public:

    void enqueue(int x){
        s1.push(x);
    } 


    int dequeue(){

        if(s1.empty() && s2.empty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }

        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        } 

            int topval= s2.top();
            s2.pop();
            return topval;
    }


};


int main(){
    StackQueue q;
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
return 0;
}