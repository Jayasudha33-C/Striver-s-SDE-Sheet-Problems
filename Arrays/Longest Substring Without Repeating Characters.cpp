class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char>st;
        int end=0,max=0,start=0;
        while(start<s.size()){
            auto it=st.find(s[start]);
            if(it==st.end()){
                if(start-end+1>max)
                      max=start-end+1;
                st.insert(s[start]);
                start++;
            }
            else{
                st.erase(s[end]);
                end++;
            }
        }
        return max;
    }
};