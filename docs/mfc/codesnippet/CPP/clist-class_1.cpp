// CList is a template class that takes two template arguments.
// The first argument is type stored internally by the list, the
// second argument is the type used in the arguments for the
// CList methods.

// This code defines a list of ints.
CList<int, int> myIntList;

// This code defines a list of CStrings
CList<CString, CString &> myStringList;

// This code defines a list of MYTYPEs,
// NOTE: MYTYPE could be any struct, class or type definition
CList<MYTYPE, MYTYPE &> myTypeList;