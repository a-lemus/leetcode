// https://leetcode.com/problems/island-perimeter/?envType=daily-question&envId=2024-04-18
// this program recieves a grid as a 2d vector of either '1' or '0' denoting filled in or empty space respectively
// the program returns the perimeter of the empty space
class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int ans = 0, nRows = grid.size(), nTiles = grid[0].size(); // ans for tracking perimeter, and getting dimensions of grid
        for (int row = 0; row<nRows; row++) { // iterate across every row
            for (int tile = 0; tile<nTiles; tile++) { // iterate across every tile for every row
                if (grid[row][tile]) { // if the current tile is a filled in one (if it is 1 then as a boolean it is true, and false for zero)
                    if (row==0 || !(grid[row-1][tile])) {ans++;} // check if this tile is in the top row or if the above tile is empty
                    if (row==nRows-1 || !(grid[row+1][tile])) {ans++;} // check if this tile is in the bottom row or if the below tile is empty
                    if (tile==0 || !(grid[row][tile-1])) {ans++;} // check if this tile is in the left column or if the left tile is empty
                    if (tile==nTiles-1 || !(grid[row][tile+1])) {ans++;} // check if this tile is in the right column or if the right tile is empty
                }
            }
        }
        return ans; // return perimeter
    }
};