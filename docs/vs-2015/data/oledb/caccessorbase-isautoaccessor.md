---
title: "CAccessorBase::IsAutoAccessor | Microsoft Docs"
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
  - "IsAutoAccessor"
  - "CAccessorBase.IsAutoAccessor"
  - "CAccessorBase::IsAutoAccessor"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IsAutoAccessor method"
ms.assetid: c330da15-2947-4050-ad00-8f776adc58fb
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CAccessorBase::IsAutoAccessor
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CAccessorBase::IsAutoAccessor](https://docs.microsoft.com/cpp/data/oledb/caccessorbase-isautoaccessor).  
  
  
Returns true if data is automatically retrieved for the accessor during a Move operation.  
  
## Syntax  
  
```  
  
      bool IsAutoAccessor(  
   ULONG nAccessor   
) const;  
```  
  
#### Parameters  
 `nAccessor`  
 [in] The zero-offset number for the accessor.  
  
## Return Value  
 Returns **true** if the accessor is an autoaccessor. Otherwise, it returns **false**.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CAccessorBase Class](../../data/oledb/caccessorbase-class.md)

