---
title: "Debugging and Exception Classes | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
f1_keywords: ["vc.classes.debug"]
dev_langs: ["C++"]
helpviewer_keywords: ["debugging [MFC], exception classes", "debugging [MFC], classes for debugging"]
ms.assetid: 0d158efd-2e62-452e-9d2a-d3c30dfee7f9
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Debugging and Exception Classes

These classes provide support for debugging dynamic memory allocation and for passing exception information from the function where the exception is thrown to the function where it is caught.

Use classes [CDumpContext](../mfc/reference/cdumpcontext-class.md) and [CMemoryState](../mfc/reference/cmemorystate-structure.md) during development to assist with debugging, as described in [Debugging MFC Applications](/visualstudio/debugger/mfc-debugging-techniques). Use [CRuntimeClass](../mfc/reference/cruntimeclass-structure.md) to determine the class of any object at run time, as described in the article [Accessing Run-Time Class Information](../mfc/accessing-run-time-class-information.md). The framework uses `CRuntimeClass` to create objects of a particular class dynamically.

## See Also

[Class Overview](../mfc/class-library-overview.md)

