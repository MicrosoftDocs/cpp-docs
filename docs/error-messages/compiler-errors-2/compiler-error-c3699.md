---
title: "Compiler Error C3699 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C3699"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3699"]
ms.assetid: 47c29afc-ab8b-4238-adfe-788dd6e00b3b
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3699
'operator' : cannot use this indirection on type 'type'  
  
 An attempt was made to use indirection that is not allowed on `type`.  
  
## Example  
 The following sample generates C3699.  
  
```  
// C3699.cpp  
// compile with: /clr /c  
using namespace System;  
int main() {  
   String * s;   // C3699  
   // try the following line instead  
   // String ^ s2;  
}  
```  
  
## Example  
 A trivial property cannot have reference type. See [property](../../windows/property-cpp-component-extensions.md) for more information. The following sample generates C3699.  
  
```  
// C3699_b.cpp  
// compile with: /clr /c  
ref struct C {  
   property System::String % x;   // C3699  
   property System::String ^ y;   // OK  
};  
```  
  
## Example  
 The equivalent of a "pointer to a pointer" syntax is a handle to a tracking reference. The following sample generates C3699.  
  
```  
// C3699_c.cpp  
// compile with: /clr /c  
using namespace System;  
void Test(String ^^ i);   // C3699  
void Test2(String ^% i);  
```