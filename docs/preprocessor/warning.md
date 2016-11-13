---
title: "warning | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "warning_CPP"
  - "vc-pragma.warning"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "pragmas, warning"
  - "push pragma warning"
  - "pop warning pragma"
  - "warning pragma"
ms.assetid: 8e9a0dec-e223-4657-b21d-5417ebe29cc8
caps.latest.revision: 20
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
# warning
Enables selective modification of the behavior of compiler warning messages.  
  
## Syntax  
  
```  
  
      #pragma warning(   
      warning-specifier  
       :   
      warning-number-list [; warning-specifier : warning-number-list...] )  
#pragma warning( push[ ,n ] )  
#pragma warning( pop )  
```  
  
## Remarks  
 The following warning-specifier parameters are available.  
  
|warning-specifier|Meaning|  
|------------------------|-------------|  
|`1, 2, 3, 4`|Apply the given level to the specified warning(s). This also turns on a specified warning that is off by default.|  
|`default`|Reset warning behavior to its default value. This also turns on a specified warning that is off by default. The warning will be generated at its default, documented, level.<br /><br /> For more information, see [Compiler Warnings That Are Off by Default](../preprocessor/compiler-warnings-that-are-off-by-default.md).|  
|`disable`|Do not issue the specified warning message(s).|  
|`error`|Report the specified warnings as errors.|  
|`once`|Display the specified message(s) only one time.|  
|`suppress`|Pushes the current state of the pragma on the stack, disables the specified warning for the next line, and then pops the warning stack so that the pragma state is reset.|  
  
 The following code statement illustrates that a `warning-number-list` parameter can contain multiple warning numbers, and that multiple `warning-specifier` parameters can be specified in the same pragma directive.  
  
```  
#pragma warning( disable : 4507 34; once : 4385; error : 164 )  
```  
  
 This is functionally equivalent to the following code.  
  
```  
// Disable warning messages 4507 and 4034.  
#pragma warning( disable : 4507 34 )  
  
// Issue warning 4385 only once.  
#pragma warning( once : 4385 )  
  
// Report warning 4164 as an error.  
#pragma warning( error : 164 )  
```  
  
 The compiler adds 4000 to any warning number that is between 0 and 999.  
  
 For warning numbers in the range 4700-4999, which are the ones associated with code generation, the state of the warning in effect when the compiler encounters the open curly brace of a function will be in effect for the rest of the function. Using the `warning` pragma in the function to change the state of a warning that has a number larger than 4699 will only take effect after the end of the function. The following example shows the correct placement of `warning` pragmas to disable a code-generation warning message, and then to restore it.  
  
```  
// pragma_warning.cpp  
// compile with: /W1  
#pragma warning(disable:4700)  
void Test() {  
   int x;  
   int y = x;   // no C4700 here  
   #pragma warning(default:4700)   // C4700 enabled after Test ends  
}  
  
int main() {  
   int x;  
   int y = x;   // C4700  
}  
```  
  
 Notice that throughout a function body, the last setting of the `warning` pragma will be in effect for the whole function.  
  
## Push and Pop  
 The `warning` pragma also supports the following syntax.  
  
 `#pragma warning(` `push` [ `,``n` ] `)`  
  
 `#pragma warning(` `pop )`  
  
 Where `n` represents a warning level (1 through 4).  
  
 The pragma `warning( push )` stores the current warning state for every warning. The pragma `warning( push,` `n``)` stores the current state for every warning and sets the global warning level to `n`.  
  
 The pragma `warning( pop )` pops the last warning state pushed onto the stack. Any changes that you made to the warning state between `push` and `pop` are undone. Consider this example:  
  
```  
#pragma warning( push )  
#pragma warning( disable : 4705 )  
#pragma warning( disable : 4706 )  
#pragma warning( disable : 4707 )  
// Some code  
#pragma warning( pop )   
```  
  
 At the end of this code, `pop` restores the state of every warning (includes 4705, 4706, and 4707) to what it was at the start of the code.  
  
 When you write header files, you can use `push` and `pop` to guarantee that warning-state changes made by a user do not prevent the headers from compiling correctly. Use `push` at the start of the header and `pop` at the end. For example, if you have a header that does not compile cleanly at warning level 4, the following code would change the warning level to 3 and then restore the original warning level at the end of the header.  
  
```  
#pragma warning( push, 3 )  
// Declarations/definitions  
#pragma warning( pop )   
```  
  
 For more information about compiler options that help you suppress warnings, see [/FI](../build/reference/fi-name-forced-include-file.md) and [/w](../build/reference/compiler-option-warning-level.md).  
  
## See Also  
 [Pragma Directives and the __Pragma Keyword](../preprocessor/pragma-directives-and-the-pragma-keyword.md)