---
title: "Compiler Error C3226"
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
  - "C3226"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3226"
ms.assetid: 636106ca-6f4e-4303-a6a0-8803221ec67d
caps.latest.revision: 10
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
# Compiler Error C3226
A template declaration is not allowed inside a generic declaration  
  
 Use a generic declaration inside a generic class.  
  
 The following sample generates C3226:  
  
```  
// C3226.cpp  
// compile with: /clr  
generic <class T>  
ref class C {  
   template <class T1>   // C3226  
   ref struct S1 {};  
};  
```  
  
 The following sample demonstrates a possible resolution:  
  
```  
// C3226b.cpp  
// compile with: /clr /c  
generic <class T>  
ref class C {  
   generic <class T1>  
   ref struct S1 {};  
};  
```