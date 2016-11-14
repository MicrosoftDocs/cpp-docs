---
title: "Compiler Warning (level 3) C4390 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4390"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4390"
ms.assetid: c95c2f1b-9bce-4b1f-a80c-565d4cde0b1e
caps.latest.revision: 9
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
# Compiler Warning (level 3) C4390
';' : empty controlled statement found; is this the intent?  
  
 A semicolon was found after a control statement that contains no instructions.  
  
 If you get C4390 because of a macro, you should use the [warning](../../preprocessor/warning.md) pragma to disable C4390 in the module containing the macro.  
  
 The following sample generates C4390:  
  
```  
// C4390.cpp  
// compile with: /W3  
int main() {  
   int i = 0;  
   if (i);   // C4390  
      i++;  
}  
```