---
title: "InterfaceTraits::FillArrayWithIid Method"
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
ms.assetid: 73583177-adc9-4fcb-917d-fa7e6d07c990
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
# InterfaceTraits::FillArrayWithIid Method
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
__forceinline static void FillArrayWithIid(  
   _Inout_ unsigned long &index,  
   _In_ IID* iids  
);  
  
```  
  
#### Parameters  
 `index`  
 Pointer to a field that contains a zero-based index value.  
  
 `iids`  
 An array of interface IDs.  
  
## Remarks  
 Assigns the interface ID of `Base` to the array element specified by the index argument.  
  
 Contrary to the name of this API, only one array element is modified; not the entire array.  
  
 For more information about `Base`, see the Public Typedefs section in [InterfaceTraits Structure](../VS_visualcpp/InterfaceTraits-Structure.md).  
  
## Requirements  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [InterfaceTraits Structure](../VS_visualcpp/InterfaceTraits-Structure.md)   
 [Microsoft::WRL::Details Namespace](../VS_visualcpp/Microsoft--WRL--Details-Namespace.md)