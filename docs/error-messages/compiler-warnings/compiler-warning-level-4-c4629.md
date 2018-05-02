---
title: "Compiler Warning (level 4) C4629 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4629"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4629"]
ms.assetid: 158cde12-bae5-4d43-b575-b52b35aaa0b9
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 4) C4629
digraph used, character sequence 'digraph' interpreted as token 'char' (insert a space between the two characters if this is not what you intended)  
  
 Under [/Za](../../build/reference/za-ze-disable-language-extensions.md), the compiler warns when it detects a digraph.  
  
 The following sample generates C4629:  
  
```  
// C4629.cpp  
// compile with: /Za /W4  
int main()  
<%   // C4629 <% digraph for {  
}  
```