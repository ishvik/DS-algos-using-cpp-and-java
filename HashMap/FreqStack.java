class FreqStack {

    HashMap<Integer,Stack<Integer>> hm1 = new HashMap<>();
    HashMap<Integer,Integer> hm2 = new HashMap<>();
    int mf = 0;
    public FreqStack() {
        Stack<Integer> st = new Stack<>();
    }
    
    public void push(int val) {
        int freq = hm2.getOrDefault(val,0);
        freq++;
        hm2.put(val,freq);
        
        if(hm1.containsKey(freq) == false){
            hm1.put(freq,new Stack<Integer>());
        }
        
        hm1.get(freq).add(val);
        mf = Math.max(mf,freq);
    }
    
    public int pop() {
        int ans = hm1.get(mf).pop();
        
        int freq = hm2.get(ans);
        freq--;
        hm2.put(ans,freq);
        
        if(hm1.get(mf).size() == 0){
            hm1.remove(mf);
            mf--;
        }
        
        return ans;
    }
}