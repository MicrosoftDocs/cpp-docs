---
title: "-Oi (Generate Intrinsic Functions)"
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
H1: /Oi (Generate Intrinsic Functions)
ms.assetid: fa4a3bf6-0ed8-481b-91c0-add7636132b4
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
# -Oi (Generate Intrinsic Functions)
Replaces some function calls with intrinsic or otherwise special forms of the function that help your application run faster.  
  
## Syntax  
  
```  
/Oi[-]  
```  
  
## Remarks  
 Programs that use intrinsic functions are faster because they do not have the overhead of function calls, but may be larger because of the additional code created.  
  
 See [intrinsic](../VS_visualcpp/intrinsic.md) for more information on which functions have intrinsic forms.  
  
 **/Oi** is only a request to the compiler to replace some function calls with intrinsics; the compiler may call the function (and not replace the function call with an intrinsic) if it will result in better performance.  
  
 **x86 Specific**  
  
 The intrinsic floating-point functions do not perform any special checks on input values and so work in restricted ranges of input, and have different exception handling and boundary conditions than the library routines with the same name. Using the true intrinsic forms implies loss of IEEE exception handling, and loss of `_matherr` and `errno` functionality; the latter implies loss of ANSI conformance. However, the intrinsic forms can considerably speed up floating-point-intensive programs, and for many programs, the conformance issues are of little practical value.  
  
 You can use the [Za](../VS_visualcpp/-Za---Ze--Disable-Language-Extensions-.md) compiler option to override generation of true intrinsic floating-point options. In this case, the functions are generated as library routines that pass arguments directly to the floating-point chip instead of pushing them onto the program stack.  
  
 **END x86 Specific**  
  
 You also use [intrinsic](../VS_visualcpp/intrinsic.md) to create intrinsic functions, or [function (C/C++)](../VS_visualcpp/function--C-C---.md) to explicitly force a function call.  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [How to: Open Project Property Pages](../Topic/How%20to:%20Open%20Project%20Property%20Pages.md).  
  
2.  Click the **C/C++** folder.  
  
3.  Click the **Optimization** property page.  
  
4.  Modify the **Enable Intrinsic Functions** property.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.EnableIntrinsicFunctions?qualifyHint=False>.  
  
## See Also  
 [/O Options (Optimize Code)](../VS_visualcpp/-O-Options--Optimize-Code-.md)   
 [Compiler Options](../VS_visualcpp/Compiler-Options.md)   
 [Setting Compiler Options](../VS_visualcpp/Setting-Compiler-Options.md)   
 [Compiler Intrinsics](../VS_visualcpp/Compiler-Intrinsics.md)