---
title: "SAL Annotations"
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
ms.assetid: 81893638-010c-41a0-9cb3-666fe360f3e0
caps.latest.revision: 17
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
# SAL Annotations
If you examine the library header files, you may notice some unusual annotations, for example, `_In_z` and `_Out_z_cap_(_Size)`. These are examples of the Microsoft source-code annotation language (SAL), which provides a set of annotations to describe how a function uses its parameters, for example, the assumptions it makes about them and the guarantees it makes on finishing. The header file <sal.h> defines the annotations.  
  
 For more information about using SAL annotations in Visual Studio, see [Using SAL Annotations to Reduce C/C++ Code Defects](../Topic/Using%20SAL%20Annotations%20to%20Reduce%20C-C++%20Code%20Defects.md).  
  
## See Also  
 [CRT Library Features](../VS_visualcpp/CRT-Library-Features.md)