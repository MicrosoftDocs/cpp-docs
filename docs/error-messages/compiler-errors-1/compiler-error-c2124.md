---
title: "Compiler Error C2124 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C2124"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2124"
ms.assetid: 93392aaa-5582-4d68-8cc5-bd9c62a0ae7e
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
# Compiler Error C2124
divide or mod by zero  
  
 A constant expression has a zero denominator. To resolve the error, do not divide by zero.  
  
 The following sample generates C2124:  
  
```  
// C2124.cpp  
int main() {  
  int i = 1 / 0;   // C2124  do not divide by zero  
  int i2 = 12 / 2;   // OK  
}  
```