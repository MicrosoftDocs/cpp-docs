---
title: "Compiler Error C3116 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3116"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3116"
ms.assetid: 597463e1-a5cc-4ed3-a917-eae9a61d3312
caps.latest.revision: 6
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
# Compiler Error C3116
'storage specifier' : invalid storage class for interface method  
  
 You used `typedef`, `register`, or `static` as the storage class for an interface method. These storage classes are not permitted on interface members.  
  
 The following sample generates C3116:  
  
```  
// C3116.cpp  
__interface ImyInterface  
{  
   static void myFunc();   // C3116  
};  
```