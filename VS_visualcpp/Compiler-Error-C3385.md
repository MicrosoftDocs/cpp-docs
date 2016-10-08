---
title: "Compiler Error C3385"
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
ms.assetid: 5f1838c1-986e-47db-8dbc-e06976b83cf3
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
# Compiler Error C3385
'class::function' : a function that has a DllImport Custom attribute cannot return an instance of a class  
  
 A function defined as being in a .dll file specified with the `DllImport` attribute cannot return an instance of a class.  
  
 The following sample generates C3385:  
  
```  
// C3385.cpp  
// compile with: /clr /c  
using namespace System;  
using namespace System::Runtime::InteropServices;  
  
struct SomeStruct1 {};  
  
public ref struct Wrap {  
   [ DllImport("somedll.dll", CharSet=CharSet::Unicode) ]  
   static SomeStruct1 f1([In, Out] SomeStruct1 *pS);   // C3385  
};  
```  
  
 The following sample generates C3385:  
  
```  
// C3385_2.cpp  
// compile with: /clr:oldSyntax /c  
  
using namespace System;  
using namespace System::Runtime::InteropServices;  
  
struct SomeStruct1 {};  
  
public __gc struct Wrap {  
   [ DllImport("somedll.dll", CharSet=CharSet::Unicode) ]  
   static SomeStruct1 f1([In, Out] SomeStruct1 *pS);   // C3385  
};  
```