---
title: "-Os, -Ot (Favor Small Code, Favor Fast Code)"
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
H1: /Os, /Ot (Favor Small Code, Favor Fast Code)
ms.assetid: 9a340806-fa15-4308-892c-355d83cac0f2
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
# -Os, -Ot (Favor Small Code, Favor Fast Code)
Minimizes or maximizes the size of EXEs and DLLs.  
  
## Syntax  
  
```  
/Os  
/Ot  
```  
  
## Remarks  
 **/Os** (Favor Small Code) minimizes the size of EXEs and DLLs by instructing the compiler to favor size over speed. The compiler can reduce many C and C++ constructs to functionally similar sequences of machine code. Occasionally these differences offer tradeoffs of size versus speed. The **/Os** and **/Ot** options allow you to specify a preference for one over the other:  
  
 **/Ot** (Favor Fast Code) maximizes the speed of EXEs and DLLs by instructing the compiler to favor speed over size. (This is the default.) The compiler can reduce many C and C++ constructs to functionally similar sequences of machine code. Occasionally, these differences offer tradeoffs of size versus speed. The /Ot option is implied by the Maximize Speed ([/O2](../VS_visualcpp/-O1---O2--Minimize-Size--Maximize-Speed-.md)) option. The **/O2** option combines several options to produce very fast code.  
  
 If you use **/Os** or **/Ot**, then you must also specify [/Og](../VS_visualcpp/-Og--Global-Optimizations-.md) to optimize the code.  
  
> [!NOTE]
>  Information that is gathered from profiling test runs will override optimizations that would otherwise be in effect if you specify **/Ob**, **/Os**, or **/Ot**. For more information, [Profile-Guided Optimizations](../VS_visualcpp/Profile-Guided-Optimizations.md).  
  
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
  
1.  Open the project's **Property Pages** dialog box. For details, see [How to: Open Project Property Pages](../Topic/How%20to:%20Open%20Project%20Property%20Pages.md).  
  
2.  Click the **C/C++** folder.  
  
3.  Click the **Optimization** property page.  
  
4.  Modify the **Favor Size or Speed** property.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.FavorSizeOrSpeed?qualifyHint=False>.  
  
## See Also  
 [/O Options (Optimize Code)](../VS_visualcpp/-O-Options--Optimize-Code-.md)   
 [Compiler Options](../VS_visualcpp/Compiler-Options.md)   
 [Setting Compiler Options](../VS_visualcpp/Setting-Compiler-Options.md)