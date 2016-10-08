---
title: "_STATIC_ASSERT Macro"
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
apilocation: 
  - msvcrt.dll
  - msvcr80.dll
  - msvcr90.dll
  - msvcr100.dll
  - msvcr100_clr0400.dll
  - msvcr110.dll
  - msvcr110_clr0400.dll
  - msvcr120.dll
  - msvcr120_clr0400.dll
  - ucrtbase.dll
apitype: DLLExport
ms.assetid: 89b0350c-2c2f-4be6-9786-8b1f0780a5da
caps.latest.revision: 6
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
# _STATIC_ASSERT Macro
Evaluate an expression at compile time and generate an error when the result is `FALSE`.  
  
## Syntax  
  
```  
_STATIC_ASSERT(  
    booleanExpression  
);  
```  
  
#### Parameters  
 `booleanExpression`  
 Expression (including pointers) that evaluates to nonzero (`TRUE`) or 0 (`FALSE`).  
  
## Remarks  
 This macro resembles the [_ASSERT and _ASSERTE macros](../VS_visualcpp/_ASSERT--_ASSERTE--_ASSERT_EXPR-Macros.md), except that `booleanExpression` is evaluated at compile time instead of at runtime. If `booleanExpression` evaluates to `FALSE` (0), [Compiler Error C2466](../VS_visualcpp/Compiler-Error-C2466.md) is generated.  
  
## Example  
 In this example, we check whether the `sizeof` an `int` is larger than or equal to 2 bytes and whether the `sizeof` a `long` is 1 byte. The program will not compile and it will generate [Compiler Error C2466](../VS_visualcpp/Compiler-Error-C2466.md) because a `long` is larger than 1 byte.  
  
```  
// crt__static_assert.c  
  
#include <crtdbg.h>  
#include <stdio.h>  
  
_STATIC_ASSERT(sizeof(int) >= 2);  
_STATIC_ASSERT(sizeof(long) == 1);  // C2466  
  
int main()  
{  
    printf("I am sure that sizeof(int) will be >= 2: %d\n",  
        sizeof(int));  
    printf("I am not so sure that sizeof(long) == 1: %d\n",  
        sizeof(long));  
}  
```  
  
## Requirements  
  
|Macro|Required header|  
|-----------|---------------------|  
|`_STATIC_ASSERT`|<crtdbg.h>|  
  
## .NET Framework Equivalent  
 [System::Diagnostics::Debug::Assert](https://msdn.microsoft.com/en-us/library/system.diagnostics.debug.assert.aspx)  
  
## See Also  
 [Alphabetical Function Reference](../VS_visualcpp/CRT-Alphabetical-Function-Reference.md)   
 [_ASSERT, _ASSERTE, _ASSERT_EXPR Macros](../VS_visualcpp/_ASSERT--_ASSERTE--_ASSERT_EXPR-Macros.md)