// Declare a thread-safe, growable, private heap with initial size 0:
CWin32Heap g_stringHeap(0, 0, 0);

// Declare a string manager that uses the private heap:
CAtlStringMgr g_stringMgr(&g_stringHeap); 