---
title: "Compiler Error C3903 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3903"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3903"
ms.assetid: cf47d7ad-a3bd-4f75-a253-71586e7a3be6
caps.latest.revision: 9
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
# Compiler Error C3903
'property': does not have set or get method  
  
 A property must have at least a `get` or a `set` method. For more information, see [property](../../windows/property-cpp-component-extensions.md).  
  
 The following sample generates C3903:  
  
```  
// C3903.cpp  
// compile with: /clr  
ref class X {  
   property int P {  
      void f(int){}  
      // Add one or both of the following lines.  
      // void set(int){}  
      // int get(){return 0;}  
   };   // C3903  
  
   property double Q[,,,,] {  
      void f(){}  
      // Add one or both of the following lines.  
      // void set(int, char, int, char, double, double){}  
      // double get(int, char, int, char, double){return 1.1;}  
   }   // C3903  
};  
```