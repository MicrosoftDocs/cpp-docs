---
title: "Compiler Error C3807 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3807"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3807"]
ms.assetid: 7e2b0aab-8c61-4e71-b9c1-fcaeb6a1b5ea
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3807
'type' : a class with the ComImport attribute cannot derive from 'type2', only interface implementation is allowed  
  
 A type that derived from <xref:System.Runtime.InteropServices.ComImportAttribute> can only implement an interface.  
  
## Example  
 The following sample generates C3807.  
  
```  
// C3807.cpp  
// compile with: /clr /c  
ref struct S {};  
interface struct I {};  
  
[System::Runtime::InteropServices::ComImportAttribute()]  
ref struct S1 : S {};   // C3807  
ref struct S2 : I {};  
```