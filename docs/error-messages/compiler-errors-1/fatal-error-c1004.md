---
title: "Fatal Error C1004 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C1004"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1004"
ms.assetid: dbe034b0-6eb0-41b4-a50c-2fccf9e78ad4
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
# Fatal Error C1004
unexpected end of file found  
  
 The compiler reached the end of a source file without resolving a construct. The code may be missing one of the following elements:  
  
-   A closing brace  
  
-   A closing parenthesis  
  
-   A closing comment marker (*/)  
  
-   A semicolon  
  
 To resolve this error, check for the following:  
  
-   The default disk drive has insufficient space for temporary files, which require about twice as much space as the source file.  
  
-   An `#if` directive that evaluates to false lacks a closing `#endif` directive.  
  
-   A source file does not end with a carriage return and line feed.  
  
 The following sample generates C1004:  
  
```  
// C1004.cpp  
#if TEST  
int main() {}  
// C1004  
```  
  
 Possible resolution:  
  
```  
// C1004b.cpp  
#if TEST  
#endif  
  
int main() {}  
```