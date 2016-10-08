---
title: "Compiler Warning C4394"
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
ms.assetid: 5de94de0-17e3-4e7c-92f4-5c3c1b825120
caps.latest.revision: 11
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
# Compiler Warning C4394
'function' : per-appdomain symbol should not be marked with __declspec(dllexport)  
  
 A function marked with the [appdomain](../VS_visualcpp/appdomain.md)`__declspec` modifier is compiled to MSIL (not to native), and export tables ([export](../VS_visualcpp/export.md)`__declspec` modifier) are not supported for managed functions.  
  
 You can declare a managed function to have public accessibility. For more information, see [Type visibility](../VS_visualcpp/How-to--Define-and-Consume-Classes-and-Structs--C---CLI-.md#BKMK_Type_visibility) and [Member visibility](../VS_visualcpp/How-to--Define-and-Consume-Classes-and-Structs--C---CLI-.md#BKMK_Member_visibility).  
  
 C4394 is always issued as an error.  You can turn off this warning with the `#pragma warning` or **/wd**; see [warning](../VS_visualcpp/warning.md) or [/w, /W0, /W1, /W2, /W3, /W4, /w1, /w2, /w3, /w4, /Wall, /wd, /we, /wo, /Wv, /WX (Warning Level)](../VS_visualcpp/-w---W0---W1---W2---W3---W4---w1---w2---w3---w4---Wall---wd---we---wo---Wv---WX--Warning-Level-.md) for more information.  
  
## Example  
 The following sample generates C4394.  
  
```  
// C4394.cpp  
// compile with: /clr /c  
__declspec(dllexport) __declspec(appdomain) int g1 = 0;   // C4394  
__declspec(dllexport) int g2 = 0;   // OK  
```