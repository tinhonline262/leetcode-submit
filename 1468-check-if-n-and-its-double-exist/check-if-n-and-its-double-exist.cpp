class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> se;
        sort(arr.begin(), arr.end());
        int size = arr.size();
        for (int x : arr) {
            auto search = se.find(x / 2);
            if (x < 0) {
                auto search = se.find(x * 2);
                if (search != se.end() && *search / 2 == x) {
                    return true;
                }
            } else {
                auto search = se.find(x / 2);
                if (search != se.end() && *search * 2 == x) {
                    return true;
                }
            }

            se.insert(x);
        }
        return false;
    }
};