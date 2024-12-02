class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> se(candyType.begin(), candyType.end());
        int n = candyType.size() / 2;
        int size = se.size();
        if (n < size) return n;
        return size;
    }
};