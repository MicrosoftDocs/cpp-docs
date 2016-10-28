---
title: "Compiler Error C3291"
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
  - "C3291"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3291"
ms.assetid: ed2e9f89-8dbc-4387-bc26-cc955e840858
caps.latest.revision: 5
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
# Compiler Error C3291
'default' : cannot be the name of a trivial property  
  
 A trivial property cannot be named `default`. See [property](../windows/property---c---component-extensions-.md) for more information.  
  
## Example  
 The following sample generates C3291.  
  
```  
// C3291.cpp  
// compile with: /clr /c  
ref struct C {  
   property System::String ^ default;   // C3291  
   property System::String ^ Default;   // OK  
};  
```