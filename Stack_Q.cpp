// tWo stack using one Array

class TwoStack{

    int top1;
    int top2;
    int *arr;
    int size;
    
    public:
    TwoStack(int s){
    this -> size = s;
    top1= -1;
    top2= s;
    arr = new int[s];
    }

    void push1(int num){
        if(top2-top1>1) //There is at least one empty space
        {
            top1++;
            arr[top1]= num;
        }
    }

    void push2(int num){
         if(top2-top1>1) //There is at least one empty space
        {
            top2--;
            arr[top2]= num;
        }

    }
    void pop1(){
        if(top1>=0){
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else{
            cout<<"Stack underflow"<<endl;
            return -1;
        }

    }
    void pop2(){
        if(top2<size){
            int ans = arr[top2];

            top1++;
            return ans; 
        }
        else{
            cout<<"Stack underflow"<<endl;
            return -1;
        }

    }

};