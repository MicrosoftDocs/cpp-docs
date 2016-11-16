---
title: "Compiler Error C2054 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2054"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2054"
ms.assetid: 37f7c612-0d7d-4728-9e67-ac4160555f48
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
# Compiler Error C2054
expected '(' to follow 'identifier'  
  
 The function identifier is used in a context that requires trailing parentheses.  
  
 This error can be caused by omitting an equal sign (=) on a complex initialization.  
  
 The following sample generates C2054:  
  
```  
// C2054.c  
int array1[] { 1, 2, 3 };   // C2054, missing =  
```  
  
 Possible resolution:  
  
```  
// C2054b.c  
int main() {  
   int array2[] = { 1, 2, 3 };  
}  
```