---
title: "Compiler Error C3624 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3624"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3624"]
ms.assetid: eaac6a4f-eb11-4e4d-ab12-124ba995c5cf
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3624
'type': use of this type requires a reference to assembly 'assembly'  
  
 An assembly (reference) needed to compile your code was not specified; pass the assembly to the [#using](../../preprocessor/hash-using-directive-cpp.md) directive.  
  
## Example  
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
