---
title: "ComPtr::operator== Operator | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "client/Microsoft::WRL::ComPtr::operator=="
dev_langs: 
  - "C++"
ms.assetid: 6a26e936-29d4-4b7d-b44a-7c575ad07509
caps.latest.revision: 3
author: "mikeblome"
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
# ComPtr::operator== Operator
Indicates whether two ComPtr objects are equal.  
  
## Syntax  
  
```cpp  
bool operator==(  
   const ComPtr<T>& a,  
   const ComPtr<U>& b  
);  
  
bool operator==(  
   const ComPtr<T>& a,  
   decltype(__nullptr)  
);  
  
bool operator==(  
   decltype(__nullptr),  
   const ComPtr<T>& a  
);  
  
```  
  
#### Parameters  
 `a`  
 A reference to a ComPtr object.  
  
 `b`  
 A reference to another ComPtr object.  
  
## Return Value  
 The first operator yields `true` if object `a` is equal to object `b`; otherwise, `false`.  
  
 The second and third operators yield `true` if object `a` is equal to `nullptr`; otherwise, `false`.  
  
## Requirements  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [Microsoft::WRL Namespace](../windows/microsoft-wrl-namespace.md)   
 [ComPtr Class](../windows/comptr-class.md)