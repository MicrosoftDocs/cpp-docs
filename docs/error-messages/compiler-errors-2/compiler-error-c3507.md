---
title: "Compiler Error C3507 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3507"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3507"]
ms.assetid: 75f89767-f6f9-40f6-9820-81a49e09abdf
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3507
a ProgID can have no more than 39 characters 'id'; nor contain any punctuation apart from '.'; nor start with a digit  
  
 The [progid](../../windows/progid.md) attribute has restrictions on the values that it can take.  
  
 The following sample generates C3507:  
  
```  
// C3507.cpp  
[module(name="x")];  
[  
coclass,  
progid("0123456789012345678901234567890123456789"),  
uuid("00000000-0000-0000-0000-000000000001") // C3507 expected  
]  
struct CMyStruct {  
};  
int main() {  
}  
```