---
title: "Compiler Error C3873 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3873"
helpviewer_keywords: 
  - "C3873"
ms.assetid: e68fd3be-2391-492b-ac3f-d2428901b2e9
caps.latest.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Compiler Error C3873
'char': this character is not allowed as a first character of an identifier  
  
 The C++ compiler follows the C++11 standard on characters allowed in an identifier. Only certain ranges of characters and universal character names are allowed in an identifier. Additional restrictions apply to the initial character of an identifier. For more information and a list of allowed characters and universal character name ranges, see [Identifiers](../../cpp/identifiers-cpp.md).  
  
 The range of characters allowed in an identifier is less restrictive when compiling C++/CLI code. Identifiers in code compiled by using /clr should follow  [Standard ECMA-335: Common Language Infrastructure (CLI)](http://www.ecma-international.org/publications/standards/Ecma-335.htm).  
  
 The following sample generates C3873:  
  
```  
// C3873.cpp  
int main() {  
   int \u036F_abc;   // C3873, not in allowed range for initial character  
   int abc_\u036F;   // OK, in allowed range for non-initial character  
}  
```