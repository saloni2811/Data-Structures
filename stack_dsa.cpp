#include<iostream>
#include<math.h>
#include<stdlib.h>

using namespace std;
#define n 100

class stack{
    int* arr;
    int top;

    public:
    stack(){
        arr= new int[n];
        top= -1;
    }

    void push(int x){
        if(top==n-1){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        top++;
        arr[top]=x;
    }

    void pop(){
        if(top==-1){
            cout<<"No elemrnt to pop"<<endl;
            return ;
        }
        top--;
    }
    int Top(){
        if(top==-1){
            cout<<"No elemrnt in stack"<<endl;
            return -1 ;
        }
        return arr[top];

    }
    bool empty(){
        return top==-1;
    }
    };


int main(){
    
    stack st;
    st.push(5);
    st.push(9);
    st.push(3);
    st.push(14);
    st.push(7);
    cout<<"Top Element: "<<st.Top()<<endl;
    st.pop();
    cout<<"Top Element: "<<st.Top()<<endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout<<"Is stack empty: "<<st.empty()<<endl;


    return 0;
}

