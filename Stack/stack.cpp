#include <iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node(int v):val(v),next(nullptr){}
    Node(int v, Node* n):val(v),next(n){}
};
struct Stack{
    public:
    Node* head;
    Stack():head(nullptr){}
    bool isEmpty(Stack s);
    void push(Stack& s,int v);
    void pop(Stack& s);
    int getTop(Stack& s);
};
bool isEmpty(Stack s){
    return s.head==nullptr;
}
void push(Stack& s,int v){

    Node* newNode = new Node(v);
    newNode->next = s.head;
    s.head = newNode;
}
void pop(Stack& s){
    if(isEmpty(s)){
        return;
    }
    Node* n=s.head;
    s.head=s.head->next;
    delete n;
}
int getTop(Stack& s){
    return s.head->val;
}
int main() {
    Stack stacklist;
    isEmpty(stacklist);
    push(stacklist,1);
    push(stacklist,2);
    push(stacklist,3);
    push(stacklist,4);
    push(stacklist,5);
    isEmpty(stacklist);
    pop(stacklist);
    getTop(stacklist);
    pop(stacklist);
    cout<<getTop(stacklist)<<endl;
    while(!isEmpty(stacklist)){
        cout<<getTop(stacklist)<<endl;
        pop(stacklist);
    }
    return 0;
}