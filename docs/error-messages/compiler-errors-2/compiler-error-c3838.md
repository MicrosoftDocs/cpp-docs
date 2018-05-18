---
title: "Compiler Error C3838 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3838"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3838"]
ms.assetid: d6f470c2-131a-4a8c-843a-254acd43da83
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3838
cannot explicitly inherit from 'type'  
  
 The specified `type` cannot act as a base class in any class.  
  
## Example
 The following sample generates C3838:  
  
```  
// C3838a.cpp  
// compile with: /clr /c  
public ref class B : public System::Enum {};   // C3838  
```  
