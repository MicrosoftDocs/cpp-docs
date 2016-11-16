---
title: "float_control | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc-pragma.float_control"
  - "float_control_CPP"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "float_control pragma"
  - "pragmas, float_control"
ms.assetid: 4f4ba5cf-3707-413e-927d-5ecdbc0a9a43
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# float_control
Specifies floating-point behavior for a function.  
  
## Syntax  
  
```  
float_control( value,setting [push] | push | pop )  
```  
  
## Flags  
 `value` *,* `setting` **[push]**  
 Specifies floating-point behavior. `value` can be **precise** or **except**. For more information, see [/fp (Specify Floating-Point Behavior)](../build/reference/fp-specify-floating-point-behavior.md). `setting` can either be **on** or **off**.  
  
 If `value` is **precise**, the settings for **precise** and **except** are being specified. **except** can only be set to **on** when **precise** is also set to **on**.  
  
 If the optional **push** token is added, the current setting for `value` is pushed on to the internal compiler stack.  
  
 **push**  
 Push the current `float_control` setting on to the internal compiler stack  
  
 **pop**  
 Removes the`float_control` setting from the top of the internal compiler stack and makes that the new `float_control` setting.  
  
## Remarks  
 You cannot turn `float_control precise` off when **except** is on. Similarly, **precise** cannot be turned off when `fenv_access` is on. To go from strict model to a fast model with the `float_control` pragma, use the following code:  
  
```  
#pragma float_control(except, off)  
#pragma fenv_access(off)  
#pragma float_control(precise, off)  
// The following line is needed on Itanium processors  
#pragma fp_contract(on)  
```  
  
 To go from fast model to a strict model with the `float_control` pragma, use the following code:  
  
```  
#pragma float_control(precise, on)  
#pragma fenv_access(on)  
#pragma float_control(except, on)  
// The following line is needed on Itanium processors.  
#pragma fp_contract(off)  
```  
  
 Other floating-point pragmas include:  
  
-   [fenv_access](../preprocessor/fenv-access.md)  
  
-   [fp_contract](../preprocessor/fp-contract.md)  
  
## Example  
 The following sample shows how to catch an overflow floating-point exception by using pragma `float_control`.  
  
```  
// pragma_directive_float_control.cpp  
// compile with: /EHa  
#include <stdio.h>  
#include <float.h>  
  
double func( ) {  
   return 1.1e75;  
}  
  
#pragma float_control (except,on)  
  
int main( ) {  
   float u[1];  
   unsigned int currentControl;  
   errno_t err;  
  
   err = _controlfp_s(&currentControl, ~_EM_OVERFLOW, _MCW_EM);  
   if (err != 0)  
      printf_s("_controlfp_s failed!\n");  
  
   try  {  
      u[0] = func();  
      printf_s ("Fail");     
      return(1);  
   }   
  
   catch (...)  {  
      printf_s ("Pass");  
      return(0);  
   }  
}  
```  
  
```Output  
Pass  
```  
  
## See Also  
 [Pragma Directives and the __Pragma Keyword](../preprocessor/pragma-directives-and-the-pragma-keyword.md)