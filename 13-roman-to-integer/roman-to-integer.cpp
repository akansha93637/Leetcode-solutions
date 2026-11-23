
class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'I' && i + 1 < s.size() && (s[i + 1] == 'V' || s[i + 1] == 'X'))
                ans -= 1;
            else if (s[i] == 'X' && i + 1 < s.size() && (s[i + 1] == 'L' || s[i + 1] == 'C'))
                ans -= 10;
            else if (s[i] == 'C' && i + 1 < s.size() && (s[i + 1] == 'D' || s[i + 1] == 'M'))
                ans -= 100;
            else
                ans += (s[i] == 'I' ? 1 :
                        s[i] == 'V' ? 5 :
                        s[i] == 'X' ? 10 :
                        s[i] == 'L' ? 50 :
                        s[i] == 'C' ? 100 :
                        s[i] == 'D' ? 500 : 1000);
        }

        return ans;
    }
};

