class Solution {
public:
    int countValidWords(string s) {
        string temp = "";
        int cnt = 0;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            // cout<<temp<<endl;
            // debug(temp)
            bool flag = true;
            int c = 0;
            if (s[i] == ' ' && !temp.size()) continue;
            if (s[i] == ' ' && temp.size()) {
                //
                if (temp[0] == '-' || temp[temp.size() - 1] == '-') flag = false;
                int sx = temp.size();
                // debug(sx)
                for (int j = 0; j < temp.size(); j++) {
                    // debug(temp)
                    // debug(temp[j])
                    if (temp[j] == '-') {
                        c++;
                        // debug(c)
                        if (c > 1) flag = false;
                    }
                    if ((temp[j] == ',' || temp[j] == '.' || temp[j] == '!') && j != temp.size() - 1) flag = false;
                    if (isdigit(temp[j])) flag = false;
                    if (j > 0 && j < temp.size() - 1 && temp[j] == '-') {
                        if ((temp[j - 1] >= 'a' && temp[j - 1] <= 'z') && (temp[j + 1] >= 'a' && temp[j + 1] <= 'z')) continue;
                        else flag = false;
                    }
                }
                // debug(c)
                if (flag && temp.size()) {
                    cnt++;
                    // debug(temp)
                }
                temp.erase();
            }
            else temp += s[i];
        }

        // for last string'
        if (temp.size()) {
            bool flag = true;
            int c = 0;
            if (temp[0] == '-' || temp[temp.size() - 1] == '-') flag = false;
            for (int i = 0; i < temp.size(); i++) {
                if (s[i] == '-') c++;
                if (isdigit(temp[i])) flag = false;
                if ((temp[i] == ',' || temp[i] == '.' || temp[i] == '!') && i != temp.size() - 1) flag = false;
                if (i > 0 && i < n - 1 && temp[i] == '-') {
                    if ((temp[i - 1] >= 'a' && temp[i - 1] <= 'z') && (temp[i + 1] >= 'a' && temp[i + 1] <= 'z')) continue;
                    else flag = false;
                }
            }
            if (c > 1) flag = false;
            if (flag && temp.size()) {
                cnt++;
                // debug(temp)
            }
        }

        return cnt;
    }
};