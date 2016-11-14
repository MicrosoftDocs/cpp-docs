---
title: "WeakRef::AsIID Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "client/Microsoft::WRL::WeakRef::AsIID"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "AsIID method"
ms.assetid: 94e87309-32da-4dbb-8233-e77313a1f448
caps.latest.revision: 7
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
# WeakRef::AsIID Method
Sets the specified ComPtr pointer parameter to represent the specified interface ID.  
  
## Syntax  
  
```  
HRESULT AsIID(  
   REFIID riid,  
   _Out_ ComPtr<IInspectable>* ptr  
);  
```  
  
#### Parameters  
 `riid`  
 An interface ID.  
  
 `ptr`  
 When this operation completes, an object that represents parameter `riid`.  
  
## Return Value  
  
-   S_OK if this operation succeeds; otherwise, an HRESULT that indicates the reason the operation failed, and `ptr` is set to `nullptr`.  
  
-   S_OK if this operation succeeds, but the current WeakRef object has already been released. Parameter `ptr` is set to `nullptr`.  
  
-   S_OK if this operation succeeds, but the current WeakRef object is not derived from parameter `riid`. Parameter `ptr` is set to `nullptr`. (For more information, see Remarks.)  
  
## Remarks  
 An error is emitted if parameter `riid` is not derived from IInspectable. This error supersedes the return value.  
  
 The first template is the form that you should use in your code. The second template (not shown here, but declared in the header file) is an internal, helper specialization that supports C++ language features such as the [auto](../cpp/auto-cpp.md) type deduction keyword.  
  
 Starting in the Windows 10 SDK, this method does not set the WeakRef instance to `nullptr` if the weak reference could not be obtained, so you should avoid error-checking code that checks the WeakRef for `nullptr`. Instead, check `ptr` for `nullptr`.  
  
## Requirements  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [WeakRef Class](../windows/weakref-class.md)