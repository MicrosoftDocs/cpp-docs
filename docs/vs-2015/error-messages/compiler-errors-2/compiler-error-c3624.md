---
title: "Compiler Error C3624 | Microsoft Docs"
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
  - "C3624"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3624"
ms.assetid: eaac6a4f-eb11-4e4d-ab12-124ba995c5cf
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3624
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3624](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3624).  
  
  
type': use of this type requires a reference to assembly 'assembly'  
  
 An assembly (reference) needed to compile your code was not specified; pass the assembly to the [#using](../../preprocessor/hash-using-directive-cpp.md) directive.  
  
 The following sample generates C3624:  
  
```  
// C3624.cpp  
// compile with: /clr /c  
#using <System.Windows.Forms.dll>  
  
// Uncomment the following 2 lines to resolve.  
// #using <System.dll>  
// #using <System.Drawing.dll>  
  
using namespace System;  
  
public ref class MyForm : public Windows::Forms::Form {};   // C3624  
```  
  
 The following sample generates C3624:  
  
```  
// C3624_b.cpp  
// compile with: /clr:oldSyntax /c  
#using <System.Windows.Forms.dll>  
  
// Uncomment the following 2 lines to resolve.  
// #using <System.dll>  
// #using <System.Drawing.dll>  
  
using namespace System;  
  
public __gc class MyForm : public Windows::Forms::Form {};   // C3624  
```

