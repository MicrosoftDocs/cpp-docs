---
title: "setjmp-longjump"
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
ms.topic: article
H1: setjmp/longjump
ms.assetid: b0e21902-095d-4198-8f9a-b6326525721a
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
# setjmp-longjump
When you include setjmpex.h or setjmp.h, all calls to [setjmp](../VS_visualcpp/setjmp.md) or [longjmp](../VS_visualcpp/longjmp.md) will result in an unwind that invokes destructors and finally calls.  This differs from x86, where including setjmp.h results in finally clauses and destructors not being invoked.  
  
 A call to `setjmp` preserves the current stack pointer, non-volatile registers, and MxCsr registers.  Calls to `longjmp` return to the most recent `setjmp` call site and resets the stack pointer, non-volatile registers, and MxCsr registers, back to the state as preserved by the most recent `setjmp` call.  
  
## See Also  
 [Calling Convention](../VS_visualcpp/Calling-Convention.md)