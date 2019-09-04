// example for CArray::SetAtGrow
CArray<CPoint, CPoint> ptArray;

ptArray.Add(CPoint(10, 20)); // Element 0
ptArray.Add(CPoint(30, 40)); // Element 1
// Element 2 deliberately skipped
ptArray.SetAtGrow(3, CPoint(50, 60)); // Element 3