---
title: "CBookmark::CBookmark | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CBookmark<0>.CBookmark<0>"
  - "CBookmark::CBookmark"
  - "ATL.CBookmark.CBookmark"
  - "CBookmark.CBookmark"
  - "CBookmark"
  - "ATL::CBookmark<0>::CBookmark<0>"
  - "ATL.CBookmark<0>.CBookmark<0>"
  - "CBookmark<0>::CBookmark<0>"
  - "ATL::CBookmark::CBookmark"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CBookmark class, constructor"
ms.assetid: 84f4ad2b-67d4-4ba3-8b2b-656a66fb6298
caps.latest.revision: 8
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
# CBookmark::CBookmark
The constructor.  
  
## Syntax  
  
```  
  
      CBookmark( );   
CBookmark(  
   DBLENGTH nSize   
);  
```  
  
#### Parameters  
 `nSize`  
 [in] Size of the bookmark buffer in bytes.  
  
## Remarks  
 The first function sets the buffer to **NULL** and the buffer size to 0. The second function sets the buffer size to `nSize`, and the buffer to a byte array of `nSize` bytes.  
  
> [!NOTE]
>  This function is only available in **CBookmark\<0>**.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CBookmark Class](../../data/oledb/cbookmark-class.md)