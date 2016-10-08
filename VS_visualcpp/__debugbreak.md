---
title: "__debugbreak"
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
ms.assetid: 1d1e1c0c-891a-4613-ae4b-d790094ba830
caps.latest.revision: 16
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
# __debugbreak
**Microsoft Specific**  
  
 Causes a breakpoint in your code, where the user will be prompted to run the debugger.  
  
## Syntax  
  
```  
void __debugbreak();  
```  
  
## Requirements  
  
|Intrinsic|Architecture|Header|  
|---------------|------------------|------------|  
|`__debugbreak`|x86, ARM, x64|<intrin.h>|  
  
## Remarks  
 The `__debugbreak` compiler intrinsic, similar to [DebugBreak](http://msdn.microsoft.com/library/windows/desktop/ms679297.aspx), is a portable Win32 way to cause a breakpoint.  
  
> [!NOTE]
>  When compiling with **/clr**, a function containing `__debugbreak` will be compiled to MSIL. `asm int 3` causes a function to be compiled to native. For more information, see [__asm](../VS_visualcpp/__asm.md).  
  
 For example:  
  
```  
main() {  
   __debugbreak();  
}  
```  
  
 is similar to:  
  
```  
main() {  
   __asm {  
      int 3  
   }  
}  
```  
  
 on an x86 computer.  
  
 This routine is only available as an intrinsic.  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../VS_visualcpp/Compiler-Intrinsics.md)   
 [Keywords](../VS_visualcpp/Keywords--C---.md)