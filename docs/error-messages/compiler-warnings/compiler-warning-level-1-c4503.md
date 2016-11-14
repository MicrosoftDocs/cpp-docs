---
title: "Compiler Warning (level 1) C4503 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4503"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4503"
ms.assetid: 7c5a98ae-5b6d-41d8-b881-12d3ffd5e392
caps.latest.revision: 8
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
# Compiler Warning (level 1) C4503
'identifier' : decorated name length exceeded, name was truncated  
  
 The decorated name was longer than the compiler limit (4096), and was truncated. To avoid this warning and the truncation, reduce the number of arguments or name length of identifiers used.  
  
 One situation where this warning will be issued is when your code contains templates specialized on templates repeatedly.  For example, a map of maps (from the Standard C++ Library).  In this situation, you can make your typedefs a type (struct, for example) that contains the map.  
  
 You might, however, decide to not restructure your code.  It is possible to ship an application that generates C4503, but if you get link time errors on a truncated symbol, it will be more difficult to determine the type of the symbol in the error.  Debugging will also be more difficult; the debugger will also have difficultly mapping symbol name to type name.  The correctness of the program, however, is unaffected by the truncated name.  
  
 The following sample generates C4503:  
  
```  
// C4503.cpp  
// compile with: /W1 /EHsc /c  
// C4503 expected  
#include <string>  
#include <map>  
  
class Field{};  
  
typedef std::map<std::string, Field> Screen;  
typedef std::map<std::string, Screen> WebApp;  
typedef std::map<std::string, WebApp> WebAppTest;  
typedef std::map<std::string, WebAppTest> Hello;  
Hello MyWAT;  
```  
  
 The following sample shows one way to rewrite your code to resolve C4503:  
  
```  
// C4503b.cpp  
// compile with: /W1 /EHsc /c  
#include <string>  
#include <map>  
  
class Field{};  
struct Screen2 {  
   std::map<std::string, Field> Element;  
};  
  
struct WebApp2 {  
   std::map<std::string, Screen2> Element;  
};  
  
struct WebAppTest2 {  
   std::map<std::string, WebApp2> Element;  
};  
  
struct Hello2 {  
   std::map<std::string, WebAppTest2> Element;  
};  
  
Hello2 MyWAT2;  
```