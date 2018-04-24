---
title: "PAINTSTRUCT Structure | Microsoft Docs"
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
  - "PAINTSTRUCT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "PAINTSTRUCT structure"
ms.assetid: 81ce4993-3e89-43b2-8c98-7946f1314d24
caps.latest.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# PAINTSTRUCT Structure
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [PAINTSTRUCT Structure](https://docs.microsoft.com/cpp/mfc/reference/paintstruct-structure).  
  
  
The `PAINTSTRUCT` structure contains information that can be used to paint the client area of a window.  
  
## Syntax  
  
```  
typedef struct tagPAINTSTRUCT {  
    HDC hdc;  
    BOOL fErase;  
    RECT rcPaint;  
    BOOL fRestore;  
    BOOL fIncUpdate;  
    BYTE rgbReserved[16];  
} PAINTSTRUCT;  
```  
  
#### Parameters  
 *hdc*  
 Identifies the display context to be used for painting.  
  
 *fErase*  
 Specifies whether the background needs to be redrawn. It is not 0 if the application should redraw the background. The application is responsible for drawing the background if a Windows window-class is created without a background brush (see the description of the **hbrBackground** member of the [WNDCLASS](http://msdn.microsoft.com/library/windows/desktop/ms633576) structure in the [!INCLUDE[winSDK](../../includes/winsdk-md.md)]).  
  
 *rcPaint*  
 Specifies the upper left and lower right corners of the rectangle in which the painting is requested.  
  
 *fRestore*  
 Reserved member. It is used internally by Windows.  
  
 *fIncUpdate*  
 Reserved member. It is used internally by Windows.  
  
 *rgbReserved[16]*  
 Reserved member. A reserved block of memory used internally by Windows.  
  
## Requirements  
 **Header:** winuser.h  
  
## See Also  
 [Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CPaintDC::m_ps](../../mfc/reference/cpaintdc-class.md#m_ps)







