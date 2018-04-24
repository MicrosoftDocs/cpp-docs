---
title: "RuntimeClass::GetIids Method | Microsoft Docs"
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
  - "implements/Microsoft::WRL::RuntimeClass::GetIids"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetIids method"
ms.assetid: 826a67d1-ebc4-4940-b5d5-7cd66885e4a1
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# RuntimeClass::GetIids Method
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [RuntimeClass::GetIids Method](https://docs.microsoft.com/cpp/windows/runtimeclass-getiids-method).  
  
  
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
 [RuntimeClass Class](../windows/runtimeclass-class.md)

