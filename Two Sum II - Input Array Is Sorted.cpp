class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>ans;
        int n=numbers.size();
        int i=0;
        int j=n-1;
    while(i<j)
    {
        if(numbers[i]+numbers[j]>target)
        {
            j--;
        }
        else if(numbers[i]+numbers[j]<target)
        {
            i++;
        }
        else
        {
            ans.push_back(i+1);
            ans.push_back(j+1);
            break;
        }
    }
        return ans;
    }
};
