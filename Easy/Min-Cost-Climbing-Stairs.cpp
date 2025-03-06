class Solution {
public:
    int n;
    vector<int> dp, c;

    int solve(int idx) {

        if (idx >= n)
            return 0;

        int& ret = dp[idx];
        if (~ret)
            return ret;

        int op1 = c[idx] + solve(idx + 1);
        int op2 = c[idx] + solve(idx + 2);

        return ret = min(op1, op2);
    }

    int minCostClimbingStairs(vector<int>& cost) {

        c = cost;
        n = (int)cost.size();
        dp.resize(n);
        fill(dp.begin(), dp.end(), -1);

        return min(solve(0), solve(1));
    }
};