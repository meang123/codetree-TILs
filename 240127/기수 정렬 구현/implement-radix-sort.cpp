#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;
vector<int> count_sort_for_radix(vector<int>&arr,int digits)
{
    vector<int> count(10,0);
    vector<int> result(arr.size(), 0);
    
    int acc=0;

    for(auto&ele:arr)
    {
        int count_idx = (int)(ele / pow(10, digits))% 10;
        count[count_idx] ++;
    }
    
    for(int i=0;i<count.size();i++)
    {
        acc+=count[i];
        count[i]=acc;
    }
    
    for(int i=0;i<count.size();i++)
    {
        count[i]--;
    }

	for (int i = arr.size()-1; i > -1; i--) //뒤에서 부터 넣어주면 stable한 특성 살릴수가 있다 
	{
        int count_idx = (int)(arr[i] / pow(10, digits))% 10;
		result[count[count_idx]] = arr[i];
		count[count_idx] --;
	}
    return result;

}
int main() 
{
    int n=0;
    cin>>n;
    vector<int> arr;
    
    for(int i=0;i<n;i++)
    {
        int m=0;
        cin>>m;
        arr.emplace_back(m);
    }

    int max_val = *max_element(arr.begin(), arr.end());
    
    vector<int> result(arr);
    int digits = (int)(log10(max_val)) + 1;
    
    for (int i = 0; i < digits;i++)
	{
		result = count_sort_for_radix(result, i);
	}

    for (auto& ele : result)
	{
		cout << ele << " ";
	}

    return 0;
}