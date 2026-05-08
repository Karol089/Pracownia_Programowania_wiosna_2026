int minColIdx(unsigned int n, unsigned int m, int **tab){
    int colId = 0, min = *(*(tab));
    for(int row = 0; row < n; row++){
        for(int col = 0; col < m; col++){
            {
                if(col < colId){
                    colId = col;
                }
            }
            if(*(*(tab + row) + col) < min){
                colId = col;
                min = *(*(tab + row) + col);
            } else if(*(*(tab + row) + col) == min){
                if(col < colId){
                    colId = col;
                }
            }
        }
    }
    return colId;
}
