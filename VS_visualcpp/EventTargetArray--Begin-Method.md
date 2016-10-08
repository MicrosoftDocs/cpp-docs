---
title: "EventTargetArray::Begin Method"
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
ms.assetid: 1cc7fdfd-a2c4-4b28-93cf-1c82842294ba
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
# EventTargetArray::Begin Method
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
ComPtr<IUnknown>* Begin();  
```  
  
## Return Value  
 The address of the first element in the internal array of event handlers.  
  
## Remarks  
 Gets the address of the first element in the internal array of event handlers.  
  
## Requirements  
 **Header:** event.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [EventTargetArray Class](../VS_visualcpp/EventTargetArray-Class.md)   
 [Microsoft::WRL::Details Namespace](../VS_visualcpp/Microsoft--WRL--Details-Namespace.md)