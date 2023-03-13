class Solution {
public:
    bool isPalindrome(string s) {
       string a;
        for(int i=0;i<s.length();i++)
        {
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9'))
            {
               a+=s[i];

            }
        }
        transform(a.begin(),a.end(),a.begin(),::tolower);
        int i=0;
        int j=a.length()-1;
        while(i<=j)
        {
            if(a[i]!=a[j])
            {
                return false;
            }
            else{
                i++;
                j--;
            }
        }
       
        return true;
        
    }
};
