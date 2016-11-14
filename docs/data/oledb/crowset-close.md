---
title: "CRowset::Close | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
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
 [CRowset Class](../../data/oledb/crowset-class.md)