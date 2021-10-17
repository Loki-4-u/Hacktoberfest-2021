class Solution {
public:
    int nextGreaterElement(int n) {
        string s = to_string(n);
        string ans ;
        int ind =-1;
        char c = '&';
        int i =s.size()-2;
        for(;i>0;i--)
        {
            if(s[i]<s[i+1]) continue;
        }
        if(i==0) return -1;
      char mn = '&';
        int k =-1;
        for(int j=s.size()-1;j>i;j--)
        {
            if(s[j]>s[i])
                {
                if(mn=='&')
                    {mn = s[j]; k = j;}
                else
                {
                    if(s[j]<mn)
                        {mn = s[j]; k = j;}
                }
            }
        }
        if(k==-1) return -1;
        swap(s[i], s[k]);
        
        sort(s.begin()+i, s.end());
       
        long long m = stoll(s);
        if(m>INT_MAX) return -1;
        return m;
    }
};
