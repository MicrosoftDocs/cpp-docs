---
title: "ComPtr::operator= Operator | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "client/Microsoft::WRL::ComPtr::operator="
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operator= operator"
ms.assetid: 1a0c2752-f7d8-4819-9443-07b88b69ef02
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
# ComPtr::operator= Operator
Assigns a value to the current ComPtr.  
  
## Syntax  
  
```  
WRL_NOTHROW ComPtr& operator=(  
   decltype(__nullptr)  
);  
WRL_NOTHROW ComPtr& operator=(  
   _In_opt_ T *other  
);  
template <  
   typename U  
>  
WRL_NOTHROW ComPtr& operator=(  
   _In_opt_ U *other  
);  
WRL_NOTHROW ComPtr& operator=(  
   const ComPtr &other  
);  
template<  
   class U  
>  
WRL_NOTHROW ComPtr& operator=(  
   const ComPtr<U>& other  
);  
WRL_NOTHROW ComPtr& operator=(  
   _Inout_ ComPtr &&other  
);  
template<  
   class U  
>  
WRL_NOTHROW ComPtr& operator=(  
   _Inout_ ComPtr<U>&& other  
);  
```  
  
#### Parameters  
 `U`  
 A class.  
  
 `other`  
 A pointer, reference, or rvalue reference to a type or another ComPtr.  
  
## Return Value  
 A reference to the current ComPtr.  
  
## Remarks  
 The first version of this operator assigns an empty value to the current ComPtr.  
  
 In the second version, if the assigning interface pointer is not the same as the current ComPtr interface pointer, the second interface pointer is assigned to the current ComPtr.  
  
 In the third version, the assigning interface pointer is assigned to the current ComPtr.  
  
 In the fourth version, if the interface pointer of the assigning value is not the same as the current ComPtr interface pointer, the second interface pointer is assigned to the current ComPtr.  
  
 The fifth version is a copy operator; a reference to a ComPtr is assigned to the current ComPtr.  
  
 The sixth version is a copy operator that uses move semantics; an rvalue reference to a ComPtr if any type is static cast and then assigned to the current ComPtr.  
  
 The seventh version is a copy operator that uses move semantics; an rvalue reference to a ComPtr of type `U` is static cast then and assigned to the current ComPtr.  
  
## Requirements  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [ComPtr Class](../windows/comptr-class.md)