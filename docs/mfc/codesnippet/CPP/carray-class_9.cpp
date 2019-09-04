// example for CArray::InsertAt

CArray<CPoint, CPoint> ptArray;

ptArray.Add(CPoint(10, 20));         // Element 0
ptArray.Add(CPoint(30, 40));         // Element 1 (will become element 2)
ptArray.InsertAt(1, CPoint(50, 60)); // New element 1