COleSafeArray saMatrix;
DWORD numElements[] = { 10, 5 };

// creates a 2 dimensional safearray of type VT_I2 
// with size 10x5 elements, with all indices starting at 0(default)
saMatrix.Create(VT_I2, 2, numElements);

long lUBound;
ASSERT(saMatrix.GetDim() == 2);

//get upper bound for 1st dimension
saMatrix.GetUBound(1, &lUBound);

ASSERT(lUBound == 9);

//get upper bound for 2nd dimension
saMatrix.GetUBound(2, &lUBound);

ASSERT(lUBound == 4);

COleSafeArray saVector;
SAFEARRAYBOUND rgsabounds[] = { {5, 1} };

// creates a 1 dimensional safearray of type VT_I1 
// with size 5 elements, with the index starting at 1
saVector.Create(VT_I1, 1, rgsabounds);

//get upper bound for 1st dimension
saVector.GetUBound(1, &lUBound);

ASSERT(lUBound == 5);