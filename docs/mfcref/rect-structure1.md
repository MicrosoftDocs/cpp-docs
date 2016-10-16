---
title: "RECT Structure1"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "LPRECT"
  - "RECT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RECT structure"
  - "LPRECT structure"
ms.assetid: 1b3160de-64e9-40d1-89eb-af3e0fd6acf0
caps.latest.revision: 11
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
# RECT Structure1
The `RECT` structure defines the coordinates of the upper-left and lower-right corners of a rectangle.  
  
## Syntax  
  
```  
  
      typedef struct tagRECT {   
   LONG left;  
   LONG top;  
   LONG right;  
   LONG bottom;  
} RECT;  
```  
  
## Members  
 `left`  
 Specifies the x-coordinate of the upper-left corner of a rectangle.  
  
 `top`  
 Specifies the y-coordinate of the upper-left corner of a rectangle.  
  
 `right`  
 Specifies the x-coordinate of the lower-right corner of a rectangle.  
  
 `bottom`  
 Specifies the y-coordinate of the lower-right corner of a rectangle.  
  
## Example  
 [!code[NVC_MFC_Utilities#38](../mfc/codesnippet/CPP/rect-structure1_1.cpp)]  
  
## Requirements  
 **Header:** windef.h  
  
## See Also  
 [Structures, Styles, Callbacks, and Message Maps](../mfcref/structures--styles--callbacks--and-message-maps.md)   
 [CRect Class](../atl/crect-class.md)