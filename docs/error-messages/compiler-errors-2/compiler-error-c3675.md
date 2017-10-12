---
title: "Compiler Error C3675 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C3675"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3675"]
ms.assetid: 87461613-6633-430b-b95d-c7cb1bb63776
caps.latest.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3675
'function' : is reserved because 'property' is defined  
  
 When you declare a simple property, the compiler generates the get and set accessor methods, and those names are present in the scope of your program.  The compiler-generated names are formed by prepending get_ and set_ to the property name.  Therefore, you cannot declare functions with the same name as the compiler-generated accessors.  
  
 See [property](../../windows/property-cpp-component-extensions.md) for more information.  
  
## Example  
 The following sample generates C3675.  
  
```  
// C3675.cpp  
// compile with: /clr /c  
ref struct C {  
public:  
   property int Size;  
   int get_Size() { return 0; }   // C3675  
};  
```