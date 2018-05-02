---
title: "Compiler Warning (level 1) C4079 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4079"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4079"]
ms.assetid: 549759f0-e168-47e9-8c9a-de93ac843689
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4079
unexpected token 'token'  
  
 An unexpected separator token occurs in a pragma argument list. The remainder of the pragma was ignored.  
  
 The following sample generates C4079:  
  
```  
// C4079.cpp  
// compile with: /W1  
#pragma warning(disable : 4081)  
#pragma pack(c,16)   // C4079  
  
int main() {  
}  
```