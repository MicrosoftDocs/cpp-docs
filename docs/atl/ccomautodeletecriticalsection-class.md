---
title: "CComAutoDeleteCriticalSection Class"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
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
caps.latest.revision: 12
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
# CComAutoDeleteCriticalSection Class
This class provides methods for obtaining and releasing ownership of a critical section object.  
  
## Syntax  
  
```
class CComAutoDeleteCriticalSection : public CComSafeDeleteCriticalSection
```  
  
## Remarks  
 `CComAutoDeleteCriticalSection` derives from the class [CComSafeDeleteCriticalSection](../atl/ccomsafedeletecriticalsection-class.md). However, `CComAutoDeleteCriticalSection` overrides the [Term](../Topic/CComSafeDeleteCriticalSection::Term.md) method to `private` access, which forces internal memory cleanup to occur only when instances of this class go out of scope or are explicitly deleted from memory.  
  
 This class introduces no additional methods over its base class. See [CComSafeDeleteCriticalSection](../atl/ccomsafedeletecriticalsection-class.md) and [CComCriticalSection](../atl/ccomcriticalsection-class.md) for more information on critical section helper classes.  
  
## Inheritance Hierarchy  
 [CComCriticalSection](../atl/ccomcriticalsection-class.md)  
  
 [CComSafeDeleteCriticalSection](../atl/ccomsafedeletecriticalsection-class.md)  
  
 `CComAutoDeleteCriticalSection`  
  
## Requirements  
 **Header:** atlcore.h  
  
## See Also  
 [CComSafeDeleteCriticalSection Class](../atl/ccomsafedeletecriticalsection-class.md)   
 [CComCriticalSection Class](../atl/ccomcriticalsection-class.md)   
 [Class Overview](../atl/atl-class-overview.md)

