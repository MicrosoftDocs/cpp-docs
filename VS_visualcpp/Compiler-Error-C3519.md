---
title: "Compiler Error C3519"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: error-reference
ms.assetid: ca24b2bc-7e90-4448-ae84-3fedddf9bca7
caps.latest.revision: 8
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Compiler Error C3519
'invalid_param' : invalid parameter to embedded_idl attribute  
  
 A parameter was passed to the `embedded_idl` attribute of [#import](../VS_visualcpp/#import-Directive--C---.md), but the compiler did not recognize the parameter.  
  
 The only parameters that are allowed for `embedded_idl` are `emitidl` and `no_emitidl`.  
  
 The following sample generates C3519:  
  
```  
// C3519.cpp  
// compile with: /LD  
[module(name="MyLib2")];  
#import "C:\testdir\bin\importlib.tlb" embedded_idl("no_emitidcl")     
// C3519  
#import "C:\testdir\bin\importlib.tlb" embedded_idl("no_emitidl")     
// OK  
```