---
title: "direct3d_abort Function"
ms.custom: na
ms.date: 10/07/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: efd40102-a2e8-4b84-b532-8dde5115e64b
caps.latest.revision: 8
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
# direct3d_abort Function
Aborts the execution of a function with the `restrict(amp)` restriction clause. When the AMP runtime detects the call, it raises a [runtime_exception](../VS_visualcpp/runtime_exception-Class.md) exception with the error message "Reference Rasterizer: Shader abort instruction hit".  
  
## Syntax  
  
```  
void direct3d_abort() restrict(amp);  
```  
  
## Remarks  
 This function has the following restrictions:  
  
1.  The Debug configuration in Visual Studio is selected, i.e. the code is compiled with the _DEBUG preprocessor definition.  
  
2.  The [accelerator_view](assetId:///accelerator_view?qualifyHint=False&autoUpgrade=True) on which the kernel is invoked must be on an accelerator which supports the printf, errorf, and abort intrinsics. These are supported by the REF accelerator. For more information, see [Using accelerator and accelerator_view Objects](../VS_visualcpp/Using-accelerator-and-accelerator_view-Objects.md).  
  
3.  The maximum number of parameters allowed is seven.  
  
4.  There is no automatic widening or narrowing type conversion.  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [Concurrency Namespace (C++ AMP)](../VS_visualcpp/Concurrency-Namespace--C---AMP-.md)