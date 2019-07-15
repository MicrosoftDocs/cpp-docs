CAge* pcage = new CAge(21);  // CAge is derived from CObject.
Age* page = new Age(22);     // Age is NOT derived from CObject.
*(((char*)pcage) - 1) = 99;   // Corrupt preceding guard byte
*(((char*)page) - 1) = 99;    // Corrupt preceding guard byte
AfxCheckMemory();