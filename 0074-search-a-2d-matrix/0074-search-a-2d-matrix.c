bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    int r = matrixSize;
    int c = matrixColSize[0];
    int l=0,h = r*c-1;
    while(l<=h){
        int mid = l+(h-l)/2;
        int val = matrix[mid/c][mid%c];
        if(val == target) return true;
        if(val< target) l = mid+1;
        else h = mid-1;    }
    return false;
}