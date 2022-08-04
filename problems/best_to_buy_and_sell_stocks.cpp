
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int min_value_so_far=prices[0];
        int max_profit=0;
        for(int i=1;i<n;i++){
            if(prices[i]<min_value_so_far){
                min_value_so_far=prices[i];
            }
            else {
                max_profit=max(max_profit,prices[i]-min_value_so_far);
            }
        }
        return max_profit;
    }
};
int main(){
     vector <int> a={2,1,2,0,1};
    //  vector <int> a={7,1,5,3,6,4};
     Solution s;
     cout<<"pr:"<<s.maxProfit(a); 
    return 0;
}
