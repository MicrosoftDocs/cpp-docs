---
title: "operator!= Operator (Microsoft::WRL) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["client/Microsoft::WRL::operator!="]
dev_langs: ["C++"]
ms.assetid: 785435da-87a6-4454-9bce-9d288a96dc26
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# operator!= Operator (Microsoft::WRL)
Inequality operator for [ComPtr](../windows/comptr-class.md) and [ComPtrRef](../windows/comptrref-class.md) objects.  
  
## Syntax  
  
```cpp  
WRL_NOTHROW bool operator!=(  
   const ComPtr<T>& a,  
   const ComPtr<U>& b  
);  
WRL_NOTHROW bool operator!=(  
   const ComPtr<T>& a,  
   decltype(__nullptr)  
);  
WRL_NOTHROW bool operator!=(  
   decltype(__nullptr),  
   const ComPtr<T>& a  
);  
WRL_NOTHROW bool operator!=(  
   const Details::ComPtrRef<ComPtr<T>>& a,  
   const Details::ComPtrRef<ComPtr<U>>& b  
);  
WRL_NOTHROW bool operator!=(  
   const Details::ComPtrRef<ComPtr<T>>& a,  
   decltype(__nullptr)  
);  
WRL_NOTHROW bool operator!=(  
   decltype(__nullptr),  
   const Details::ComPtrRef<ComPtr<T>>& a  
);  
WRL_NOTHROW bool operator!=(  
   const Details::ComPtrRef<ComPtr<T>>& a,  
   void* b  
);  
WRL_NOTHROW bool operator!=(  
   void* b,  
   const Details::ComPtrRef<ComPtr<T>>& a  
);  
```  
  
### Parameters  
 *a*  
 The left object.  
  
 *b*  
 The right object.  
  
## Return Value  
 **true** if the objects are not equal; otherwise, **false**.  
  
## Requirements  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [Microsoft::WRL Namespace](../windows/microsoft-wrl-namespace.md)