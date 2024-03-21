class Solution
{
public:
    vector<int> getTable(int N)
    {
        vector<int> result;
        for(int i = 1; i <= 10; i++){
            result.push_back(N * i);
        }
        return result;
    }
};
