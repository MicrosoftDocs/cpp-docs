---
title: "Compiler Error C2032 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2032"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2032"
ms.assetid: 625d7c83-70b6-42c2-a558-81fbc0026324
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
# Compiler Error C2032
'identifier' : function cannot be member of struct/union 'structorunion'  
  
 The structure or union has a member function, which is allowed in C++ but not in C. To resolve the error, either compile as a C++ program or remove the member function.  
  
 The following sample generates C2032:  
  
```  
// C2032.c  
struct z {  
   int i;  
   void func();   // C2032  
};  
```  
  
 Possible resolution:  
  
```  
// C2032b.c  
// compile with: /c  
struct z {  
   int i;  
};  
```