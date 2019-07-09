COleSafeArray saMatrix;
DWORD numElements[] = { 10, 5 };

// creates a 2 dimensional safearray of type VT_I2 
// with size 10x5 elements, with all indices starting at 0(default)
saMatrix.Create(VT_I2, 2, numElements);

long lLBound;

//get lower bound for 1st dimension
saMatrix.GetLBound(1, &lLBound);

ASSERT(lLBound == 0);

//get lower for 2nd dimension
saMatrix.GetLBound(2, &lLBound);

ASSERT(lLBound == 0);

COleSafeArray saVector;
SAFEARRAYBOUND rgsabounds[] = { {5, 1} };

// creates a 1 dimensional safearray of type VT_I1 
// with size 5 elements, with the index starting at 1
saVector.Create(VT_I1, 1, rgsabounds);

//get lower bound for 1st dimension
saVector.GetLBound(1, &lLBound);

ASSERT(lLBound == 1);