---
title: "-Wp64 (Detect 64-Bit Portability Issues)"
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
H1: /Wp64 (Detect 64-Bit Portability Issues)
ms.assetid: 331ae5aa-e627-4d03-8f63-dd2c2d76dadd
caps.latest.revision: 21
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# -Wp64 (Detect 64-Bit Portability Issues)
This compiler option is obsolete. In versions of Visual Studio before Visual Studio 2013, this detects 64-bit portability problems on types that are also marked with the [__w64](../VS_visualcpp/__w64.md) keyword.  
  
## Syntax  
  
```  
/Wp64  
```  
  
## Remarks  
 By default, in versions of Visual Studio before Visual Studio 2013, the **/Wp64** compiler option is off in the Visual C++ 32-bit compiler and on in the Visual C++ 64-bit compiler.  
  
> [!IMPORTANT]
>  The [/Wp64](../VS_visualcpp/-Wp64--Detect-64-Bit-Portability-Issues-.md) compiler option and [__w64](../VS_visualcpp/__w64.md) keyword are deprecated in Visual Studio 2010 and Visual Studio 2012, and not supported starting in Visual Studio 2013. If you convert a project that uses this switch, the switch will not be migrated during conversion. To use this option in Visual Studio 2010 or Visual Studio 2012, you must type the compiler switch under **Additional Options** in the **Command Line** section of the project properties. If you use the **/Wp64** compiler option on the command line, the compiler issues Command-Line Warning D9002. Instead of using this option and keyword to detect 64-bit portability issues, use a Visual C++ compiler that targets a 64-bit platform and specify the [/W4](../VS_visualcpp/-w---W0---W1---W2---W3---W4---w1---w2---w3---w4---Wall---wd---we---wo---Wv---WX--Warning-Level-.md) option. For more information, see [Configuring Programs for 64-Bit](../VS_visualcpp/Configuring-Programs-for-64-Bit--Visual-C---.md).  
  
 Variables of the following types are tested on a 32-bit operating system as if they were being used on a 64-bit operating system:  
  
-   int  
  
-   long  
  
-   pointer  
  
 If you regularly compile your application by using a 64-bit compiler, you can just disable **/Wp64** in your 32-bit compilations because the 64-bit compiler will detect all issues. For more information about how to target a Windows 64-bit operating system, see [Configuring Programs for 64-Bit](../VS_visualcpp/Configuring-Programs-for-64-Bit--Visual-C---.md).  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project **Property Pages** dialog box.  
  
     For more information, see [How to: Open Project Property Pages](../Topic/How%20to:%20Open%20Project%20Property%20Pages.md).  
  
2.  Click the **C/C++** folder.  
  
3.  Click the **Command Line** property page.  
  
4.  Modify the **Additional Options** box to include **/Wp64**.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.Detect64BitPortabilityProblems?qualifyHint=False>.  
  
## See Also  
 [Compiler Options](../VS_visualcpp/Compiler-Options.md)   
 [Setting Compiler Options](../VS_visualcpp/Setting-Compiler-Options.md)   
 [Configuring Programs for 64-Bit](../VS_visualcpp/Configuring-Programs-for-64-Bit--Visual-C---.md)