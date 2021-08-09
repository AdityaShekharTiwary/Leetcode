class Solution {
public:

    void dfs(vector<vector<int>>& images, int i, int j, int initial, int c1) {
        if (i < 0 || i >= images.size() || j < 0 || j >= images[0].size() || images[i][j] == c1 || images[i][j] != initial) return;
        images[i][j] = c1;
        dfs(images, i + 1, j, initial, c1);
        dfs(images, i, j + 1, initial, c1);
        dfs(images, i - 1, j, initial, c1);
        dfs(images, i, j - 1, initial, c1);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        dfs(image, sr, sc, image[sr][sc], newColor);
        return image;
    }
};