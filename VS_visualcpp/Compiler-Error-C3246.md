---
title: "Compiler Error C3246"
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
ms.assetid: ad85224a-e540-479b-a5eb-a3bc3964c30b
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
# Compiler Error C3246
'class' : cannot inherit from 'type' as it has been declared as 'sealed'  
  
 A class that is marked as [sealed](../Topic/__sealed.md) cannot be the base class for any other classes.  
  
 The following sample generates C3246:  
  
```  
// C3246_2.cpp  
// compile with: /clr /LD  
ref class X sealed {};  
  
ref class Y : public X {}; // C3246  
```  
  
 The following sample generates C3246:  
  
```  
// C3246.cpp  
// compile with: /clr:oldSyntax /LD  
#using <mscorlib.dll>  
__sealed __gc class X {};  
  
__gc class Y : public X {}; // C3246  
```