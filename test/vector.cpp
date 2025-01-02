#include<iostream>
#include<vector>
#include<unordered_multiset>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        std::unordered_multiset<int>nums_set(nums1.begin(), nums1.end());
        std::unordered_multiset<int>res;
        for(int num : nums2){
            if(nums_set.count(num)){
                res.insert(num);
                nums_set.erase(num);
            }
        }
        return vector<int>(res.begin(), res.end());
    }
};

int main(){

    vector<int> vec;
    int i ;
    cout << vec.size()<<endl;
    for(i=0; i<5; i++){
        vec.push_back(i);
    }
    cout << vec.size()<<endl;

    // 使用迭代器访问
    vector<int>::iterator v = vec.begin();
    while(v != vec.end()){
        cout << *v <<endl;
        v++;
    }
    return 0;
}