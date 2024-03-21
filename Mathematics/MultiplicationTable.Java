class Solution{
    static ArrayList<Integer> getTable(int N){
        ArrayList<Integer> result = new ArrayList<Integer>();
        int itr;
        for(itr = 1; itr <= 10; itr++){
            result.add(N * itr);    
        }
        return result;
        
    }
}
