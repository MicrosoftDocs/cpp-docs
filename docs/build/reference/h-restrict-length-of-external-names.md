---
title: "-H (Restrict Length of External Names) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/h"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "public name length"
  - "/H compiler option [C++]"
  - "H compiler option [C++]"
  - "external names"
  - "-H compiler option [C++]"
ms.assetid: de701dd3-ed04-4c88-8195-960d2520ec2e
caps.latest.revision: 14
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
# /H (Restrict Length of External Names)
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
  
 If a program contains external names longer than `number`, the extra characters are ignored. If you compile a program without **/H** and if an identifier contains more than 2,047 characters, the compiler will generate [Fatal Error C1064](../../error-messages/compiler-errors-1/fatal-error-c1064.md).  
  
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
  
 Use of **/H** is incompatible with [/GL (Whole Program Optimization)](../../build/reference/gl-whole-program-optimization.md).  
  
 **/H** is deprecated; the maximum length limits have been increased and **/H** is no longer needed.  For more information, see [Deprecated Compiler Options in Visual C++ 2005](http://msdn.microsoft.com/en-us/aa59fce3-50b8-4f66-9aeb-ce09a7a84cce).  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Click the **C/C++** folder.  
  
3.  Click the **Command Line** property page.  
  
4.  Type the compiler option in the **Additional Options** box.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## See Also  
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)