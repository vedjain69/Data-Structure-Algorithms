#include<bits/stdc++.h>
#include<iostream>
#include<queue>
using namespace std;

//Stacks implementation using queue;

class stacks{
    public:
    queue<int> q;
    void push(int x){
        int size=q.size();
        q.push(x);
        for(int i=0;i<size;i++){
            q.push(q.front());
            q.pop();
        }
    }

    void top(){
        cout<<q.front();
    }void pop(){
        cout<<q.front();
        q.pop();
    }void size(){
        cout<<q.size();
    }
};