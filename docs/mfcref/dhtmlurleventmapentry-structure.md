---
title: "DHtmlUrlEventMapEntry Structure"
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
  - "DHtmlUrlEventMapEntry"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DHtmlUrlEventMapEntry structure"
ms.assetid: 43117c1f-1a51-406c-aa2f-fea647080049
caps.latest.revision: 8
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
 `szUrl`  
 The URL.  
  
 *pEventMap*  
 The event map associated with the URL.  
  
## Requirements  
 **Header:** afxdhtml.h  
  
## See Also  
 [Structures, Styles, Callbacks, and Message Maps](../mfcref/structures--styles--callbacks--and-message-maps.md)