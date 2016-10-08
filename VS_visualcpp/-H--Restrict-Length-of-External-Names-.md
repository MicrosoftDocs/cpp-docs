---
title: "-H (Restrict Length of External Names)"
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
H1: /H (Restrict Length of External Names)
ms.assetid: de701dd3-ed04-4c88-8195-960d2520ec2e
caps.latest.revision: 14
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
# -H (Restrict Length of External Names)
Restricts the length of external names.  
  
## Syntax  
  
```  
/Hnumber  
```  
  
## Arguments  
 `number`  
 Specifies the maximum length of external names allowed in a program.  
  
## Remarks  
 By default, the length of external (public) names is 2,047 characters. This is true for C and C++ programs. Using **/H** can only decrease the maximum allowable length of identifiers, not increase it. A space between **/H** and `number` is optional.  
  
 If a program contains external names longer than `number`, the extra characters are ignored. If you compile a program without **/H** and if an identifier contains more than 2,047 characters, the compiler will generate [Fatal Error C1064](../VS_visualcpp/Fatal-Error-C1064.md).  
  
 The limit on length includes any compiler-created leading underscore (_) or at sign (@). These characters are part of the identifier and take a significant location.  
  
-   The compiler adds a leading underscore (_) to names modified by the `__cdecl` (default) and `__stdcall` calling conventions, and a leading at sign (@) to names modified by the `__fastcall` calling convention.  
  
-   The compiler appends argument size information to names modified by the `__fastcall` and `__stdcall` calling conventions, and adds type information to C++ names.  
  
 You may find **/H** useful:  
  
-   When you create mixed-language or portable programs.  
  
-   When you use tools that impose limits on the length of external identifiers.  
  
-   When you want to restrict the amount of space that symbols use in a debug build.  
  
 The following example shows how using **/H** can actually introduce errors if identifier lengths are limited too much:  
  
```  
// compiler_option_H.cpp  
// compile with: /H5  
// processor: x86  
// LNK2005 expected  
void func1(void);  
void func2(void);  
  
int main() { func1(); }  
  
void func1(void) {}  
void func2(void) {}  
```  
  
 You must also be careful when using the **/H** option because of predefined compiler identifiers. If the maximum identifier length is too small, certain predefined identifiers will be unresolved as well as certain library function calls. For example, if the `printf` function is used and the option **/H5** is specified at compile time, the symbol **_prin** will be created in order to reference `printf`, and this will not be found in the library.  
  
 Use of **/H** is incompatible with [/GL (Whole Program Optimization)](../VS_visualcpp/-GL--Whole-Program-Optimization-.md).  
  
 **/H** is deprecated; the maximum length limits have been increased and **/H** is no longer needed.  For more information, see [Deprecated Compiler Options in Visual C++ 2005](assetId:///aa59fce3-50b8-4f66-9aeb-ce09a7a84cce).  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [How to: Open Project Property Pages](../Topic/How%20to:%20Open%20Project%20Property%20Pages.md).  
  
2.  Click the **C/C++** folder.  
  
3.  Click the **Command Line** property page.  
  
4.  Type the compiler option in the **Additional Options** box.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions?qualifyHint=False>.  
  
## See Also  
 [Compiler Options](../VS_visualcpp/Compiler-Options.md)   
 [Setting Compiler Options](../VS_visualcpp/Setting-Compiler-Options.md)