---
title: "_abnormal_termination"
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
apiname: 
  - _abnormal_termination
apilocation: 
  - msvcr110.dll
  - msvcr110_clr0400.dll
  - msvcr90.dll
  - msvcr120.dll
  - msvcrt.dll
  - msvcr80.dll
  - msvcr100.dll
apitype: DLLExport
ms.assetid: 952970a4-9586-4c3d-807a-db729448c91c
caps.latest.revision: 2
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
# _abnormal_termination
Indicates whether the `__finally` block of a [try-finally statement](../VS_visualcpp/try-finally-Statement.md) is entered while the system is executing an internal list of termination handlers.  
  
## Syntax  
  
```cpp  
int   _abnormal_termination(  
   );  
```  
  
## Return Value  
 `true` if the system is *unwinding* the stack; otherwise, `false`.  
  
## Remarks  
 This is an internal function used to manage unwinding exceptions, and is not intended to be called from user code.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|_abnormal_termination|excpt.h|  
  
## See Also  
 [try-finally Statement](../VS_visualcpp/try-finally-Statement.md)