---
title: "-Og (Global Optimizations) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCCLCompilerTool.GlobalOptimizations"
  - "/og"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "-Og compiler option [C++]"
  - "global optimizations compiler option [C++]"
  - "automatic register allocation"
  - "/Og compiler option [C++]"
  - "loop structures, optimizing"
  - "common subexpression elimination"
  - "Og compiler option [C++]"
ms.assetid: d10630cc-b9cf-4e97-bde3-8d7ee79e9435
caps.latest.revision: 17
author: "corob-msft"
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
# /Og (Global Optimizations)
Deprecated. Provides local and global optimizations, automatic-register allocation, and loop optimization.  
  
## Syntax  
  
```  
/Og  
```  
  
## Remarks  
 **/Og** is deprecated. These optimizations are now generally enabled by default. For more information on optimizations, see [/O1, /O2 (Minimize Size, Maximize Speed)](../../build/reference/o1-o2-minimize-size-maximize-speed.md) or [/Ox (Full Optimization)](../../build/reference/ox-full-optimization.md).  
  
 The following optimizations are available under **/Og**:  
  
-   Local and global common subexpression elimination  
  
     In this optimization, the value of a common subexpression is calculated once. In the following example, if the values of `b` and `c` do not change between the three expressions, the compiler can assign the calculation of `b + c` to a temporary variable, and substitute the variable for `b + c`:  
  
    ```  
    a = b + c;  
    d = b + c;  
    e = b + c;  
    ```  
  
     For local common subexpression optimization, the compiler examines short sections of code for common subexpressions. For global common subexpression optimization, the compiler searches entire functions for common subexpressions.  
  
-   Automatic register allocation  
  
     This optimization allows the compiler to store frequently used variables and subexpressions in registers; the `register` keyword is ignored.  
  
-   Loop optimization  
  
     This optimization removes invariant subexpressions from the body of a loop. An optimal loop contains only expressions whose values change through each execution of the loop. In the following example, the expression `x + y` does not change in the loop body:  
  
    ```  
    i = -100;  
    while( i < 0 ) {  
        i += x + y;  
    }  
    ```  
  
     After optimization, `x + y` is calculated once rather than every time the loop is executed:  
  
    ```  
    i = -100;  
    t = x + y;  
    while( i < 0 ) {  
        i += t;  
    }  
    ```  
  
     Loop optimization is much more effective when the compiler can assume no aliasing, which you set with [__restrict](../../cpp/extension-restrict.md), [noalias](../../cpp/noalias.md), or [restrict](../../cpp/restrict.md).  
  
    > [!NOTE]
    >  You can enable or disable global optimization on a function-by-function basis using the `optimize` pragma with the `g` option.  
  
 **/Og** also enables the Named Return Value optimization, which eliminates the copy constructor and destructor of a stack based return value. See [/O1, /O2 (Minimize Size, Maximize Speed)](../../build/reference/o1-o2-minimize-size-maximize-speed.md) for more information.  
  
 For related information, see [Generate Intrinsic Functions (/Oi)](../../build/reference/oi-generate-intrinsic-functions.md) and [Full Optimization (/Ox)](../../build/reference/ox-full-optimization.md).  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Click the **C/C++** folder.  
  
3.  Click the **Command Line** property page.  
  
4.  Type the compiler option in the **Additional Options** box.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## See Also  
 [/O Options (Optimize Code)](../../build/reference/o-options-optimize-code.md)   
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)