---
title: "-D (Preprocessor Definitions)"
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
H1: /D (Preprocessor Definitions)
ms.assetid: b53fdda7-8da1-474f-8811-ba7cdcc66dba
caps.latest.revision: 20
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
# -D (Preprocessor Definitions)
Defines a preprocessing symbol for a source file.  
  
## Syntax  
  
```  
/Dname[= | # [{string | number}] ]  
```  
  
## Remarks  
 You can use this symbol together with `#if` or `#ifdef` to compile source code conditionally. The symbol definition remains in effect until it is redefined in the code or is undefined in the code by the `#undef` directive.  
  
 **/D** has the same effect as the `#define` directive at the beginning of a source code file, except that **/D** strips quotation marks on the command line and `#define` retains them.  
  
 By default, the value associated with a symbol is 1. For example, **/D**`name` is equivalent to **/D**`name`**=1**. In the example at the end of this article, the definition of **TEST** is shown to print `1`.  
  
 Compiling by using **/D**`name`**=** causes the symbol to have no associated value. Although the symbol can still be used to conditionally compile code, it otherwise evaluates to nothing. In the example, if you compile by using **/DTEST=**, an error occurs. This behavior resembles the use of `#define` with or without a value.  
  
 This command defines the symbol DEBUG in TEST.c:  
  
 **CL /DDEBUG  TEST.C**  
  
 This command removes all occurrences of the keyword `__far` in TEST.c:  
  
 **CL /D__far=  TEST.C**  
  
 The **CL** environment variable cannot be set to a string that contains the equal sign. To use **/D** together with the **CL** environment variable, you must specify the number sign instead of the equal sign:  
  
```  
SET CL=/DTEST#0  
```  
  
 When you define a preprocessing symbol at the command prompt, consider both compiler parsing rules and shell parsing rules. For example, to define a percent-sign preprocessing symbol (%) in your program, specify two percent-sign characters (%%) at the command prompt: If you specify only one, a parsing error is emitted.  
  
```  
CL /DTEST=%% TEST.C  
```  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project **Property Pages** dialog box. For more information, see [How to: Open Project Property Pages](../Topic/How%20to:%20Open%20Project%20Property%20Pages.md).  
  
2.  In the left pane, select **Configuration Properties**, **C/C++**, **Preprocessor**.  
  
3.  In the right pane, in the right-hand column of the **Preprocessor Definitions** property, open the drop-down menu and choose **Edit**.  
  
4.  In the **Preprocessor Definitions** dialog box, add (one per line), modify, or delete one or more definitions. Choose **OK** to save your changes.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.PreprocessorDefinitions?qualifyHint=False>.  
  
## Example  
  
```  
// cpp_D_compiler_option.cpp  
// compile with: /DTEST  
#include <stdio.h>  
  
int main( )  
{  
    #ifdef TEST  
        printf_s("TEST defined %d\n", TEST);  
    #else  
        printf_s("TEST not defined\n");  
    #endif  
}  
```  
  
 **TEST defined 1**   
## See Also  
 [Compiler Options](../VS_visualcpp/Compiler-Options.md)   
 [Setting Compiler Options](../VS_visualcpp/Setting-Compiler-Options.md)   
 [/U, /u (Undefine Symbols)](../VS_visualcpp/-U---u--Undefine-Symbols-.md)   
 [#undef Directive (C/C++)](../VS_visualcpp/#undef-Directive--C-C---.md)   
 [#define Directive (C/C++)](../VS_visualcpp/#define-Directive--C-C---.md)