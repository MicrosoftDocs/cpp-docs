---
title: "Compiler Error C3282"
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
  - "C3282"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3282"
ms.assetid: bac2ac89-c360-4c24-bb81-c20c62ece9ba
caps.latest.revision: 5
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
# Compiler Error C3282
generic parameter lists can only appear on managed or WinRTclasses, structs, or functions  
  
 A generic parameter list was used incorrectly.  For more information, see [Generics](../windows/generics---c---component-extensions-.md).  
  
## Example  
 The following sample generates C3282 and shows how to fix it.  
  
```  
// C3282.cpp  
// compile with: /clr /c  
generic <typename T> int x;   // C3282  
  
ref struct GC0 {  
   generic <typename T> int x;   // C3282  
};  
  
// OK  
generic <typename T>  
ref class M {};  
```