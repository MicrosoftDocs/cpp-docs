---
description: "Learn more about: Implementation of a Custom String Manager (Basic Method)"
title: "Implementation of a Custom String Manager (Basic Method)"
ms.date: "11/04/2016"
helpviewer_keywords: ["IAtlStringMgr class, using"]
ms.assetid: eac5d13e-cbb4-4e82-b01e-f5f2dbcb962a
---
# Implementation of a Custom String Manager (Basic Method)

The easiest way to customize the memory allocation scheme for string data is to use the ATL-provided `CAtlStringMgr` class but provide your own memory allocation routines. The constructor for `CAtlStringMgr` takes a single parameter: a pointer to an `IAtlMemMgr` object. `IAtlMemMgr` is an abstract base class that provides a generic interface to a heap. Using the `IAtlMemMgr` interface, the `CAtlStringMgr` allocates, reallocates, and frees the memory used to store string data. You can either implement the `IAtlMemMgr` interface yourself, or use one of the five ATL-provided memory manager classes. The ATL-provided memory managers simply wrap existing memory allocation facilities:

- [CCRTHeap](../atl/reference/ccrtheap-class.md) Wraps the standard CRT heap functions ([malloc](../c-runtime-library/reference/malloc.md), [free](../c-runtime-library/reference/free.md), and [realloc](../c-runtime-library/reference/realloc.md))

- [CWin32Heap](../atl/reference/cwin32heap-class.md) Wraps a Win32 heap handle, using [HeapAlloc](/windows/win32/api/heapapi/nf-heapapi-heapalloc), [HeapFree](/windows/win32/api/heapapi/nf-heapapi-heapfree), and [HeapRealloc](/windows/win32/api/heapapi/nf-heapapi-heaprealloc)

- [CLocalHeap](../atl/reference/clocalheap-class.md) Wraps the Win32 APIs: [LocalAlloc](/windows/win32/api/winbase/nf-winbase-localalloc), [LocalFree](/windows/win32/api/winbase/nf-winbase-localfree), and [LocalRealloc](/windows/win32/api/winbase/nf-winbase-localrealloc)

- [CGlobalHeap](../atl/reference/cglobalheap-class.md) Wraps the Win32 APIs: [GlobalAlloc](/windows/win32/api/winbase/nf-winbase-globalalloc), [GlobalFree](/windows/win32/api/winbase/nf-winbase-globalfree), and [GlobalRealloc](/windows/win32/api/winbase/nf-winbase-globalrealloc).

- [CComHeap](../atl/reference/ccomheap-class.md) Wraps the COM Task Allocator APIs: [CoTaskMemAlloc](/windows/win32/api/combaseapi/nf-combaseapi-cotaskmemalloc), [CoTaskMemFree](/windows/win32/api/combaseapi/nf-combaseapi-cotaskmemfree), and [CoTaskMemRealloc](/windows/win32/api/combaseapi/nf-combaseapi-cotaskmemrealloc)

For the purpose of string memory management, the most useful class is `CWin32Heap` because it allows you to create multiple independent heaps. For example, if you wanted to use a separate heap just for strings, you could do the following:

[!code-cpp[NVC_ATLMFC_Utilities#180](../atl-mfc-shared/codesnippet/cpp/implementation-of-a-custom-string-manager-basic-method_1.cpp)]

To use this private string manager to manage memory for a `CString` variable, pass a pointer to the manager as a parameter to the `CString` variable's constructor:

[!code-cpp[NVC_ATLMFC_Utilities#181](../atl-mfc-shared/codesnippet/cpp/implementation-of-a-custom-string-manager-basic-method_2.cpp)]

## See also

[Memory Management with CStringT](../atl-mfc-shared/memory-management-with-cstringt.md)
