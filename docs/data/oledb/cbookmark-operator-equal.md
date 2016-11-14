---
title: "CBookmark::operator = | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CBookmark<0>::operator="
  - "CBookmark<0>.operator="
  - "ATL.CBookmark.operator="
  - "CBookmark::operator="
  - "ATL.CBookmark<0>.operator="
  - "ATL::CBookmark<0>::operator="
  - "CBookmark.operator="
  - "ATL::CBookmark::operator="
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "= operator, with OLE DB templates"
  - "operator =, bookmarks"
  - "operator=, bookmarks"
ms.assetid: 23805af4-aedd-47ad-bef4-21d902463797
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
# CBookmark::operator =
Assigns a `CBookmark` object to another.  
  
## Syntax  
  
```  
  
      CBookmark& operator =(   
   const CBookmark& bookmark    
) throw( );  
```  
  
## Remarks  
 This operator is needed only in **CBookmark\<0>**.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CBookmark Class](../../data/oledb/cbookmark-class.md)