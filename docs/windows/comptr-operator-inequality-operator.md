---
title: "ComPtr::operator!= Operator | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["client/Microsoft::WRL::ComPtr::operator!="]
dev_langs: ["C++"]
ms.assetid: 63647240-dec7-4eb9-9272-96c07d01493c
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# ComPtr::operator!= Operator
Indicates whether two **ComPtr** objects are not equal.  
  
## Syntax  
  
```cpp  
bool operator!=(  
   const ComPtr<T>& a,  
   const ComPtr<U>& b  
);  
  
bool operator!=(  
   const ComPtr<T>& a,  
   decltype(__nullptr)  
);  
  
bool operator!=(  
   decltype(__nullptr),  
   const ComPtr<T>& a  
);  
```  
  
### Parameters  
 *a*  
 A reference to a **ComPtr** object.  
  
 *b*  
 A reference to another **ComPtr** object.  
  
## Return Value  
 The first operator yields **true** if object *a* is not equal to object *b*; otherwise, **false**.  
  
 The second and third operators yield **true** if object *a* is not equal to **nullptr**; otherwise, **false**.  
  
## Requirements  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [Microsoft::WRL Namespace](../windows/microsoft-wrl-namespace.md)   
 [ComPtr Class](../windows/comptr-class.md)