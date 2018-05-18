---
title: "Detaching a CWnd from Its HWND | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
f1_keywords: ["CWnd"]
dev_langs: ["C++"]
helpviewer_keywords: ["HWND, detaching CWnd from", "removing HWNDs from CWnds", "CWnd objects [MFC], detaching from HWND", "detaching CWnds from HWNDs", "Detach method (CWnd class)"]
ms.assetid: 6efadf84-0517-4a3f-acfd-216e088f19c6
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Detaching a CWnd from Its HWND
If you need to circumvent the object-`HWND` relationship, MFC provides another `CWnd` member function, [Detach](../mfc/reference/cwnd-class.md#detach), which disconnects the C++ window object from the Windows window. This prevents the destructor from destroying the Windows window when the object is destroyed.  
  
## What do you want to know more about  
  
-   [Creating windows](../mfc/creating-windows.md)  
  
-   [Window destruction sequence](../mfc/window-destruction-sequence.md)  
  
-   [Allocating and deallocating window memory](../mfc/allocating-and-deallocating-window-memory.md)  
  
## See Also  
 [Window Objects](../mfc/window-objects.md)

