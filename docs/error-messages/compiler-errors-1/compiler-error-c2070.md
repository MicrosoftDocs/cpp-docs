---
title: "Compiler Error C2070 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2070"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2070"
ms.assetid: 4c8dea63-1227-4aba-be26-2462537f86fb
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
# Compiler Error C2070
'type': illegal sizeof operand  
  
 The [sizeof](../../cpp/sizeof-operator.md) operator requires an expression or type name.  
  
 The following sample generates C2070:  
  
```  
// C2070.cpp  
void func() {}  
int main() {  
   int a;  
   a = sizeof(func);   // C2070  
}  
```  
  
 Possible resolution:  
  
```  
// C2070b.cpp  
void func() {}  
int main() {  
   int a;  
   a = sizeof(a);  
}  
```