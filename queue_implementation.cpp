class Queue
{
    int *arr;
    int qfront;
    int rear;
    int size;

public:
    Queue
    {
        size = 100001;
        arr = new int[size];
        qfront=0;
        rear=0;
    }
    void enqueue(int data){ //O(1)
        if(rear==size){
            return -1;

        }
        else{
            arr[rear]=data;
            rear++;
            
        }
    }
    void dequeue(){ //O(1)
        if(qfront==rear){
            cout<<"Queue is empty."<<endl;
        }
        else{
            int ans = arr[qfront];
            arr[qfront]=-1;
            qfront++;
            if(qfront==rear){
                qfront=0;
                rear=0;
            }
            return ans;
        }
    }
    int front(){  //O(1)
        if(qfront==rear)
        return -1;
        else
        return arr[qfront];
        
    }
    bool isEmpty(){ //O(1)
        if(qfront==rear){
            return true;
        }
        else{
            return false;
        }
    }
};