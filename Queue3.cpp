#include<iostream>
using namespace std;
#include<stack>

//Queue Implementation using stacks

class queuqusingstack{
    stack<int> in, out;
    int size;
    void push(int x){
        while(!in.empty()){
            out.push(in.top());
            in.pop();
        }

        in.push(x);

        while(!out.empty){
            in.push(out.top());
            out.pop();
        }
    }

    int top(){
        if(in.empty()){
            cout<<"Stack is empty.";
            exit(0);
        }
        return in.top();
    } int pop(){
        if(in.empty()){
            cout<<"Stack is empty.";
            exit(0);
        }
        int x= in.top();
        in.pop();
        return x;
    } int size(){
        return in.size();
    }
};