---
title: "ComPtrRef::operator== Operator | Microsoft Docs"
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
  - "client/Microsoft::WRL::Details::ComPtrRef::operator=="
dev_langs: 
  - "C++"
ms.assetid: 95fcf781-b473-4317-88cd-e938778d3c3e
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# ComPtrRef::operator== Operator
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [ComPtrRef::operator== Operator](https://docs.microsoft.com/cpp/windows/comptrref-operator-equality-operator).  
  
  
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```cpp  
  
bool operator==(  
   const Details::ComPtrRef<ComPtr<T>>& a,  
   const Details::ComPtrRef<ComPtr<U>>& b  
);  
  
bool operator==(  
   const Details::ComPtrRef<ComPtr<T>>& a,  
   decltype(__nullptr)  
);  
  
bool operator==(  
   decltype(__nullptr),  
   const Details::ComPtrRef<ComPtr<T>>& a  
);  
  
bool operator==(  
   const Details::ComPtrRef<ComPtr<T>>& a,  
   void* b  
);  
  
bool operator==(  
   void* b,  
   const Details::ComPtrRef<ComPtr<T>>& a  
);  
```  
  
#### Parameters  
 `a`  
 A reference to a ComPtrRef object.  
  
 `b`  
 A reference to another ComPtrRef object, or a pointer to an anonymous type (`void*`).  
  
## Return Value  
 The first operator yields `true` if object `a` is equal to object `b`; otherwise, `false`.  
  
 The second and third operators yield `true` if object `a` is equal to `nullptr`; otherwise, `false`.  
  
 The fourth and fifth operators yield `true` if object `a` is equal to object `b`; otherwise, `false`.  
  
## Remarks  
 Indicates whether two ComPtrRef objects are equal.  
  
## Requirements  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)   
 [ComPtrRef Class](../windows/comptrref-class.md)

