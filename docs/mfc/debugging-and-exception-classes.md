---
description: "Learn more about: Debugging and Exception Classes"
title: "Debugging and Exception Classes"
ms.date: "11/04/2016"
f1_keywords: ["vc.classes.debug"]
helpviewer_keywords: ["debugging [MFC], exception classes", "debugging [MFC], classes for debugging"]
ms.assetid: 0d158efd-2e62-452e-9d2a-d3c30dfee7f9
---
# Debugging and Exception Classes

These classes provide support for debugging dynamic memory allocation and for passing exception information from the function where the exception is thrown to the function where it is caught.

Use classes [CDumpContext](reference/cdumpcontext-class.md) and [CMemoryState](reference/cmemorystate-structure.md) during development to assist with debugging, as described in [Debugging MFC Applications](/visualstudio/debugger/mfc-debugging-techniques). Use [CRuntimeClass](reference/cruntimeclass-structure.md) to determine the class of any object at run time, as described in the article [Accessing Run-Time Class Information](accessing-run-time-class-information.md). The framework uses `CRuntimeClass` to create objects of a particular class dynamically.

## See also

[Class Overview](class-library-overview.md)
