    auto create_identity_matrix = create_task([]
    {
        array<array<int, 10>, 10> matrix;
        int row = 0;
        for_each(begin(matrix), end(matrix), [&row](array<int, 10>& matrixRow) 
        {
            fill(begin(matrixRow), end(matrixRow), 0);
            matrixRow[row] = 1;
            row++;
        });
        return matrix;
    });