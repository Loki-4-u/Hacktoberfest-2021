class Solution {
public:
    vector<int> v;
    vector<vector<int>> combine(int n, int k) {
     
        vector<vector<int>> res;
        findPrmt(res, n, 1, k);
        return res;
    }
    
  
    void findPrmt(vector<vector<int>> &res, int n, int i, int k)
    {
        if(i>n) return;
            for(int j =i;j<=n;j++)
            {
                 v.push_back(j);
                 findPrmt(res, n, i+1, k);
                 if(v.size()==k)
                 res.push_back(v);
                 v.pop_back(); i++;
            } 
    }
};
