class LIS {
    public int lengthOfLIS(int[] nums) {
        fans = 1;
        int t = LISrecur(nums,nums.length-1,new int[nums.length]);
        return fans;
    }
    int fans;
    public int LISrecur(int []nums,int ei,int []dp){
        if(ei == 0){
            return 1;
        }
        
        if(dp[ei] != 0){
            return dp[ei];
        }
        
        int omax = 1;
        for(int si=0;si<ei;si++){
            int ans = LISrecur(nums,si,dp);
            if(nums[si]<nums[ei] && ans+1>omax){
                omax=ans+1;
            }
        }
        
        fans = Math.max(fans,omax);
        dp[ei] = omax;
        return omax;
    }
}
