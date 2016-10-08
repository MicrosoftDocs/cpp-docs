---
title: "Compiler Error C3381"
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
ms.topic: error-reference
ms.assetid: d276c89f-8377-4cb6-a8d4-7770885f06c4
caps.latest.revision: 9
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
# Compiler Error C3381
'assembly' : assembly access specifiers are only available in code compiled with a /clr option  
  
 Native types can be visible outside the assembly, but you can only specify assembly access for native types in a **/clr** compilation.  
  
 For more information, see [Type visibility](../VS_visualcpp/How-to--Define-and-Consume-Classes-and-Structs--C---CLI-.md#BKMK_Type_visibility) and [/clr (Common Language Runtime Compilation)](../VS_visualcpp/-clr--Common-Language-Runtime-Compilation-.md).  
  
## Example  
 The following sample generates C3381.  
  
```  
// C3381.cpp  
// compile with: /c  
public class A {};   // C3381  
```