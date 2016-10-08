---
title: "ClassFactory::QueryInterface Method"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: 9593881f-4585-4d70-8ca6-b328918d4d6b
caps.latest.revision: 3
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# ClassFactory::QueryInterface Method
Retrieves a pointer to the interface specified by parameter.  
  
## Syntax  
  
```  
STDMETHOD(  
   QueryInterface  
)(REFIID riid, _Deref_out_ void **ppvObject);  
```  
  
#### Parameters  
 `riid`  
 An interface ID.  
  
 `ppvObject`  
 When this operation completes, a pointer to the interface specified by parameter `riid`.  
  
## Return Value  
 S_OK if successful; otherwise, an HRESULT that describes the failure.  
  
## Requirements  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [ClassFactory Class](../VS_visualcpp/ClassFactory-Class.md)