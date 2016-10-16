---
title: "Compiler Error C3734"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "error-reference"
f1_keywords: 
  - "C3734"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3734"
ms.assetid: 4e2afdcc-7da9-45a1-9c96-85f25e2986e8
caps.latest.revision: 11
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
# Compiler Error C3734
'class': a managed or WinRT class cannot be a coclass  
  
 The [coclass](../windows/coclass.md) attribute cannot be used with managed or WinRT classes.  
  
 The following sample generates C3734 and shows how to fix it:  
  
```  
// C3734.cpp  
// compile with: /clr /c  
[module(name="x")];  
  
[coclass]  
ref class CMyClass {   // C3734 remove the ref keyword to resolve  
};  
```  
  
 The following sample generates C3734 and shows how to fix it:  
  
```  
// C3734_b.cpp  
// compile with: /clr:oldSyntax /c  
[module(name="x")];  
  
[coclass]  
__gc class CMyClass {   // C3734 remove the __gc keyword to resolve  
};  
```