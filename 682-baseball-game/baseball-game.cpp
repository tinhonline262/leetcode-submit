class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for (int i = 0; i < operations.size(); ++i) {
            if (operations[i] == "C") {
                st.pop();
            } else if (operations[i] == "D") {
                st.push(st.top() * 2);

            } else if (operations[i] == "+") {
                int top = st.top();
                st.pop();
                int newVal = top + st.top();
                st.push(top);
                st.push(newVal);
            } else
                st.push(stoi(operations[i]));
        }
        int res = 0;
        while (!st.empty()){
            res += st.top();
            st.pop();
        }
        return res;
    }
};