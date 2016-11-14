---
title: "CAccessorBase::IsAutoAccessor | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
# CAccessorBase::IsAutoAccessor
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