---
title: "Compiler Warning (level 1) C4678"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-csharp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 0c588f34-595d-4e5c-9470-8723fca2cc06
caps.latest.revision: 10
manager: douge
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# Compiler Warning (level 1) C4678
base class 'base_type' is less accessible than 'derived_type'  
  
 A public type derives from a private type. If the public type is instantiated in a referenced assembly, members of the private base type will not be accessible.  
  
 C4678 is only reachable using **/clr:oldSyntax**. It is an error, using **/clr**, to have a base class that is less accessible that its derived class.  
  
 The following sample generates C4678:  
  
```  
// C4678.cpp  
// compile with: /clr:oldSyntax /LD /W1  
#using <mscorlib.dll>  
private __gc struct privateG {  
// try the following line instead  
// public __gc struct privateG {  
public:  
   int i;  
};  
  
public __gc struct V: public privateG {   // C4678  
public:  
   int j;  
};  
```