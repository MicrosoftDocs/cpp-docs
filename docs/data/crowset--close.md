---
title: "CRowset::Close"
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
  - "CRowset::Close"
  - "ATL.CRowset.Close"
  - "CRowset<TAccessor>::Close"
  - "CRowset<TAccessor>.Close"
  - "ATL.CRowset<TAccessor>.Close"
  - "ATL::CRowset::Close"
  - "ATL::CRowset<TAccessor>::Close"
  - "CRowset.Close"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Close method"
ms.assetid: 966d779e-e148-4dc0-bbba-7cfb9fa6a16b
caps.latest.revision: 9
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
# CRowset::Close
Releases rows and the current [IRowset](https://msdn.microsoft.com/en-us/library/ms720986.aspx) interface.  
  
## Syntax  
  
```  
  
void Close( ) throw( );  
  
```  
  
## Remarks  
 This method releases all rows currently in the rowset.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CRowset Class](../data/crowset-class.md)