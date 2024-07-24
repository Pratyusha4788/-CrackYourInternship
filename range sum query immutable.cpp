include <bits/stdc++.h>
using namespace std;
class NumArray {
   public:
   vector <int> pre;
   NumArray(vector<int>& nums) {
      pre.clear();
      int n = nums.size();
      pre.resize(n);
      for(int i = 0; i < n; i++){
         if(i == 0)pre[0] = nums[0];
         else
         pre[i] = pre[i - 1] + nums[i];
      }
   }
   int sumRange(int i, int j) {
      if(i == 0)return pre[j];
      return pre[j] - pre[i - 1];
   }
};
main(){
   vector<int> v = {5,8,3,6,1,2,5};
   NumArray na(v);
   cout<<na.sumRange(0,2)<<endl;
   cout<<na.sumRange(2,5)<<endl;
   cout<<na.sumRange(0,5)<<endl;
}