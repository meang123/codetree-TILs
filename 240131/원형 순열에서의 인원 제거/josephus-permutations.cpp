#include <bits/stdc++.h>
using namespace std;

//배열로 원형 큐 해결해보기 

int main() 
{
    // 여기에 코드를 작성해주세요.
    ios::sync_with_stdio(0);
	cin.tie(0);
    int n=0,k=0;
    cin>>n>>k;

    //arr%capacity
    
    
    

    vector<int> arr;
    arr.reserve(5000);


    for(int i=1;i<=n;i++)
    {
        arr.emplace_back(i);
    }
    int idx=0;
    queue<int> q;
    while(true)
    {
        int count =0;
        while(true)
        {
            if(arr[idx%n]!=-1)
            {
                
                count++;
  
            }   
            if(k==count)
            {
                q.push(arr[idx%n]);
                arr[idx%n]=-1;
                idx++;
                break;
            }
            idx++;
        }
        if(q.size()==n)
        {
            break;
        }

    }

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}