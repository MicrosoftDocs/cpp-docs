// This code defines myList as a list of strings
// such that memory gets allocated in chunks of
// 16 strings.
CList<CString, CString &> myList(16);

// This code defines myList2 as a list of ints
// such that memory gets allocated in chunks of
// 128 ints.
CList<int, int> myList2(128);