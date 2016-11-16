---
title: "Compiler Error C3275 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3275"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3275"
ms.assetid: 5752680f-7d3e-4c42-ba9c-845e09d32e7a
caps.latest.revision: 8
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
# Compiler Error C3275
'enum member' : cannot use this symbol without qualifier  
  
 When using managed code and when two or more enumerations contain an identifier with the same name, you must explicitly qualify references to the identifier.  
  
 C3275 is only reachable using **/clr:oldSyntax**.  
  
 The following sample shows two situations in which C3275 could be generated:  
  
```  
// C3275.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
__value enum Jewelry {  
   necklace, brooch, pin, ring, earring  
   };  
  
__value enum Phone {  
   busy, ring, disconnect  
   };  
  
int main() {  
   Phone p = ring;   // C3275  
   // try the following line instead  
   // Phone p = Phone::ring;  
  
   Console::Out->Write(ring);   // C3275  
   // try the following line instead  
   // Console::Out->Write(Phone::ring);  
}  
```