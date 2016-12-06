---
title: "Stringizing Operator (#) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "#"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "preprocessor, operators"
  - "arguments [C++], converting to strings"
  - "stringizing operator"
  - "preprocessor"
  - "string literals, converting macro parameters to"
  - "macros [C++], converting parameters to strings"
  - "# preprocessor operator"
ms.assetid: 1175dd19-4538-43b3-ad97-a008ab80e7b1
caps.latest.revision: 16
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
# Stringizing Operator (#)
The number-sign or "stringizing" operator (**#**) converts macro parameters to string literals without expanding the parameter definition. It is used only with macros that take arguments. If it precedes a formal parameter in the macro definition, the actual argument passed by the macro invocation is enclosed in quotation marks and treated as a string literal. The string literal then replaces each occurrence of a combination of the stringizing operator and formal parameter within the macro definition.  
  
> [!NOTE]
>  The Microsoft C (versions 6.0 and earlier) extension to the ANSI C standard that previously expanded macro formal arguments appearing inside string literals and character constants is no longer supported. Code that relied on this extension should be rewritten using the stringizing (**#**) operator.  
  
White space preceding the first token of the actual argument and following the last token of the actual argument is ignored. Any white space between the tokens in the actual argument is reduced to a single white space in the resulting string literal. Thus, if a comment occurs between two tokens in the actual argument, it is reduced to a single white space. The resulting string literal is automatically concatenated with any adjacent string literals from which it is separated only by white space.  
  
Further, if a character contained in the argument usually requires an escape sequence when used in a string literal (for example, the quotation mark (**"**) or backslash (**\\**) character), the necessary escape backslash is automatically inserted before the character.  
  
The Visual C++ stringizing operator does not behave correctly when it is used with strings that include escape sequences. In this situation, the compiler generates [Compiler Error C2017](../error-messages/compiler-errors-1/compiler-error-c2017.md).  
  
## Example  
The following example shows a macro definition that includes the stringizing operator and a main function that invokes the macro:  
  
Such invocations would be expanded during preprocessing, producing the following code:  
  
```cpp  
int main() {  
   printf_s( "In quotes in the printf function call\n" "\n" );  
   printf_s( "\"In quotes when printed to the screen\"\n" "\n" );  
   printf_s( "\"This: \\\" prints an escaped double quote\"" "\n" );  
}  
```  
  
```cpp  
// stringizer.cpp  
#include <stdio.h>  
#define stringer( x ) printf_s( #x "\n" )  
int main() {  
   stringer( In quotes in the printf function call );   
   stringer( "In quotes when printed to the screen" );     
   stringer( "This: \"  prints an escaped double quote" );  
}  
```  
  
```Output  
In quotes in the printf function call  
"In quotes when printed to the screen"  
"This: \"  prints an escaped double quote"  
```  
  
## Example  
The following sample shows how you can expand a macro parameter:  
  
```cpp  
// stringizer_2.cpp  
// compile with: /E  
#define F abc  
#define B def  
#define FB(arg) #arg  
#define FB1(arg) FB(arg)  
FB(F B)  
FB1(F B)  
```  
  
## See Also  
 [Preprocessor Operators](../preprocessor/preprocessor-operators.md)