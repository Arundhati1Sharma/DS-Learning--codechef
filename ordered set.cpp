
// pbds - policy based data structure
// set - no random access
// if u wanted to know the kth smallest element in a set, u would have to iterate through k elements

// Q queries : insert an element, find the kth smallest element in the set
// Ordered set can find the kth smallest element in O(LogN)
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace _gnu_pbds;
#define int long long
#define oset tree<int, null_type, less<pair<int,int>>,rb_tree_tag,tree_order_statistics_node_update>
using namespace std;
signed main()
{ oset s;
//  find_by_order: returns the element at the kth position
//  order_of_key: returns the position of the element
  int q, type, k;
  cin>>q;
  while(q--)
   { cin>>type>>k;
     if(type==1)
       s.insert(K);
     else
     {
       k--;
       cout<<(*s.find_by_order(k))<<endl;
     }
   }
}
   
 
