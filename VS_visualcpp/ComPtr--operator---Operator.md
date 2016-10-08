---
title: "ComPtr::operator-&gt; Operator"
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
ms.assetid: 7b7faefd-d1e4-4f31-a77d-17a42e0d6b6a
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
# ComPtr::operator-&gt; Operator
Retrieves a pointer to the type specified by the current template parameter.  
  
## Syntax  
  
```  
WRL_NOTHROW Microsoft::WRL::Details::RemoveIUnknown<InterfaceType>* operator->() const;  
```  
  
## Return Value  
 Pointer to the type specified by the current template type name.  
  
## Remarks  
 This helper function removes unnecessary overhead caused by using the STDMETHOD macro. This function makes IUnknown types private instead of virtual.  
  
## Requirements  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [ComPtr Class](../VS_visualcpp/ComPtr-Class.md)