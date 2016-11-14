---
title: "WeakRef::As Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "client/Microsoft::WRL::WeakRef::As"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "As method"
ms.assetid: 7173da62-b3fe-44d6-aea4-1aa97e69b221
caps.latest.revision: 6
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
# WeakRef::As Method
Sets the specified ComPtr pointer parameter to represent the specified interface.  
  
## Syntax  
  
```  
  
template<  
   typename U  
>  
HRESULT As(  
   _Out_ ComPtr<U>* ptr  
);  
  
template<  
   typename U  
>  
HRESULT As(  
   _Out_ Details::ComPtrRef<ComPtr<U>> ptr  
);  
```  
  
#### Parameters  
 `U`  
 An interface ID.  
  
 `ptr`  
 When this operation completes, an object that represents parameter `U`.  
  
## Return Value  
  
-   S_OK if this operation succeeds; otherwise, an HRESULT that indicates the reason the operation failed, and `ptr` is set to `nullptr`.  
  
-   S_OK if this operation succeeds, but the current WeakRef object has already been released. Parameter `ptr` is set to `nullptr`.  
  
-   S_OK if this operation succeeds, but the current WeakRef object is not derived from parameter `U`. Parameter `ptr` is set to `nullptr`.  
  
## Remarks  
 An error is emitted if parameter `U` is IWeakReference, or is not derived from IInspectable.  
  
 The first template is the form that you should use in your code. The second template is an internal, helper specialization that supports C++ language features such as the [auto](../cpp/auto-cpp.md) type deduction keyword.  
  
 Starting in the Windows 10 SDK, this method does not set the WeakRef instance to `nullptr` if the weak reference could not be obtained, so you should avoid error-checking code that checks the WeakRef for `nullptr`. Instead, check `ptr` for `nullptr`.  
  
## Requirements  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [WeakRef Class](../windows/weakref-class.md)