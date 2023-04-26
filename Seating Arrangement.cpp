class Solution{
    public:
    bool is_possible_to_get_seats(int n, int m, vector<int>& seats){
        // Write your code here.
        for(int i=0;i<m and n>0;i++)
        {
            if(seats[i]==0 and (i+1>=m or seats[i+1]==0) and (i-1<0 or seats[i-1]==0))
            {
                seats[i]=1;
                n--;
            }
        }
        return n==0;
    }
};
