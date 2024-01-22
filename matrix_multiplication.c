/*Function Definition*/

double matrixMultiplier(double matrixA /* a x b matrix */, double matrixB /* b x c matrix */){
    int rowCount = sizeof(matrixA);
    int colCount = sizeof(matrixB[0]);

    int prodMatrix[rowCount][colCount]; // a x c matrix

    for (int i = 0; i < rowCount; ++i){ // a iterations    
        for (int j = 0; j < colCount; ++j){ // c iterations
            double sumProduct = 0;
            
            /*NOTE: sizeof(matrixA[0]) = sizeof(matrixB)*/

            for (int k = 0; k < sizeof(matrixB); ++k){ // b iterations = b products
                sumProduct += arr[i][k]*brr[k][j]; // (i,j)^th element of the prodMatrix
            }
            prodMatrix[i][j] = sumProduct;
        }
    }
}

