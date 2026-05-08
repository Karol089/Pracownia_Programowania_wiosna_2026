int maxRowIdx(unsigned int n, unsigned int m, int **tab){
    int rowId = 0, max = *(*(tab));
    for(int row = 0; row < n; row++){
        for(int col = 0; col < m; col++){
            if(*(*(tab + row) + col) > max){
                rowId = row;
                max = *(*(tab + row) + col);
            }
        }
    }
    return rowId;
}
