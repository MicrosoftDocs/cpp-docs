---
title: "Compiler Warning (level 1) C4178 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4178"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4178"]
ms.assetid: 2c2c8f97-a5c4-47cd-8dd2-beea172613f3
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4178
case constant 'constant' too big for the type of the switch expression  
  
 A case constant in a `switch` expression does not fit in the type to which it is assigned.  
  
## Example  
  
```  
// C4178.cpp  
// compile with: /W1  
int main()  
{  
    int i;  // maximum size of unsigned long int is 4294967295  
    switch( i )  
    {  
        case 4294967295:   // OK  
            break;  
        case 4294967296:   // C4178  
            break;  
    }  
 }  
```