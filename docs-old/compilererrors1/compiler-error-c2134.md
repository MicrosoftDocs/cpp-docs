---
title: "Compiler Error C2134"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "error-reference"
f1_keywords: 
  - "C2134"
dev_langs: 
  - "C++"
ms.assetid: d45cb3e8-0be4-4bd6-8be9-5f8d2384363f
caps.latest.revision: 3
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2134
'function' : call does not result in a constant expression  
  
 A function declared as constexpr can only call other functions declared as constexpr.  
  
 The following sample generates C2134:  
  
```  
// C2134.cpp  
// compile with: /c  
int A() {  
    return 42;  
};  
  
constexpr int B() {  
    return A();  // Error C2134: 'A': call does not result in a constant expression.  
}  
```  
  
 Possible resolution:  
  
```  
// C2134b.cpp  
constexpr int A() {  // add constexpr to A, since it meets the requirements of constexpr.  
    return 42;  
};  
  
constexpr int B() {  
    return A();  // No error  
}  
```