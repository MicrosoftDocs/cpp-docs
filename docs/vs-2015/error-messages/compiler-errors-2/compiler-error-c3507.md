---
title: "Compiler Error C3507 | Microsoft Docs"
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
  - "C3507"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3507"
ms.assetid: 75f89767-f6f9-40f6-9820-81a49e09abdf
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3507
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3507](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3507).  
  
  
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

