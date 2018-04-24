---
title: "DHtmlUrlEventMapEntry Structure | Microsoft Docs"
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
  - "DHtmlUrlEventMapEntry"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DHtmlUrlEventMapEntry structure"
ms.assetid: 43117c1f-1a51-406c-aa2f-fea647080049
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# DHtmlUrlEventMapEntry Structure
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [DHtmlUrlEventMapEntry Structure](https://docs.microsoft.com/cpp/mfc/reference/dhtmlurleventmapentry-structure).  
  
  
The `DHtmlUrlEventMapEntry` structure provides multi-URL event map support.  
  
## Syntax  
  
```  
struct DHtmlUrlEventMapEntry  
{  
LPCTSTR szUrl;  
const DHtmlEventMapEntry *pEventMap;  
};  
```  
  
#### Parameters  
 `szUrl`  
 The URL.  
  
 *pEventMap*  
 The event map associated with the URL.  
  
## Requirements  
 **Header:** afxdhtml.h  
  
## See Also  
 [Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)







