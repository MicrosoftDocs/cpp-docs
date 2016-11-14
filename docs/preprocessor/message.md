---
title: "message | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "message_CPP"
  - "vc-pragma.message"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "message pragma"
  - "pragmas, message"
ms.assetid: 67414f25-ed47-4079-a5dc-21d9d1a39754
caps.latest.revision: 7
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
# message
Sends a string literal to the standard output without terminating the compilation.  
  
## Syntax  
  
```  
  
#pragma message( messagestring )  
```  
  
## Remarks  
 A typical use of the **message** pragma is to display informational messages at compile time.  
  
 The *messagestring* parameter can be a macro that expands to a string literal, and you can concatenate such macros with string literals in any combination.  
  
 If you use a predefined macro in the **message** pragma, the macro should return a string, else you will have to convert the output of the macro to a string.  
  
 The following code fragment uses the **message** pragma to display messages during compilation:  
  
```  
// pragma_directives_message1.cpp  
// compile with: /LD  
#if _M_IX86 >= 500  
#pragma message("_M_IX86 >= 500")  
#endif  
  
#pragma message("")  
  
#pragma message( "Compiling " __FILE__ )   
#pragma message( "Last modified on " __TIMESTAMP__ )  
  
#pragma message("")  
  
// with line number  
#define STRING2(x) #x  
#define STRING(x) STRING2(x)  
  
#pragma message (__FILE__ "[" STRING(__LINE__) "]: test")  
  
#pragma message("")  
```  
  
## See Also  
 [Pragma Directives and the __Pragma Keyword](../preprocessor/pragma-directives-and-the-pragma-keyword.md)