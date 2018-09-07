---
title: "Compiler Warning (level 1) C4688 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4688"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4688"]
ms.assetid: a027df3c-b2b8-4c49-8539-c2bc42db74e8
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4688
'constraint': constraint list contains assembly private type 'type'  
  
 A constraint list has an assembly private type, meaning it will not be available when the type is accessed from outside the assembly. For more information, see [Generics](../../windows/generics-cpp-component-extensions.md).  
  
## Example  
 The following sample generates C4688.  
  
```  
// C4688.cpp  
// compile with: /clr /c /W1  
ref struct A {};   // private type  
public ref struct B {};  
  
// Delete the following 3 lines to resolve.  
generic <class T>   
where T : A   // C4688  
public ref struct M {};  
  
generic <class T>   
where T : B  
public ref struct N {};  
```