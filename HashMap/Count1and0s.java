class Count1and0s
{
    //Function to count subarrays with 1s and 0s.
    static int countSubarrWithEqualZeroAndOne(int arr[], int n)
    {
        // add your code here
        int []pc0 = new int[n];
        int []pc1 = new int[n];
        if(arr[0] == 0){
            pc0[0] = 1;
        }
        if(arr[0] == 1){
            pc1[0] = 1;
        }
        
        for(int i=1;i<arr.length;i++){
            if(arr[i] == 0){
                pc0[i] = pc0[i-1]+1;
            }else{
                pc0[i] = pc0[i-1];
            }
            
            if(arr[i] == 1){
                pc1[i] = pc1[i-1]+1;
            }else{
                pc1[i] = pc1[i-1];
            }
        }
        
        HashMap<Integer,Integer> map = new HashMap<>();
        map.put(0,1);
        int ans = 0;
        for(int j=0;j<arr.length;j++){
            int d = pc1[j]-pc0[j];
            int f = map.getOrDefault(d,0);
            ans += f;
            f++;
            map.put(d,f);
        }
        return ans;
    }
}