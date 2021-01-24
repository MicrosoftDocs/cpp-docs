---
description: "Learn more about: Allocating and Releasing Memory for a BSTR"
title: "Allocating and Releasing Memory for a BSTR"
ms.date: "11/04/2016"
f1_keywords: ["bstr"]
helpviewer_keywords: ["BSTRs, memory allocation", "memory deallocation, string memory", "memory [C++], releasing", "memory allocation, BSTRs", "memory deallocation, BSTR memory", "strings [C++], releasing"]
ms.assetid: 98041e29-3442-4a02-b425-7a4a13e9cc84
---
# Allocating and Releasing Memory for a BSTR

When you create `BSTR`s and pass them between COM objects, you must take care in treating the memory they use in order to avoid memory leaks. When a `BSTR` stays within an interface, you must free its memory when you are done with it. However, when a `BSTR` passes out of an interface, the receiving object takes responsibility for its memory management.

In general, the rules for allocating and releasing memory allocated for `BSTR`s are as follows:

- When you call into a function that expects a `BSTR` argument, you must allocate the memory for the `BSTR` before the call and release it afterwards. For example:

   [!code-cpp[NVC_ATLMFC_Utilities#192](../atl-mfc-shared/codesnippet/cpp/allocating-and-releasing-memory-for-a-bstr_1.cpp)]

   [!code-cpp[NVC_ATLMFC_Utilities#193](../atl-mfc-shared/codesnippet/cpp/allocating-and-releasing-memory-for-a-bstr_2.cpp)]

- When you call into a function that returns a `BSTR`, you must free the string yourself. For example:

   [!code-cpp[NVC_ATLMFC_Utilities#194](../atl-mfc-shared/codesnippet/cpp/allocating-and-releasing-memory-for-a-bstr_3.cpp)]

   [!code-cpp[NVC_ATLMFC_Utilities#195](../atl-mfc-shared/codesnippet/cpp/allocating-and-releasing-memory-for-a-bstr_4.cpp)]

- When you implement a function that returns a `BSTR`, allocate the string but do not free it. The receiving the function releases the memory. For example:

   [!code-cpp[NVC_ATLMFC_Utilities#196](../atl-mfc-shared/codesnippet/cpp/allocating-and-releasing-memory-for-a-bstr_5.cpp)]

## See also

[Strings (ATL/MFC)](../atl-mfc-shared/strings-atl-mfc.md)<br/>
[CStringT::AllocSysString](../atl-mfc-shared/reference/cstringt-class.md#allocsysstring)<br/>
[SysAllocString](/windows/win32/api/oleauto/nf-oleauto-sysallocstring)<br/>
[SysFreeString](/windows/win32/api/oleauto/nf-oleauto-sysfreestring)
