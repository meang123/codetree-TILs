#include <iostream>
using namespace std;

void bubble_sort(int (&arr)[100],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(arr[j]>arr[j+1])
            {
                std::swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main() 
{
    // 여기에 코드를 작성해주세요.
    int n=0;
    cin>>n;
    int arr[100]={0,};

    for(int i=0;i<n;i++)
    {
        int m=0;
        cin>>m;
        arr[i]=m;


    }
    bubble_sort(arr,n);

    for(int i=1;i<n+1;i++)
    {
        cout<<arr[i]<<" ";
    }
    

    
    
    return 0;
}