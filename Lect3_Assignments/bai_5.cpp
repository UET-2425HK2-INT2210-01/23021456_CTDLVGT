#include<iostream>
using namespace std;

#define max_stack 1000
class stack{
    int top;
    int arr[max_stack];
public:
    stack():top(-1){};
    void push(int x){
        if (top==max_stack){
            cout<<"Stack overflow"<<std::endl;
            return;
        }
        arr[++top] = x;
    }
    void pop(){
        if (top == -1){
            cout<<"Stack underflow"<<std::endl;
        }
        cout<<"Pop value: "<<arr[top--]<<std::endl;
    }
    void display(){
        if (top < 0) {
            cout<<"Stack is empty!"<<std::endl;
        }
        for (int i = 0;i<=top;i++){
            cout<<arr[i]<<" ";
        }
        cout<< endl;
    }

};
int main(){
    int n;
    freopen("ex5.txt","r", stdin);
     cin>>n;
    stack my_stack ;
    for (int i = 0;i<n;i++){
        string s;
        cin>>s;
        if (s == "push"){
            int x;
            cin>>x;
            my_stack.push( x);
        } else if (s == "pop"){
            my_stack.pop();
        }
    }
    my_stack.display();
    return 0;
}
/*
INITIALIZE stack with capacity CAPACITY
FUNCTION push(stack, value):
    IF stack is full:
        PRINT "Stack Overflow"
    ELSE:
        top ← top + 1
        stack[top] ← value

FUNCTION pop(stack):
    IF stack is empty:
        PRINT "Stack Underflow"
    ELSE:
        popped_value ← stack[top]
        top ← top - 1
        RETURN popped_value

*/
