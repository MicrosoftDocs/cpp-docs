---
title: "Compiler Warning (level 2) C4156 | Microsoft Docs"
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
  - "C4156"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4156"
ms.assetid: 9adf3acb-c0fe-42a8-a4db-5822b1493f77
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 2) C4156
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 2) C4156](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-2-c4156).  
  
  
deletion of an array expression without using the array form of 'delete'; array form substituted  
  
 The non-array form of **delete** cannot delete an array. The compiler translated **delete** to the array form.  
  
 This warning occurs only under Microsoft extensions (/Ze).  
  
## Example  
  
```  
// C4156.cpp  
// compile with: /W2  
int main()  
{  
   int (*array)[ 10 ] = new int[ 5 ][ 10 ];  
   delete array; // C4156, changed by compiler to "delete [] array;"  
}  
```

