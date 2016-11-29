---
title: "Compiler Error C3255 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3255"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3255"
ms.assetid: 877ffca2-fd92-44b6-9060-6091b928b1c1
caps.latest.revision: 12
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
# Compiler Error C3255
'value type' : cannot dynamically allocate this value type object on native heap  
  
 Instances of a value type (see [Classes and Structs](../../windows/classes-and-structs-cpp-component-extensions.md)) that contain managed members can be created on the stack but not on the heap.  
  
 The following sample generates C3255:  
  
```  
// C3255.cpp  
// compile with: /clr  
using namespace System;  
value struct V {  
   Object^ o;  
};  
  
value struct V2 {  
   int i;  
};  
  
int main() {  
   V* pv = new V;   // C3255  
   V2* pv2 = new V2;  
   V v2;  
}  
```  
