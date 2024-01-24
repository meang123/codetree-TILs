#include <iostream>
#include <list>

using namespace std;

int main() 
{
    list<int> s;
    int n=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string t="";
        cin>>t;
        if(t=="push_back")
        {
            int m=0;
            cin>>m;
            s.push_back(m);
            

        }
        else if(t=="push_front")
        {
            int m=0;
            cin>>m;
            s.push_front(m);
            
        }
        else if(t=="pop_front")
        {
            cout<<s.front()<<'\n';
            s.pop_front();
            
        }
        else if(t=="pop_back")
        {
            cout<<s.back()<<'\n';
            s.pop_back();
            
        }
        else if(t=="size")
        {
            cout<<s.size()<<'\n';
        }
        else if(t=="empty")
        {
            if(s.empty())
            {
                cout<<1<<'\n';
            }
            else
            {
                cout<<0<<'\n';
            }
        }

        else if(t=="front")
        {
            cout<<s.front()<<'\n';
        }
        else //back
        {
            cout<<s.back()<<'\n';
        }
    
    }
    return 0;
}