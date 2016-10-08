---
title: "-Ob (Inline Function Expansion)"
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
H1: /Ob (Inline Function Expansion)
ms.assetid: f134e6df-e939-4980-a01d-47425dbc562a
caps.latest.revision: 13
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
# -Ob (Inline Function Expansion)
Controls inline expansion of functions.  
  
## Syntax  
  
```  
/Ob{0|1|2}  
```  
  
## Arguments  
 **0**  
 Disables inline expansions. By default, expansion occurs at the compiler's discretion on all functions, often referred to as *auto-inlining*.  
  
 **1**  
 Allows expansion only of functions marked [inline](../Topic/inline,%20__inline,%20__forceinline.md), [__inline](../Topic/inline,%20__inline,%20__forceinline.md), or [__forceinline](../Topic/inline,%20__inline,%20__forceinline.md), or in a C++ member function defined in a class declaration.  
  
 **2**  
 The default value. Allows expansion of functions marked as `inline`, `__inline`, or `__forceinline`, and any other function that the compiler chooses.  
  
 **/Ob2** is in effect when [/O1, /O2 (Minimize Size, Maximize Speed)](../VS_visualcpp/-O1---O2--Minimize-Size--Maximize-Speed-.md) or [/Ox (Full Optimization)](../VS_visualcpp/-Ox--Full-Optimization-.md) is used.  
  
 This option requires that you enable optimizations using **/O1**, **/O2**, **/Ox**, or **/Og**.  
  
## Remarks  
 The compiler treats the inline expansion options and keywords as suggestions. There is no guarantee that any function will be expanded inline. You can disable inline expansions, but you cannot force the compiler to inline a particular function, even when using the `__forceinline` keyword.  
  
 You can use the `#pragma`[auto_inline](../VS_visualcpp/auto_inline.md) directive to exclude functions from consideration as candidates for inline expansion. Also see the `#pragma`[intrinsic](../VS_visualcpp/intrinsic.md) directive.  
  
> [!NOTE]
>  Information that is gathered from profiling test runs overrides optimizations that would otherwise be in effect if you specify **/Ob**, **/Os**, or **/Ot**. For more information, see [Profile-Guided Optimizations](../VS_visualcpp/Profile-Guided-Optimizations.md).  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../VS_visualcpp/Working-with-Project-Properties.md).  
  
2.  Expand **Configuration Properties**, **C/C++**, and select **Optimization**.  
  
3.  Modify the **Inline Function Expansion** property.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.InlineFunctionExpansion?qualifyHint=False>.  
  
## See Also  
 [/O Options (Optimize Code)](../VS_visualcpp/-O-Options--Optimize-Code-.md)   
 [Compiler Options](../VS_visualcpp/Compiler-Options.md)   
 [Setting Compiler Options](../VS_visualcpp/Setting-Compiler-Options.md)