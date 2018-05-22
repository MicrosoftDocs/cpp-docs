---
title: "Compiler Error C2775 | Microsoft Docs"
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
  - "C2775"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2775"
ms.assetid: 9c488508-ade0-48f1-b94f-d538d15f807a
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2775
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2775](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2775).  
  
  
identifier' : no 'get' method is associated with this property  
  
 A data member declared with the [property](../../cpp/property-cpp.md) extended attribute does not have a `get` function specified, but an expression tries to retrieve its value.  
  
 The following sample generates C2775:  
  
```  
// C2775.cpp  
struct A {  
   __declspec(property(put=PutProp2, get=GetProp2)) int prop2;  
   int GetProp2(){return 0;}  
   void PutProp2(int){}  
  
   __declspec(property(put=PutProp)) int prop;  
   int PutProp(void){}  
  
};  
  
int main() {  
   A* pa = new A;  
   int x;  
   x = pa->prop;   // C2775  
   x = pa->prop2;  
}  
```

