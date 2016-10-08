---
title: "-Fp (Name .Pch File)"
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
H1: /Fp (Name .Pch File)
ms.assetid: 0fcd9cbd-e09f-44d3-9715-b41efb5d0be2
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
# -Fp (Name .Pch File)
Provides a path name for a precompiled header instead of using the default path name.  
  
## Syntax  
  
```  
/Fppathname  
```  
  
## Remarks  
 Use this option with [/Yc (Create Precompiled Header File)](../VS_visualcpp/-Yc--Create-Precompiled-Header-File-.md) or [/Yu (Use Precompiled Header File)](../VS_visualcpp/-Yu--Use-Precompiled-Header-File-.md) to provide a path name for a precompiled header instead of using the default path name. You can also use **/Fp** with **/Yc** to specify the use of a precompiled header file that differs from the **/Yc**`filename` argument and from the base name of the source file.  
  
 If you do not specify an extension as part of the path name, an extension of .pch is assumed. If you specify a directory without a file name, the default file name is VC`x`0.pch., where `x` is the major version of Visual C++ in use.  
  
 You can also use the **/Fp** option with **/Yu**.  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [How to: Open Project Property Pages](../Topic/How%20to:%20Open%20Project%20Property%20Pages.md).  
  
2.  Click the **C/C++** folder.  
  
3.  Click the **Precompiled Headers** property page.  
  
4.  Modify the **Precompiled Header File** property.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.PrecompiledHeaderFile?qualifyHint=False>.  
  
## Example  
 If you want to create a precompiled header file for a debugging version of your program and you are compiling both header files and source code, you can specify a command such as:  
  
```  
CL /DDEBUG /Zi /Yc /FpDPROG.PCH PROG.CPP  
```  
  
## Example  
 The following command specifies the use of a precompiled header file named MYPCH.pch. The compiler assumes that the source code in PROG.cpp has been precompiled through MYAPP.h and that the precompiled code resides in MYPCH.pch. It uses the content of MYPCH.pch and compiles the rest of PROG.cpp to create an .obj file. The output of this example is a file named PROG.exe.  
  
```  
CL /YuMYAPP.H /FpMYPCH.PCH PROG.CPP  
```  
  
## See Also  
 [Output-File (/F) Options](../VS_visualcpp/Output-File---F--Options.md)   
 [Compiler Options](../VS_visualcpp/Compiler-Options.md)   
 [Setting Compiler Options](../VS_visualcpp/Setting-Compiler-Options.md)   
 [Specifying the Pathname](../VS_visualcpp/Specifying-the-Pathname.md)