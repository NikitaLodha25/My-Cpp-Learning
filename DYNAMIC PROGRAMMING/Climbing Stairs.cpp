// You are climbing a staircase. It takes n steps to reach the top.

// Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

class Solution {
public:
    int climbStairs(int n) {
        int dp[n+1];  //46
        dp[0]=dp[1]=1;
        for(int i=2;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};


// Time Limit Exceeded.

// int climbStairs(int n) {
//         if(n==0 || n==1)
//             return 1;
//         int left=climbStairs(n-2);
//         int right=climbStairs(n-1);
//         return left+right;
//     }