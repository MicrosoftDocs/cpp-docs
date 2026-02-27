---
description: "Learn more about: CString Exception Cleanup"
title: "CString Exception Cleanup"
ms.date: "11/04/2016"
helpviewer_keywords: ["CString objects, exceptions", "exception handling, cleanup code"]
---
# CString Exception Cleanup

[!INCLUDE[product-lifecycle-status](./includes/lifecycle-note.md)]

In previous versions of MFC, it was important that you clean up [CString](../atl-mfc-shared/reference/cstringt-class.md) objects after use. With MFC version 3.0 and later, explicit cleanup is no longer necessary.

Under the C++ exception handling mechanism that MFC now uses, you do not have to worry about cleanup after an exception. For a description of how C++ "unwinds" the stack after an exception is caught, see [the try, catch, and throw statements](../cpp/try-throw-and-catch-statements-cpp.md). Even if you use the MFC **TRY**/**CATCH** macros instead of the C++ keywords **`try`** and **`catch`**, MFC uses the C++ exception mechanism underneath, so you still do not need to clean up explicitly.

## See also

[Strings (ATL/MFC)](../atl-mfc-shared/strings-atl-mfc.md)<br/>
[Exception Handling](../mfc/exception-handling-in-mfc.md)
