---
title: "operator&lt; Operator (Microsoft::WRL) | Microsoft Docs"
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
  - "client/Microsoft::WRL::operator<"
dev_langs: 
  - "C++"
ms.assetid: bfae0e1c-1648-482b-99c2-3217d62aba46
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# operator&lt; Operator (Microsoft::WRL)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [operator&lt; Operator (Microsoft::WRL)](https://docs.microsoft.com/cpp/windows/operator-less-than-operator-microsoft-wrl).  
  
  
Determines if the address of one object is less than another.  
  
## Syntax  
  
```cpp  
template<class T, class U>  
bool operator<(const ComPtr<T>& a, const ComPtr<U>& b) throw();  
template<class T, class U>  
bool operator<(const Details::ComPtrRef<ComPtr<T>>& a, const Details::ComPtrRef<ComPtr<U>>& b) throw();  
```  
  
#### Parameters  
 `a`  
 The left object.  
  
 `b`  
 The right object.  
  
## Return Value  
 `true` if the address of `a` is less than the address of `b`; otherwise, `false`.  
  
## Requirements  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [Microsoft::WRL Namespace](../windows/microsoft-wrl-namespace.md)

