---
title: "Compiler Error C2433 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C2433"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2433"]
ms.assetid: 7079fedd-6059-4125-82ef-ebe275f1f9d1
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# Compiler Error C2433
'identifier' : 'modifier' not permitted on data declarations  
  
 The `friend`, `virtual`, and `inline` modifiers cannot be used for data declarations.  
  
## Example  
 The following sample generates C2433.  
  
```  
// C2433.cpp  
class C{};  
  
int main() {  
   inline C c;   // C2433  
}  
```