// class Solution {
// public:
//     long long int fact(int n)
//     {
//         if(n==0)
//         {
//             return 1;
//         }
//         long long int res=1;
//         for(int i=2;i<=n;i++)
//         {
//             res=res*i;
//         }
//         return res;
//     }
//     int ncr(int n,int r)
//     {
//         return fact(n)/(fact(n-r)*fact(r));
//     }

//     vector<vector<int>> generate(int numRows) {
//         vector<vector<int>> ans;
//         for(int i=0;i<numRows;i++)
//         {
//             vector<int>row;
//             for(int j=0;j<=i;j++)
//             {
//                 row.push_back(ncr(i,j));
//             }
//             ans.push_back(row);
//         }
//         return ans;
//     }
// };
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for (int i = 0; i < numRows; i++) {
            vector<int> row(i + 1, 1);
            for (int j = 1; j < i; j++) {
                row[j] =ans[i-1][j] + ans[i-1][j-1];
            }
            ans.push_back(row);
        }
        return ans;
    }
};
