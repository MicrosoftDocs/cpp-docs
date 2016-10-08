---
title: "-Za, -Ze (Disable Language Extensions)"
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
H1: /Za, /Ze (Disable Language Extensions)
ms.assetid: 65e49258-7161-4289-a176-7c5c0656b1a2
caps.latest.revision: 18
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
# -Za, -Ze (Disable Language Extensions)
The **/Za** compiler option emits an error for language constructs that are not compatible with ANSI C89 or ISO C++11. The **/Ze** compiler option, which is on by default, enables Microsoft extensions.  
  
## Syntax  
  
```  
/Za  
/Ze  
```  
  
## Remarks  
  
> [!NOTE]
>  The **/Ze** option is deprecated because its behavior is on by default. We recommend you use the [/Zc (Conformance)](../VS_visualcpp/-Zc--Conformance-.md) compiler options to control specific language extension features. For a list of deprecated compiler options, see the **Deprecated and Removed Compiler Options** section in [Compiler Options Listed by Category](../VS_visualcpp/Compiler-Options-Listed-by-Category.md).  
  
 The Visual C++ compiler offers a number of features beyond those specified in either the ANSI C89, ISO C99, or ISO C++ standards. These features are known collectively as Microsoft extensions to C and C++. These extensions are available by default, and not available when the **/Za** option is specified. For more information about specific extensions, see [Microsoft Extensions to C and C++](../VS_visualcpp/Microsoft-Extensions-to-C-and-C--.md).  
  
 We recommend that you disable language extensions by specifying the **/Za** option if you plan to port your program to other environments. When **/Za** is specified, the compiler treats Microsoft extended keywords as simple identifiers, disables the other Microsoft extensions, and automatically defines the `__STDC__` predefined macro for C programs.  
  
 Other compiler options used with **/Za** can affect how the compiler ensures standards conformance. For example, **/Za** and [/fp (Specify Floating-Point Behavior)](../VS_visualcpp/-fp--Specify-Floating-Point-Behavior-.md) may result in floating-point type promotion behavior that does not conform to the ISO C99 or C++11 standards.  
  
 For ways to specify specific standards-conformant behavior settings, see the [/Zc](../VS_visualcpp/-Zc--Conformance-.md) compiler option.  
  
 For more information about conformance issues with Visual C++, see [Nonstandard Behavior](../VS_visualcpp/Nonstandard-Behavior.md).  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [How to: Open Project Property Pages](../Topic/How%20to:%20Open%20Project%20Property%20Pages.md).  
  
2.  In the navigation pane, choose **Configuration Properties**, **C/C++**, **Language**.  
  
3.  Modify the **Disable Language Extensions** property.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.DisableLanguageExtensions?qualifyHint=False>.  
  
## See Also  
 [Compiler Options](../VS_visualcpp/Compiler-Options.md)   
 [Setting Compiler Options](../VS_visualcpp/Setting-Compiler-Options.md)   
 [/Zc (Conformance)](../VS_visualcpp/-Zc--Conformance-.md)