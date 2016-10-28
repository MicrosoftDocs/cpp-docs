---
title: "Compiler Error C2159"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "C2159"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2159"
ms.assetid: 925a2cbd-43c9-45ee-a373-84004350b380
caps.latest.revision: 8
ms.author: "corob"
manager: "douge"
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
# Compiler Error C2159
more than one storage class specified  
  
 A declaration contains more than one storage class.  
  
 The following sample generates C2159:  
  
```  
// C2159.cpp  
// compile with: /c  
static int i;   // OK  
extern static int i;   // C2159  
```