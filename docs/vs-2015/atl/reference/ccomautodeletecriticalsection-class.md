---
title: "CComAutoDeleteCriticalSection Class | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CComAutoDeleteCriticalSection"
  - "CComAutoDeleteCriticalSection"
  - "ATL::CComAutoDeleteCriticalSection"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CComAutoDeleteCriticalSection class"
ms.assetid: 2396dbea-1c60-4841-b50e-c4e18af311a3
caps.latest.revision: 23
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CComAutoDeleteCriticalSection Class
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CComAutoDeleteCriticalSection Class](https://docs.microsoft.com/cpp/atl/reference/ccomautodeletecriticalsection-class).  
  
  
This class provides methods for obtaining and releasing ownership of a critical section object.  
  
## Syntax  
  
```
class CComAutoDeleteCriticalSection : public CComSafeDeleteCriticalSection
```  
  
## Remarks  
 `CComAutoDeleteCriticalSection` derives from the class [CComSafeDeleteCriticalSection](../../atl/reference/ccomsafedeletecriticalsection-class.md). However, `CComAutoDeleteCriticalSection` overrides the [Term](../Topic/CComSafeDeleteCriticalSection::Term.md) method to `private` access, which forces internal memory cleanup to occur only when instances of this class go out of scope or are explicitly deleted from memory.  
  
 This class introduces no additional methods over its base class. See [CComSafeDeleteCriticalSection](../../atl/reference/ccomsafedeletecriticalsection-class.md) and [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md) for more information on critical section helper classes.  
  
## Inheritance Hierarchy  
 [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md)  
  
 [CComSafeDeleteCriticalSection](../../atl/reference/ccomsafedeletecriticalsection-class.md)  
  
 `CComAutoDeleteCriticalSection`  
  
## Requirements  
 **Header:** atlcore.h  
  
## See Also  
 [CComSafeDeleteCriticalSection Class](../../atl/reference/ccomsafedeletecriticalsection-class.md)   
 [CComCriticalSection Class](../../atl/reference/ccomcriticalsection-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)








