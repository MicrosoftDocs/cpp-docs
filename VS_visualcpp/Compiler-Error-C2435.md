---
title: "Compiler Error C2435"
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
ms.assetid: be6aa8f8-579b-42ea-bdd8-2d01393646ad
caps.latest.revision: 12
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
# Compiler Error C2435
'var' : dynamic initialization requires managed CRT, cannot compile with /clr:safe  
  
 Initialization of global per–application domain variable requires the CRT compiled with `/clr:pure`, which does not produce a verifiable image.  
  
 For more information, see [appdomain](../VS_visualcpp/appdomain.md) and [process](../VS_visualcpp/process.md).  
  
 The following sample generates C2435:  
  
```  
// C2435.cpp  
// compile with: /clr:safe /c  
int globalvar = 0;   // C2435  
  
__declspec(process)  
int globalvar2 = 0;  
```