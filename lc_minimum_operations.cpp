class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> res;
        int n = boxes.size();

        for (int i = 0; i < n; i++) {
            int dis = 0;
            for (int j = 0; j < n; j++) {
                if (boxes[j] == '1') {
                    dis += abs(i - j);
                }
            }
            res.push_back(dis);
            dis = 0;
        }
        return res;
    }
};


// int n = boxes.size();
//     vector<int> res;
//     int sum = 0, right = 0, left = 0;

//     for(int i = 0; i < n; i++)
//     {
//         if(boxes[i] == '1')
//         {
//             sum += i;
//             right++;
//         }
//     }

//     for(int i = 0; i < n; i++)
//     {
//         res.push_back(sum);
//         if(boxes[i] == '1')
//         {
//             right--;
//             left++;
//         }

//         sum += left - right;
//     }

//     return res;