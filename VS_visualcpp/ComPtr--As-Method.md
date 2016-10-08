---
title: "ComPtr::As Method"
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
ms.assetid: 2ad6c262-9bdb-4c59-a330-1af8bcd445cc
caps.latest.revision: 5
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
# ComPtr::As Method
Returns a ComPtr object that represents the interface identified by the specified template parameter.  
  
## Syntax  
  
```  
  
template<  
   typename U  
>  
HRESULT As(  
   _Out_ ComPtr<U>* p  
) const;  
  
template<  
   typename U  
>  
HRESULT As(  
   _Out_ Details::ComPtrRef<ComPtr<U>> p  
) const;  
  
```  
  
#### Parameters  
 `U`  
 The interface to be represented by parameter `p`.  
  
 `p`  
 A ComPtr object that represents the interface specified by parameter `U`. Parameter `p` must not refer to the current ComPtr object.  
  
## Remarks  
 The first template is the form that you should use in your code. The second template is an internal, helper specialization that supports C++ language features such as the [auto](../VS_visualcpp/auto--C---.md) type deduction keyword.  
  
## Return Value  
 S_OK if successful; otherwise, an HRESULT that indicates the error.  
  
## Requirements  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [ComPtr Class](../VS_visualcpp/ComPtr-Class.md)