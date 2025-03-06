class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {

        vector<int> ans(2, -1);
        int n = (int)grid[0].size();

        int r = n * n;
        set<int> st;
        for (int i = 1; i <= r; i++)
            st.insert(i);

        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < n; j++) 
            {
                int x = grid[i][j];
                
                if (!st.count(x))
                    ans[0] = x;
                else
                    st.erase(x);
            }
        }

        ans[1] = *st.begin();
        return ans;
    }
};