---
title: "CAccessorBase::GetHAccessor | Microsoft Docs"
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
  - "GetHAccessor"
  - "CAccessorBase::GetHAccessor"
  - "CAccessorBase.GetHAccessor"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetHAccessor method"
ms.assetid: 1bb98762-0752-4aae-a0b6-ba96bec03621
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CAccessorBase::GetHAccessor
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CAccessorBase::GetHAccessor](https://docs.microsoft.com/cpp/data/oledb/caccessorbase-gethaccessor).  
  
  
Retrieves the accessor handle of a specified accessor.  
  
## Syntax  
  
```  
  
      HACCESSOR GetHAccessor(  
   ULONG nAccessor   
) const;  
```  
  
#### Parameters  
 `nAccessor`  
 [in] The zero-offset number for the accessor.  
  
## Return Value  
 The accessor handle.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CAccessorBase Class](../../data/oledb/caccessorbase-class.md)

