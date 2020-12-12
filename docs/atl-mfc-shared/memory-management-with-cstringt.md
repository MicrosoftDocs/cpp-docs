---
description: "Learn more about: Memory Management with CStringT"
title: "Memory Management with CStringT"
ms.date: "11/04/2016"
helpviewer_keywords: ["CString objects, memory management", "memory [C++], usage", "IAtlStringMgr class, using", "strings [C++], custom memory management", "CFixedStringT class, description of", "strings [C++], memory management", "CStringT class, memory management"]
ms.assetid: 88b8342d-19b5-48c4-9cf6-e4c44cece21e
---
# Memory Management with CStringT

Class [CStringT](../atl-mfc-shared/reference/cstringt-class.md) is a template class used to manipulate variable-length character strings. The memory to hold these strings is allocated and released through a string manager object, associated with each instance of `CStringT`. MFC and ATL provide default instantiations of `CStringT`, called `CString`, `CStringA`, and `CStringW`, which manipulate strings of different character types. These character types are of type TCHAR, **`char`**, and **`wchar_t`**, respectively. These default string types use a string manager that allocates memory from the process heap (in ATL) or the CRT heap (in MFC). For typical applications, this memory allocation scheme is sufficient. However, for code making intensive use of strings (or multithreaded code) the default memory managers may not perform optimally. This topic describes how to override the default memory management behavior of `CStringT`, creating allocators specifically optimized for the task at hand.

- [Implementation of a Custom String Manager (Basic Method)](../atl-mfc-shared/implementation-of-a-custom-string-manager-basic-method.md)

- [Avoidance of Heap Contention](../atl-mfc-shared/avoidance-of-heap-contention.md)

- [Implementation of a Custom String Manager (Advanced Method)](../atl-mfc-shared/implementation-of-a-custom-string-manager-advanced-method.md)

- [CFixedStringT: An Example of a Custom String Manager](../atl-mfc-shared/cfixedstringt-example-of-a-custom-string-manager.md)

## See also

[CustomString sample](../overview/visual-cpp-samples.md)
