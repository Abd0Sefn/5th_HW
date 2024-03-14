#include<iostream>
using namespace std;
int path_sum(int grid[100][100], int row, int col, int ROWS = 0, int COLS = 0){
    if (ROWS == row - 1 && COLS == col - 1)
    return grid[ROWS][COLS];
    int res = grid[ROWS][COLS];
    //if(ROWS >= row || COLS >= col)
    //return 0;
    if (grid[ROWS + 1][COLS + 1] > grid[ROWS][COLS + 1] && grid[ROWS + 1][COLS + 1] > grid[ROWS + 1][COLS]){
        ROWS = ROWS + 1;
        COLS = COLS + 1;
    }
    else if (grid[ROWS][COLS + 1] > grid[ROWS + 1][COLS]){
        COLS++;
    }
    else ROWS++;
    res += path_sum(grid, row, col, ROWS, COLS);
    return res;
}
int main(){
    int arr[100][100];
    int r, c;
    cin >> r >> c;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> arr[i][j];
        }
    }
    cout << path_sum(arr, r, c);
    return 0;
}