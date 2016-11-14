---
title: "CNoMultipleResults Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CNoMultipleResults"
  - "ATL.CNoMultipleResults"
  - "ATL::CNoMultipleResults"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CNoMultipleResults class"
ms.assetid: 343e77c4-b319-476e-b592-901ab9b2f34e
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
# CNoMultipleResults Class
Used as a template argument (*TMultiple*) to [CCommand](../../data/oledb/ccommand-class.md) to create an optimized command that handles a single result set.  
  
## Syntax  
  
```  
class CNoMultipleResults  
```  
  
## Remarks  
 If you want a command to handle multiple result sets, use [CMultipleResults](../../data/oledb/cmultipleresults-class.md) instead.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [OLE DB Consumer Templates Reference](../../data/oledb/ole-db-consumer-templates-reference.md)