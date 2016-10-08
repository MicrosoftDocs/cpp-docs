---
title: "AsyncBase::OnCancel Method"
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
ms.assetid: 4bd0b68e-a9df-4913-9f6c-e093ed55c3f9
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
# AsyncBase::OnCancel Method
When overridden in a derived class, cancels an asynchronous operation.  
  
## Syntax  
  
```  
virtual void OnCancel(  
   void  
) = 0;  
```  
  
## Requirements  
 **Header:** async.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [AsyncBase Class](../VS_visualcpp/AsyncBase-Class.md)   
 [AsyncBase::Cancel Method](../VS_visualcpp/AsyncBase--Cancel-Method.md)