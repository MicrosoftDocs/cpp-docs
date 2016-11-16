---
title: "Callback Function for CDC::SetAbortProc | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "Callback Function for CDC::SetAbortProc"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "callback functions, for CDC::SetAbortProc"
ms.assetid: daa36d5d-15de-40fc-8d37-a865d06c4710
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
# Callback Function for CDC::SetAbortProc
The name *AbortFunc* is a placeholder for the application-supplied function name.  
  
## Syntax  
  
```  
BOOL CALLBACK EXPORT AbortFunc(
    HDC hPr,  
    int code);
```  
  
#### Parameters  
 *hPr*  
 Identifies the device context.  
  
 `code`  
 Specifies whether an error has occurred. It is 0 if no error has occurred. It is **SP_OUTOFDISK** if the Print Manager is currently out of disk space and more disk space will become available if the application waits. If `code` is **SP_OUTOFDISK**, the application does not have to abort the print job. If it does not, it must yield to the Print Manager by calling the **PeekMessage** or **GetMessage** Windows function.  
  
## Return Value  
 The return value of the abort-handler function is nonzero if the print job is to continue, and 0 if it is canceled.  
  
## Remarks  
 The actual name must be exported as described in the Remarks section of [CDC::SetAbortProc](../../mfc/reference/cdc-class.md#cdc__setabortproc).  
  
## Requirements  
 **Header:** afxwin.h  
  
## See Also  
 [Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CDC::SetAbortProc](../../mfc/reference/cdc-class.md#cdc__setabortproc)

