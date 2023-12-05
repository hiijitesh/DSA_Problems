func numIslands(grid [][]byte) int {
    
    var m int = len(grid);
    var n int = len(grid[0]);

    var totalIslands int = 0;

    for row := 0; row < m; row++{
        for col := 0; col < n; col++{
            if grid[row][col]== '1'{
              totalIslands+=1;
              sinkIsland(grid, row, col, m, n);  
            }
        }
    }
    return totalIslands;
}

func sinkIsland(grid [][]byte, row int, col int, m int, n int){
    if row < 0 || row >= m || col < 0 || col >= n || grid[row][col] == '0'{
        return;
    }

    grid[row][col] = '0';

        //up
    sinkIsland(grid, row-1, col, m, n);
    //left
        sinkIsland(grid, row, col-1, m, n);
    //down
        sinkIsland(grid, row+1, col, m, n);
    //right
        sinkIsland(grid, row, col+1, m, n);
    return;

}