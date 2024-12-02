class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int> se(candyType.begin(), candyType.end());
        return min(se.size(), candyType.size() / 2);
    }
};