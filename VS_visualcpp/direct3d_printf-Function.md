---
title: "direct3d_printf Function"
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
ms.assetid: 50fabec1-3c38-4718-87dc-0313cc96e61a
caps.latest.revision: 7
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
# direct3d_printf Function
Prints a formatted string to the Visual Studio output window. It is called from a function with the `restrict(amp)` restriction clause.  
  
## Syntax  
  
```  
void direct3d_printf(  
    const char *,  
   ...  
) restrict(amp);  
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