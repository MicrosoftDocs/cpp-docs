---
title: "Allocating and Deallocating Window Memory | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "memory allocation, window objects"
  - "memory deallocation"
  - "storage for window objects"
  - "memory deallocation, window memory"
  - "window objects, deallocating memory for"
  - "storage for window objects, allocating"
ms.assetid: 7c962539-8461-4846-b5ca-fe3b15c313dc
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Allocating and Deallocating Window Memory
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Allocating and Deallocating Window Memory](https://docs.microsoft.com/cpp/mfc/allocating-and-deallocating-window-memory).  
  
  
Do not use the C++ **delete** operator to destroy a frame window or view. Instead, call the `CWnd` member function `DestroyWindow`. Frame windows, therefore, should be allocated on the heap with operator **new**. Be careful when allocating frame windows on the stack frame or globally. Other windows should be allocated on the stack frame whenever possible.  
  
## What do you want to know more about  
  
-   [Creating windows](../mfc/creating-windows.md)  
  
-   [Window destruction sequence](../mfc/window-destruction-sequence.md)  
  
-   [Detaching a CWnd from its HWND](../mfc/detaching-a-cwnd-from-its-hwnd.md)  
  
## See Also  
 [Destroying Window Objects](../mfc/destroying-window-objects.md)





