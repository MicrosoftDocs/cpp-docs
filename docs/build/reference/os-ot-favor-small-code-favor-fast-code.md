---
title: "-Os, -Ot (Favor Small Code, Favor Fast Code) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCCLWCECompilerTool.FavorSizeOrSpeed"
  - "/os"
  - "VC.Project.VCCLCompilerTool.FavorSizeOrSpeed"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "favor fast code compiler option [C++]"
  - "/Os compiler option [C++]"
  - "Ot compiler option [C++]"
  - "/Ot compiler option [C++]"
  - "small machine code"
  - "-Ot compiler option [C++]"
  - "fast code"
  - "favor small code compiler option [C++]"
  - "Os compiler option [C++]"
  - "-Os compiler option [C++]"
ms.assetid: 9a340806-fa15-4308-892c-355d83cac0f2
caps.latest.revision: 12
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
# /Os, /Ot (Favor Small Code, Favor Fast Code)
Minimizes or maximizes the size of EXEs and DLLs.  
  
## Syntax  
  
```  
/Os  
/Ot  
```  
  
## Remarks  
 **/Os** (Favor Small Code) minimizes the size of EXEs and DLLs by instructing the compiler to favor size over speed. The compiler can reduce many C and C++ constructs to functionally similar sequences of machine code. Occasionally these differences offer tradeoffs of size versus speed. The **/Os** and **/Ot** options allow you to specify a preference for one over the other:  
  
 **/Ot** (Favor Fast Code) maximizes the speed of EXEs and DLLs by instructing the compiler to favor speed over size. (This is the default.) The compiler can reduce many C and C++ constructs to functionally similar sequences of machine code. Occasionally, these differences offer tradeoffs of size versus speed. The /Ot option is implied by the Maximize Speed ([/O2](../../build/reference/o1-o2-minimize-size-maximize-speed.md)) option. The **/O2** option combines several options to produce very fast code.  
  
 If you use **/Os** or **/Ot**, then you must also specify [/Og](../../build/reference/og-global-optimizations.md) to optimize the code.  
  
> [!NOTE]
>  Information that is gathered from profiling test runs will override optimizations that would otherwise be in effect if you specify **/Ob**, **/Os**, or **/Ot**. For more information, [Profile-Guided Optimizations](../../build/reference/profile-guided-optimizations.md).  
  
 **x86 Specific**  
  
 The following example code demonstrates the difference between the Favor Small Code (**/Os**) options and the Favor Fast Code (**/Ot**) option:  
  
> [!NOTE]
>  The following describes the expected behavior when using **/Os** or **/Ot**. However, compiler behavior from release to release may result in different optimizations for the code below.  
  
```  
/* differ.c  
  This program implements a multiplication operator  
  Compile with /Os to implement multiply explicitly as multiply.  
  Compile with /Ot to implement as a series of shift and LEA instructions.  
*/  
int differ(int x)  
{  
    return x * 71;  
}  
```  
  
 As shown in the fragment of machine code below, when DIFFER.c is compiled for size (**/Os**), the compiler implements the multiply expression in the return statement explicitly as a multiply to produce a short but slower sequence of code:  
  
```  
mov    eax, DWORD PTR _x$[ebp]  
imul   eax, 71                  ; 00000047H  
```  
  
 Alternately, when DIFFER.c is compiled for speed (**/Ot**), the compiler implements the multiply expression in the return statement as a series of shift and `LEA` instructions to produce a fast but longer sequence of code:  
  
```  
mov    eax, DWORD PTR _x$[ebp]  
mov    ecx, eax  
shl    eax, 3  
lea    eax, DWORD PTR [eax+eax*8]  
sub    eax, ecx  
```  
  
 **END x86 Specific**  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Click the **C/C++** folder.  
  
3.  Click the **Optimization** property page.  
  
4.  Modify the **Favor Size or Speed** property.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.FavorSizeOrSpeed%2A>.  
  
## See Also  
 [/O Options (Optimize Code)](../../build/reference/o-options-optimize-code.md)   
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)