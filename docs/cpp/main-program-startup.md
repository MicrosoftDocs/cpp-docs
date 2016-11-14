---
title: "main: Program Startup | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc.main.startup"
  - "_tmain"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "program startup [C++]"
  - "entry points, program"
  - "wmain function"
  - "_tmain function"
  - "startup code, main function"
  - "main function, program startup"
ms.assetid: f9581cd6-93f7-4bcd-99ec-d07c3c107dd4
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
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
# main: Program Startup
A special function named `main` is the starting point of execution for all C and [!INCLUDE[TLA#tla_cpp](../cpp/includes/tlasharptla_cpp_md.md)] programs. If you are writing code that adheres to the [!INCLUDE[TLA#tla_unicode](../atl-mfc-shared/reference/includes/tlasharptla_unicode_md.md)] programming model, you can use `wmain`, which is the wide-character version of `main`.  
  
 The `main` function is not predefined by the compiler. It must be supplied in the program text.  
  
 The declaration syntax for `main` is  
  
```  
int main();  
```  
  
 or, optionally,  
  
```  
int main(int argc, char *argv[], char *envp[]);  
```  
  
## Microsoft Specific  
 The declaration syntax for `wmain` is as follows:  
  
```  
int wmain( );  
```  
  
 or, optionally,  
  
```  
int wmain(int argc, wchar_t *argv[], wchar_t *envp[]);  
```  
  
 You can also use `_tmain`, which is defined in TCHAR.h. `_tmain` resolves to `main` unless _UNICODE is defined. In that case, `_tmain` resolves to `wmain`.  
  
 Alternatively, the `main` and `wmain` functions can be declared as returning `void` (no return value). If you declare `main` or `wmain` as returning `void`, you cannot return an exit code to the parent process or operating system by using a [return](../cpp/return-statement-in-program-termination-cpp.md) statement. To return an exit code when `main` or `wmain` is declared as `void`, you must use the [exit](../cpp/exit-function.md) function.  
  
## END Microsoft Specific  
 The types for `argc` and `argv` are defined by the language. The names `argc`, `argv`, and `envp` are traditional, but are not required by the compiler. For more information and an example, see [Argument Definitions](../cpp/argument-definitions.md).  
  
## See Also  
 [Keywords](../cpp/keywords-cpp.md)   
 [Using wmain Instead of main](../cpp/using-wmain-instead-of-main.md)   
 [main Function Restrictions](../cpp/main-function-restrictions.md)