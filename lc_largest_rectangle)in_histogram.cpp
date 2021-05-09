class Solution {
public:
  int largestRectangleArea(vector<int>& heights)
  {
    int n = heights.size();
    vector<int>lr(n);        // To store nearest least element towards right.
    stack<int>st1;

    for (int i = heights.size() - 1; i >= 0; i--)
    {
      while (st1.size() > 0 && heights[i] <= heights[st1.top()])
      {
        st1.pop();
      }

      if (st1.size() == 0)
        lr[i] = heights.size();
      else
        lr[i] = st1.top();

      st1.push(i);
    }

    vector<int>ll(n);    // To store nearest least element towards left.
    stack<int>st2;

    for (int i = 0; i < heights.size(); i++)
    {
      while (st2.size() > 0 && heights[i] <= heights[st2.top()])
      {
        st2.pop();
      }

      if (st2.size() == 0)
        ll[i] = -1;
      else
        ll[i] = st2.top();

      st2.push(i);
    }

    int max_ar = INT_MIN;

    for (int i = 0; i < heights.size(); i++)
    {

      max_ar = max(max_ar, heights[i] * (lr[i] - ll[i] - 1));

    }

    return max_ar;
  }
};