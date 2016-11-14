---
title: "CreateClassFactory Function | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "module/Microsoft::WRL::Details::CreateClassFactory"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CreateClassFactory function"
ms.assetid: 772d5d1b-8872-4745-81ca-521a39564713
caps.latest.revision: 2
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
# CreateClassFactory Function
Creates a factory that produces instances of the specified class.  
  
## Syntax  
  
```cpp  
  
template<typename Factory>  
inline HRESULT STDMETHODCALLTYPE CreateClassFactory(  
   _In_ unsigned int *flags,   
   _In_ const CreatorMap* entry,   
   REFIID riid,   
   _Outptr_ IUnknown **ppFactory  
) throw();  
  
```  
  
#### Parameters  
 `flags`  
 A combination of one or more [RuntimeClassType](../windows/runtimeclasstype-enumeration.md) enumeration values.  
  
 `entry`  
 Pointer to a [CreatorMap](../windows/creatormap-structure.md) that contains initialization and registration information about parameter `riid`.  
  
 `riid`  
 Reference to an interface ID.  
  
 `ppFactory`  
 If this operation completes successfully, a pointer to a class factory.  
  
## Return Value  
 S_OK if successful; otherwise, an HRESULT that indicates the error.  
  
## Remarks  
 An assert error is emitted if template parameter `Factory` doesn't derive from interface IClassFactory.  
  
## Requirements  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [Microsoft::WRL::Wrappers::Details Namespace](../windows/microsoft-wrl-wrappers-details-namespace.md)