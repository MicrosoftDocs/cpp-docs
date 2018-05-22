---
title: "END_ACCESSOR | Microsoft Docs"
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
  - "END_ACCESSOR"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "END_ACCESSOR macro"
ms.assetid: 26f74167-68c4-4909-a474-73dc7ebc9542
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# END_ACCESSOR
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [END_ACCESSOR](https://docs.microsoft.com/cpp/data/oledb/end-accessor).  
  
  
Marks the end of an accessor entry.  
  
## Syntax  
  
```  
  
END_ACCESSOR( )  
  
```  
  
## Remarks  
 For multiple accessors on a rowset, you need to specify `BEGIN_ACCESSOR_MAP` and use the `BEGIN_ACCESSOR` macro for each individual accessor. The `BEGIN_ACCESSOR` macro is completed with the `END_ACCESSOR` macro. The `BEGIN_ACCESSOR_MAP` macro is completed with the `END_ACCESSOR_MAP` macro.  
  
## Example  
 See [BEGIN_ACCESSOR_MAP](../../data/oledb/begin-accessor-map.md).  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [Macros and Global Functions for OLE DB Consumer Templates](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md)   
 [BEGIN_ACCESSOR_MAP](../../data/oledb/begin-accessor-map.md)   
 [BEGIN_ACCESSOR](../../data/oledb/begin-accessor.md)   
 [END_ACCESSOR_MAP](../../data/oledb/end-accessor-map.md)

