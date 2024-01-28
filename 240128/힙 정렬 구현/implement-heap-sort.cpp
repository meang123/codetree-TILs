#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> heapsort(vector<int>&vec)
{
    vector<int> result;

    make_heap(vec.begin(),vec.end(),greater<int>{});
    while(!vec.empty())
    {
        pop_heap(vec.begin(),vec.end(),greater<int>{});
        result.emplace_back(vec.back());
        vec.pop_back();
    }
    return result;



}

void max_heap(vector<int>&arr,int rootidx)
{

    int left = 2*rootidx +1;
    int right = 2*rootidx +2;
    int max_val =rootidx;

    if(left<arr.size()&&arr[left]<arr[max_val])
    {
        max_val=left;
    }
    
    if(right<arr.size()&&arr[right]<arr[max_val])
    {
        max_val=right;
    }
    if(rootidx!=max_val)
    {
        swap(arr[rootidx],arr[max_val]);
        max_heap(arr,max_val);
    }
    
}

int main() 
{
    // 여기에 코드를 작성해주세요.
    int n =0;
    cin>>n;
    vector<int> arr;
    arr.reserve(100000);

    for(int i=0;i<n;i++)
    {
        int m=0;
        cin>>m;
        arr.emplace_back(m);
    }
    arr=heapsort(arr);
    /*for(int i=(arr.size()-1)/2;i>-1;i--)
    {
        max_heap(arr,i);
    }*/
    for(auto&e:arr)
    {
        cout<<e<<" ";
    }
    return 0;
}