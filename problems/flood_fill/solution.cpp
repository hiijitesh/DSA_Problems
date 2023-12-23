class Solution {

private:
    void dfs(vector<vector<int>>& image,int row, int col,  int currColor, int newColor){

        int m = image.size(); // number of rows
        int n = image[0].size(); // number of cols

        if(row >= m || col >= n)
            return;
        if(row < 0 || col < 0)
            return;
        if(image[row][col] !=  currColor)
            return;
        
        image[row][col]=newColor;
        
        dfs(image,row-1,col,currColor,newColor);
        dfs(image,row,col+1,currColor,newColor);
        dfs(image,row+1,col,currColor,newColor);
        dfs(image,row,col-1,currColor,newColor);
        return;


    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,int color) {
      int initialColor = image[sr][sc];
      if(initialColor == color)
        return image;

      dfs(image, sr, sc, initialColor, color);
      return image;
    }
};