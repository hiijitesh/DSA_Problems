class Solution {
private:
    void dfs(vector<vector<int>>&image,int row, int col, int m,int n,int currColor, int newColor){
        
        if( col <0 || col >= n || row <0 || row>=m ||image[row][col] != currColor)
            return;
        
        image[row][col]=newColor;
        
        dfs(image,row-1,col,m,n,currColor,newColor);
        dfs(image,row,col+1,m,n,currColor,newColor);
        dfs(image,row+1,col,m,n,currColor,newColor);
        dfs(image,row,col-1,m,n,currColor,newColor);
        return;

    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        if(image[sr][sc]==newColor)
        return image;
        
        dfs(image,sr,sc,image.size(),image[0].size(),image[sr][sc],newColor);
        return image;
        
    }
};