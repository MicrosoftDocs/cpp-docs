---
title: "ComPtrRef::operator!= Operator"
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
  - "client/Microsoft::WRL::Details::ComPtrRef::operator!="
dev_langs: 
  - "C++"
ms.assetid: ab3093cc-6fbd-4039-890a-6df1cde992b6
caps.latest.revision: 5
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# ComPtrRef::operator!= Operator
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```cpp  
  
bool operator!=(  
   const Details::ComPtrRef<ComPtr<T>>& a,  
   const Details::ComPtrRef<ComPtr<U>>& b  
);  
  
bool operator!=(  
   const Details::ComPtrRef<ComPtr<T>>& a,  
   decltype(__nullptr)  
);  
  
bool operator!=(  
   decltype(__nullptr),  
   const Details::ComPtrRef<ComPtr<T>>& a  
);  
  
bool operator!=(  
   const Details::ComPtrRef<ComPtr<T>>& a,  
   void* b  
);  
  
bool operator!=(  
   void* b,  
   const Details::ComPtrRef<ComPtr<T>>& a  
);  
```  
  
#### Parameters  
 `a`  
 A reference to a ComPtrRef object.  
  
 `b`  
 A reference to another ComPtrRef object, or a pointer to an anonymous object (`void*`).  
  
## Return Value  
 The first operator yields `true` if object `a` is not equal to object `b`; otherwise, `false`.  
  
 The second and third operators yield `true` if object `a` is not equal to `nullptr`; otherwise, `false`.  
  
 The fourth and fifth operators yield `true` if object `a` is not equal to object `b`; otherwise, `false`.  
  
## Remarks  
 Indicates whether two ComPtrRef objects are not equal.  
  
## Requirements  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [Microsoft::WRL::Details Namespace](../windows/microsoft--wrl--details-namespace.md)   
 [ComPtrRef Class](../windows/comptrref-class.md)