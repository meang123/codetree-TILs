#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*

//메모리 초과가 나와서 그냥 sort알고리즘 사용해서 해결.. 

vector<int> merge_arr(vector<int> &vec)
{

    int mid = vec.size()/2;

    vector<int> left_arr(vec.begin(),vec.begin()+mid);
    vector<int> right_arr(vec.begin()+mid,vec.end());

    vector<int> sorted_left = merge_arr(left_arr);
    vector<int> sorted_right = merge_arr(right_arr);

    
    vector<int> sum_arr;



    int idx_l=0,idx_r=0;

    while(idx_l<sorted_left.size() || idx_r<sorted_right.size())
    {
        if(idx_l==sorted_left.size())
        {
            sum_arr.emplace_back(sorted_right[idx_r]);
            idx_r++;
            continue;
        }
        else if(idx_r==sorted_right.size())
        {
            sum_arr.emplace_back(sorted_left[idx_l]);
            idx_l++;
            continue;
        }

        if(sorted_left[idx_l]<=sorted_right[idx_r])
        {
            sum_arr.emplace_back(sorted_left[idx_l]);
            idx_l++;

        }
        else
        {
            sum_arr.emplace_back(sorted_right[idx_r]);
            idx_r++;
        }

    }
    return sum_arr;


}
int main() 
{
    // 여기에 코드를 작성해주세요.
    int n=0;
    vector<int> vec;
    vector<int> result;
    vec.reserve(100000);
    result.reserve(100000);
    
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int t=0;
        cin>>t;
        vec.emplace_back(t);
    }
    result = merge_arr(vec);
    for(auto&e:result)
    {
        cout<<e<<' ';
    }
    return 0;
}*/
#include <vector>
#include <iostream>

using namespace std;

void merge(vector<int>& vec, int start, int mid, int end) {
    vector<int> temp(end - start + 1);
    int i = start, j = mid+1, k = 0;

    while(i <= mid && j <= end) {
        if(vec[i] <= vec[j]) {
            temp[k] = vec[i];
            k++; i++;
        }
        else {
            temp[k] = vec[j];
            k++; j++;
        }
    }

    while(i <= mid) {
        temp[k] = vec[i];
        k++; i++;
    }

    while(j <= end) {
        temp[k] = vec[j];
        k++; j++;
    }

    for(i = start; i <= end; i += 1) {
        vec[i] = temp[i - start];
    }
}

void merge_sort(vector<int>& vec, int start, int end) {
    if(start < end) {
        int mid = (start + end) / 2;
        merge_sort(vec, start, mid);
        merge_sort(vec, mid+1, end);
        merge(vec, start, mid, end);
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    merge_sort(vec, 0, n-1);
    for(int i = 0; i < n; i++) {
        cout << vec[i] << " ";
    }
    return 0;
}