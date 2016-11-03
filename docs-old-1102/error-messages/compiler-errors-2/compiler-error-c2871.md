---
title: "Compiler Error C2871"
ms.custom: ""
ms.date: "10/28/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2871"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2871"
ms.assetid: 44aeb84d-61f0-45e0-8dad-22a3cd46b7f8
caps.latest.revision: 10
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
# Compiler Error C2871
'name' : a namespace with this name does not exist  
  
 This error will occur when you pass an identifier that is not a namespace to a [using](../Topic/using%20Directive%20\(C%23%20Reference\).md) directive.  
  
 The following sample generates C2871:  
  
```  
// C2871.cpp  
// compile with: /c  
using namespace d;   // C2871 d is not a namespace  
using namespace System;   // OK  
```