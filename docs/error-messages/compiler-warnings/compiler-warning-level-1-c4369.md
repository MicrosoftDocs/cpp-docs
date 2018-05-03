---
title: "Compiler Warning (level 1) C4369 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4369"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4369"]
ms.assetid: ade87e84-36be-4e00-be99-2930af848feb
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4369
'enumerator' :  enumerator value 'value' cannot be represented as 'type', value is 'new_value'  
  
 An enumerator was calculated to be greater than the greatest value for the specified underlying type.  This caused an overflow and the compiler wrapped the enumerator value to the lowest possible value for the type.  
  
## Example  
 The following sample generates C4369.  
  
```  
// C4369.cpp  
// compile with: /W1  
int main() {  
   enum Color: char { red = 0x7e, green, blue };   // C4369  
   enum Color2: char { red2 = 0x7d, green2, blue2};   // OK  
}  
```