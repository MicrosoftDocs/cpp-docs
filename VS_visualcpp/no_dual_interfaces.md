---
title: "no_dual_interfaces"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
  - C
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 9acd5d9d-4a49-4cdc-9470-73a2c23cf512
caps.latest.revision: 4
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# no_dual_interfaces
**C++ Specific**  
  
 Changes the way the compiler generates wrapper functions for dual interface methods.  
  
## Syntax  
  
```  
no_dual_interfaces  
```  
  
## Remarks  
 Normally, the wrapper will call the method through the virtual function table for the interface. With `no_dual_interfaces`, the wrapper instead calls **IDispatch::Invoke** to invoke the method.  
  
 **END C++ Specific**  
  
## See Also  
 [#import Attributes](../VS_visualcpp/#import-Attributes--C---.md)   
 [#import Directive](../VS_visualcpp/#import-Directive--C---.md)