---
title: "Compiler Warning (level 4) C4295 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4295"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4295"
ms.assetid: 20dbff85-9f62-4ca3-8fe9-079d4512006d
caps.latest.revision: 5
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
# Compiler Warning (level 4) C4295
**'**   
 ***array* ' : array is too small to include a terminating null character**  
  
 An array was initialized but the last character in the array is not a null; accessing the array may produce unexpected results.  
  
 The following sample generates C4295:  
  
```  
// C4295.c  
// compile with: /W4  
  
int main() {  
   char a[3] = "abc";   // C4295  
}  
```