---
title: "-QIfist (Suppress _ftol)"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "/qifist"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "QIfist compiler option [C++]"
  - "-QIfist compiler option [C++]"
  - "/QIfist compiler option [C++]"
ms.assetid: 1afd32a5-f658-4b66-85f4-e0ce4cb955bd
caps.latest.revision: 17
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# /QIfist (Suppress _ftol)
Suppresses the call of the helper function `_ftol` when a conversion from a floating-point type to an integral type is required.  
  
## Syntax  
  
```  
/QIfist  
```  
  
## Remarks  
  
> [!NOTE]
>  **/QIfist** is only available in the compiler targeting x86; this compiler option is not available in the compilers targeting [!INCLUDE[vcprx64](../build/includes/vcprx64_md.md)] orARM.  
  
 In addition to converting from a floating-point type to integral type, the `_ftol` function ensures the rounding mode of the floating-point unit (FPU) is toward zero (truncate), by setting bits 10 and 11 of the control word. This guarantees that converting from a floating-point type to an integral type occurs as described by the ANSI C standard (the fractional portion of the number is discarded). When using **/QIfist**, this guarantee no longer applies. The rounding mode will be one of four as documented in Intel reference manuals:  
  
-   Round toward nearest (even number if equidistant)  
  
-   Round toward negative infinity  
  
-   Round toward positive infinity  
  
-   Round toward zero  
  
 You can use the [_control87, _controlfp, \__control87_2](../crt/_control87--_controlfp--__control87_2.md) C Run-Time function to modify the rounding behavior of the FPU. The default rounding mode of the FPU is "Round toward nearest." Using **/QIfist** can improve the performance of your application, but not without risk. You should thoroughly test the portions of your code that are sensitive to rounding modes before relying upon code built with **/QIfist** in production environments.  
  
 [/arch (x86)](../buildref/-arch--x86-.md) and **/QIfist** can not be used on the same compiland.  
  
> [!NOTE]
>  **/QIfist** is not in effect by default because the rounding bits also affect floating point to floating point rounding (which occurs after every calculation), so when you set the flags for C-style (toward zero) rounding, your floating point calculations might be different. **/QIfist** should not be used if your code depends upon the expected behavior of truncating the fractional portion of the floating-point number. If you are unsure, do not use **/QIfist**.  
  
 **/QIfist** is deprecated. The compiler has made significant improvements in float to int conversion speed. For more information, see [Deprecated Compiler Options in Visual C++ 2005](assetId:///aa59fce3-50b8-4f66-9aeb-ce09a7a84cce).  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [How to: Open Project Property Pages](../notintoc/how-to--open-project-property-pages.md).  
  
2.  Click the **C/C++** folder.  
  
3.  Click the **Command Line** property page.  
  
4.  Type the compiler option in the **Additional Options** box.  
  
### To set this compiler option programmatically  
  
-   See \<xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions*>.  
  
## See Also  
 [/Q Options (Low-Level Operations)](../buildref/-q-options--low-level-operations-.md)   
 [Compiler Options](../buildref/compiler-options.md)   
 [Setting Compiler Options](../buildref/setting-compiler-options.md)