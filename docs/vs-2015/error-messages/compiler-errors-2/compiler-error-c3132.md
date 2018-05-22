---
title: "Compiler Error C3132 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3132"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3132"
ms.assetid: d54a3d12-336a-4ed0-ad4e-43cddac33b5e
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3132
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3132](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3132).  
  
  
function-parameter' : parameter arrays can only be applied to a formal argument of type 'single-dimensional managed array'  
  
 The [ParamArray](https://msdn.microsoft.com/library/system.paramarrayattribute.aspx) attribute was applied to a parameter that was not a single-dimension array.  
  
 The following sample generates C3132:  
  
```  
// C3132.cpp  
// compile with: /clr /c  
using namespace System;  
void f( [ParamArray] Int32[,] );   // C3132  
void g( [ParamArray] Int32[] );   // C3132  
  
void h( [ParamArray] array<Char ^> ^ MyArray );   // OK  
  
```

