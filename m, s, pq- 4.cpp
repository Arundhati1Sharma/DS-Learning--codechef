using namespace std;
// type 1: insert an element into a list
// type 2: output the largest element in the list
// type 3: remove the largest element from the list

signed main()
{
    priority_queue<int> pq;
    int q;
    cin>>q;
    while(--q){
        int type;
        cin>>type;
        if(type==1){
            int x;
            cin>>x;
            pq.push(x);
        }
        else if(type==2){
            cout<<(pq.top())<<endl;
        }
        else{
            pq.pop();
        }
    }
}

// *****Priority Queue*****
// pq.top() returns the maximum element in a priority queue -->O(1)
// pq.pop() removes the maximum element from the pq -->O(LogN)
// pq.push() adds an element to the queue -->O(LogN)
// This is internally stored as a binary heap
