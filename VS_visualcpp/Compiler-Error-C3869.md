---
title: "Compiler Error C3869"
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
ms.assetid: 85b2ad72-95c1-4ed6-9761-6ef66c3802b7
caps.latest.revision: 3
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
# Compiler Error C3869
gcnew constraint is missing empty parameter list '()'  
  
 The `gcnew` special constraint was specified without the empty parameter list. See [Constraints on Generic Type Parameters (C++/CLI)](../VS_visualcpp/Constraints-on-Generic-Type-Parameters--C---CLI-.md) for more information.  
  
## Example  
 The following sample generates C3869.  
  
```  
// C3869.cpp  
// compile with: /c /clr  
using namespace System;  
generic <typename T>  
where T : gcnew   // C3869  
// try the following line instead  
// where T : gcnew()  
ref class List {};  
```