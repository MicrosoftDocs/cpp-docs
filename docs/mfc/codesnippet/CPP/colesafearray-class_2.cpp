COleSafeArray saMatrix;
DWORD numElements[] = { 10, 5 };

// creates a 2 dimensional safearray of type VT_I2 
// with size 10x5 elements, with all indices starting at 0(default)
saMatrix.Create(VT_I2, 2, numElements);

ASSERT(saMatrix.GetDim() == 2);

COleSafeArray saVector;
SAFEARRAYBOUND rgsabounds[] = { {5, 2} };

// creates a 1 dimensional safearray of type VT_I1 
// with size 5 elements, with the index starting at 2
saVector.Create(VT_I1, 1, rgsabounds);

ASSERT(saVector.GetDim() == 1);