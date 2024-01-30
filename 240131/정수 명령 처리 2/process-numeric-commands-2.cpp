#include <iostream>
#include <queue>
using namespace std;

int main() 
{
    // 여기에 코드를 작성해주세요.
    queue<int> st;
    int n=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string m="";
        cin>>m;
        if(m=="push")
        {
            int t = 0;
            cin>>t;
            st.push(t);
        }
        else if(m=="size")
        {
            cout<<st.size()<<"\n";
        }
        else if(m=="empty")
        {
            if(st.empty())
            {
                cout<<1<<"\n";
            }
            else{
                cout<<0<<"\n";
            }
        }
        else if(m=="pop")
        {
            cout<<st.front()<<"\n";
            st.pop();
        }
        else
        {
            cout<<st.front()<<"\n";
        }
    }
    return 0;
}