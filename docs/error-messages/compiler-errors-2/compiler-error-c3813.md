---
title: "Compiler Error C3813 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3813"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3813"]
ms.assetid: ffdbc489-71bf-4cd6-988c-f824c9ab3ceb
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3813
a property declaration can only appear within the definition of a managed or WinRT type  
  
A [property](../../dotnet/how-to-use-properties-in-cpp-cli.md) can only be declared within a managed or Windows Runtime type. Native types do not support the `property` keyword.  
  
## Example  
The following sample generates C3813 and shows how to fix it:  
  
```cpp  
// C3813.cpp  
// compile by using: cl /c /clr C3813.cpp  
class A  
{  
   property int Int; // C3813  
};  
  
ref class B  
{  
   property int Int; // OK - declared within managed type  
};  
```