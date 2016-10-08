---
title: "RuntimeClass::GetIids Method"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: 826a67d1-ebc4-4940-b5d5-7cd66885e4a1
caps.latest.revision: 4
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# RuntimeClass::GetIids Method
Gets an array that can contain the interface IDs implemented by the current RuntimeClass object.  
  
## Syntax  
  
```  
STDMETHOD(  
   GetIids  
)  
   (_Out_ ULONG *iidCount,   
   _Deref_out_ _Deref_post_cap_(*iidCount) IID **iids);  
```  
  
#### Parameters  
 `iidCount`  
 When this operation completes, the total number of elements in array `iids`.  
  
 `iids`  
 When this operation completes, a pointer to an array of interface IDs.  
  
## Return Value  
 S_OK if successful; otherwise, E_OUTOFMEMORY.  
  
## Requirements  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [RuntimeClass Class](../VS_visualcpp/RuntimeClass-Class.md)