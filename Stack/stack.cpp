#include <iostream>
using namespace std;

class Node{
    private:
    int val;
    Node* next;
    public:
    Node(int v):val(v),next(nullptr){}
    Node(int val, Node* n):val(val),next(n){}
};
struct Stack{
    private:
    Node* head;
    public:
    Stack():head(nullptr){}
    void push(int v){
        Node* newNode = new Node(v);
    }
};
int main() {
    
}   