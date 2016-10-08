---
title: "-Tc, -Tp, -TC, -TP (Specify Source File Type)"
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
H1: /Tc, /Tp, /TC, /TP (Specify Source File Type)
ms.assetid: 7d9d0a65-338b-427c-8b48-fff30e2f9d2b
caps.latest.revision: 11
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
# -Tc, -Tp, -TC, -TP (Specify Source File Type)
The **/Tc** option specifies that `filename` is a C source file, even if it does not have a .c extension. The **/Tp** option specifies that `filename` is a C++ source file, even if it doesn't have a .cpp or .cxx extension. A space between the option and `filename` is optional. Each option specifies one file; to specify additional files, repeat the option.  
  
 **/TC** and **/TP** are global variants of **/Tc** and **/Tp**. They specify to the compiler to treat all files named on the command line as C source files (**/TC**) or C++ source files (**/TP**), without regard to location on the command line in relation to the option. These global options can be overridden on a single file by means of **/Tc** or **/Tp**.  
  
## Syntax  
  
```  
/Tcfilename  
/Tpfilename  
/TC  
/TP  
```  
  
## Arguments  
 `filename`  
 A C or C++ source file.  
  
## Remarks  
 By default, CL assumes that files with the .c extension are C source files and files with the .cpp or the .cxx extension are C++ source files.  
  
 When either the **TC** or **Tc** option is specified, any specification of the [/Zc:wchar_t (wchar_t Is Native Type)](../VS_visualcpp/-Zc-wchar_t--wchar_t-Is-Native-Type-.md) option is ignored.  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [How to: Open Project Property Pages](../Topic/How%20to:%20Open%20Project%20Property%20Pages.md).  
  
2.  Click the **C/C++** folder.  
  
3.  Click the **Advanced** property page.  
  
4.  Modify the **Compile As** property.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.CompileAs?qualifyHint=False>.  
  
## Examples  
 The following CL command line specifies that MAIN.c, TEST.prg, and COLLATE.prg are all C source files. CL will not recognize PRINT.prg.  
  
```  
CL MAIN.C /TcTEST.PRG /TcCOLLATE.PRG PRINT.PRG  
```  
  
 The following CL command line specifies that TEST1.c, TEST2.cxx, TEST3.huh, and TEST4.o are compiled as C++ files, and TEST5.z is compiled as a C file.  
  
```  
CL TEST1.C TEST2.CXX TEST3.HUH TEST4.O /Tc TEST5.Z /TP  
```  
  
## See Also  
 [Compiler Options](../VS_visualcpp/Compiler-Options.md)   
 [Setting Compiler Options](../VS_visualcpp/Setting-Compiler-Options.md)