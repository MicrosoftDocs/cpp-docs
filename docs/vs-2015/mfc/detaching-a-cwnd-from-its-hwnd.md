---
title: "Detaching a CWnd from Its HWND | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CWnd"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "HWND, detaching CWnd from"
  - "removing HWNDs from CWnds"
  - "CWnd objects, detaching from HWND"
  - "detaching CWnds from HWNDs"
  - "Detach method (CWnd class)"
ms.assetid: 6efadf84-0517-4a3f-acfd-216e088f19c6
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Detaching a CWnd from Its HWND
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Detaching a CWnd from Its HWND](https://docs.microsoft.com/cpp/mfc/detaching-a-cwnd-from-its-hwnd).  
  
  
If you need to circumvent the object-`HWND` relationship, MFC provides another `CWnd` member function, [Detach](../mfc/reference/cwnd-class.md#detach), which disconnects the C++ window object from the Windows window. This prevents the destructor from destroying the Windows window when the object is destroyed.  
  
## What do you want to know more about  
  
-   [Creating windows](../mfc/creating-windows.md)  
  
-   [Window destruction sequence](../mfc/window-destruction-sequence.md)  
  
-   [Allocating and deallocating window memory](../mfc/allocating-and-deallocating-window-memory.md)  
  
## See Also  
 [Window Objects](../mfc/window-objects.md)





