class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int n = derived.size();
        int xorSum = 0;
        for (int num : derived) {
            xorSum ^= num;
        }
        return xorSum == 0;
    }
};