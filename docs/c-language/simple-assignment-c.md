---
title: "Simple Assignment (C) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
dev_langs: ["C++"]
helpviewer_keywords: ["type conversion [C++], simple assignment", "data type conversion [C++], simple assignment", "operators [C], simple assignment", "assignment operators [C++], simple", "simple assignment operator", "equal sign"]
ms.assetid: e7140a0a-7104-4b3a-b293-7adcc1fdd52b
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Simple Assignment (C)
The simple-assignment operator assigns its right operand to its left operand. The value of the right operand is converted to the type of the assignment expression and replaces the value stored in the object designated by the left operand. The conversion rules for assignment apply (see [Assignment Conversions](../c-language/assignment-conversions.md)).  
  
```  
double x;  
int y;  
  
x = y;  
```  
  
 In this example, the value of `y` is converted to type **double** and assigned to `x`.  
  
## See Also  
 [C Assignment Operators](../c-language/c-assignment-operators.md)