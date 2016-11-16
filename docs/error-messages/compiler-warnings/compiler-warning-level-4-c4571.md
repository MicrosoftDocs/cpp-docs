---
title: "Compiler Warning (level 4) C4571 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4571"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4571"
ms.assetid: 07aa17bd-b15c-4266-824c-57cc445e8edd
caps.latest.revision: 12
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
# Compiler Warning (level 4) C4571
Informational: catch(...) semantics changed since Visual C++ 7.1; structured exceptions (SEH) are no longer caught  
  
 C4571 is generated for every catch(...) block when compiling with **/EHs**.  
  
 When compiling with **/EHs**, a catch(...) block will not catch a structured exception (divide by zero, null pointer, for example); a catch(...) block will only catch explicitly-thrown, C++ exceptions.  For more information, see [Exception Handling](../../cpp/exception-handling-in-visual-cpp.md).  
  
 This warning is off by default.  Turn this warning on to ensure that when you compile with **/EHs** your catch (...) blocks do not intend to catch structured exceptions.  See [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md) for more information.  
  
 You can resolve C4571 in one of the following ways,  
  
-   Compile with **/EHa** if you still want your catch(...) blocks to catch structured exceptions.  
  
-   Do not enable C4571 if you do not want your catch(...) blocks to catch structured exceptions, but you still want to use catch(...) blocks.  You can still catch structured exceptions using the structured exception handling keywords (**__try**, **__except**, and **__finally**).  But remember, when compiled **/EHs** destructors will only be called when a C++ exception is thrown, not when an SEH exception occurs.  
  
-   Replace catch(...) block with catch blocks for specific C++ exceptions, and optionally, add structured exception handling around the C++ exception handling (**__try**, **__except**, and **__finally**).  See [Structured Exception Handling (C/C++)](../../cpp/structured-exception-handling-c-cpp.md) for more information.  
  
 See [/EH (Exception Handling Model)](../../build/reference/eh-exception-handling-model.md) for more information.  
  
## Example  
 The following sample generates C4571.  
  
```  
// C4571.cpp  
// compile with: /EHs /W4 /c  
#pragma warning(default : 4571)  
int main() {  
   try {  
      int i = 0, j = 1;  
      j /= i;   // this will throw a SE (divide by zero)  
   }  
   catch(...) {}   // C4571 warning  
}  
```