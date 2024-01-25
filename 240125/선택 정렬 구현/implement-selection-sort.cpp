#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void select_sort(int (&arr)[100],int size)
{
    for(int i=0;i<size-1;i++)
    {
        int min = i;
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]<arr[min])
            {
                min = j;
            }
            
        }
        std::swap(arr[min],arr[i]);
    }
}
int main()
{
    int n=0;
    cin>>n;
    int arr[100]={0,};
    for(int i=0;i<n;i++)
    {
        int t=0;
        cin>>t;
        arr[i]=t;
    }
    select_sort(arr,n);
    for(int i=0;i<n;i++)
    {

        cout<<arr[i]<<" ";
    }
    return 0;
}
/*
int main() 
{
    // 여기에 코드를 작성해주세요.
    int n=0;
    vector<int> vec;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int t=0;
        cin>>t;
        vec.emplace_back(t);
    }
    sort(vec.begin(),vec.end());
    for(auto&e:vec)
    {
        cout<<e<<" ";
    }
    
    return 0;
}*/