---
title: "Results of Calling Example"
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
ms.topic: language-reference
ms.assetid: aa70a7cb-ba1d-4aa6-bd0a-ba783da2e642
caps.latest.revision: 7
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
# Results of Calling Example
## Microsoft Specific  
  
## __cdecl  
 The C decorated function name is "_MyFunc."  
  
 ![CDECL calling convention](../VS_visualcpp/media/vc37I01.gif "vc37I01")  
The __cdecl calling convention  
  
## __stdcall and thiscall  
 The C decorated name (`__stdcall`) is "_MyFunc@20." The C++ decorated name is proprietary.  
  
 ![&#95;&#95;stdcall and thiscall calling conventions](../VS_visualcpp/media/vc37I02.gif "vc37I02")  
The __stdcall and thiscall calling conventions  
  
## __fastcall  
 The C decorated name (`__fastcall`) is "@MyFunc@20." The C++ decorated name is proprietary.  
  
 ![Calling convention for &#95;&#95;fastcall](../VS_visualcpp/media/vc37I03.gif "vc37I03")  
The __fastcall calling convention  
  
### END Microsoft Specific  
  
## See Also  
 [Calling Example: Function Prototype and Call](../VS_visualcpp/Calling-Example--Function-Prototype-and-Call.md)