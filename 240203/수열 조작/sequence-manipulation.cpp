#include <iostream>
#include <vector>

using namespace std;

int recur_deque(vector<int> &&arr)
{
    //base case 
    if(arr.size()==1)
    {
        return arr[0];
    }
    vector<int> temp;

    if(arr.size()%2!=0)
    {
        temp.emplace_back(arr.back());
    }

    //extract odd index
    for(int i=1;i<arr.size();i+=2)
    {
        temp.emplace_back(arr[i]);
    }

    return recur_deque(move(temp));
}
int main() 
{
    // 여기에 코드를 작성해주세요.
    vector<int> arr;

    
    arr.reserve(500000);

    int n=0,result=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        arr.emplace_back(i);
    }

    result=recur_deque(move(arr));

    cout<<result<<'\n';

    return 0;
}