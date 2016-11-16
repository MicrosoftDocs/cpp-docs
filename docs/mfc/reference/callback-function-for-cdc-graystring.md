---
title: "Callback Function for CDC::GrayString | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "Callback Function for CDC::GrayString"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "callback functions, for CDC::GrayString"
ms.assetid: 5217e183-df48-426b-931b-6245022ca36f
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Callback Function for CDC::GrayString
*OutputFunc* is a placeholder for the application-supplied callback function name.  
  
## Syntax  
  
```  
BOOL CALLBACK EXPORT OutputFunc(
    HDC hDC,  
    LPARAM lpData,  
    int nCount);
```  
  
#### Parameters  
 `hDC`  
 Identifies a memory device context with a bitmap of at least the width and height specified by `nWidth` and `nHeight` to `GrayString`.  
  
 `lpData`  
 Points to the character string to be drawn.  
  
 `nCount`  
 Specifies the number of characters to output.  
  
## Return Value  
 The callback function's return value must be **TRUE** to indicate success; otherwise it is **FALSE**.  
  
## Remarks  
 The callback function (*OutputFunc*) must draw an image relative to the coordinates (0,0) rather than (*x*, *y*).  
  
## Requirements  
 **Header:** afxwin.h  
  
## See Also  
 [Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CDC::GrayString](../../mfc/reference/cdc-class.md#cdc__graystring)

