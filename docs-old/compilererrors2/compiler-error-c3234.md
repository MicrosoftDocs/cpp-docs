---
title: "Compiler Error C3234"
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
  - "C3234"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3234"
ms.assetid: ebefc15a-e40d-424b-a3dd-d7e185d0ed7b
caps.latest.revision: 12
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
# Compiler Error C3234
a generic class may not derive from a generic type parameter  
  
 A generic class cannot inherit from a generic type parameter.  
  
## Example  
 The following sample generates C3234.  
  
```  
// C3234.cpp  
// compile with: /clr /c  
generic <class T>  
public ref class C : T {};   // C3234  
// try the following line instead  
// public ref class C {};  
```