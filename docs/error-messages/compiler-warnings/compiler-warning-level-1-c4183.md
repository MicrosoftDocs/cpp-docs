---
title: "Compiler Warning (level 1) C4183 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4183"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4183"
ms.assetid: dc48312c-4b34-44dd-80ff-eb5f11d5ca47
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
# Compiler Warning (level 1) C4183
'identifier': missing return type; assumed to be a member function returning 'int'  
  
 The inline definition of a member function in a class or a structure does not have a return type. This member function is assumed to have a default return type of `int`.  
  
 The following sample generates C4183:  
  
```  
// C4183.cpp  
// compile with: /W1 /c  
#pragma warning(disable : 4430)  
class MyClass1;  
class MyClass2 {  
   MyClass1() {};   // C4183  
};  
```