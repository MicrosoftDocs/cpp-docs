---
title: "DHtmlUrlEventMapEntry Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
f1_keywords: ["DHtmlUrlEventMapEntry"]
dev_langs: ["C++"]
helpviewer_keywords: ["DHtmlUrlEventMapEntry structure [MFC]"]
ms.assetid: 43117c1f-1a51-406c-aa2f-fea647080049
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# DHtmlUrlEventMapEntry Structure
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
 *szUrl*  
 The URL.  
  
 *pEventMap*  
 The event map associated with the URL.  
  
## Requirements  
 **Header:** afxdhtml.h  
  
## See Also  
 [Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)

