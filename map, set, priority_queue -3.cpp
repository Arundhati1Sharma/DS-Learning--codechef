using namespace std;
// type 1: insert an element into a list
// type 2: output the largest element in the list
// type 3: remove the largest element from the list

signed main()
{   vector<int> v;
    int q;
    cin>>q;
    while(--q){
        int maxi=0;
        int type;
        cin>>type;
        if(type==1){
            int x;
            cin>>x;
            v.push_back(x);
            sort(v.begin(),v.end());
            maxi=max(maxi,x);
        }
        else if(type==2){
            cout<<maxi<<endl;
        }
        else{
            // nobody cares about elements after the largest one. So, we would use  a priority queue
        }
    }
}
