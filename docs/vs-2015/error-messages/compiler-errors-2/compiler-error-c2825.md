---
title: "Compiler Error C2825 | Microsoft Docs"
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
  - "C2825"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2825"
ms.assetid: c832f1c1-5184-4fc2-9356-12b21daa7af3
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2825
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2825](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2825).  
  
  
var : must be a class or namespace when followed by '::'  
  
 An unsuccessful attempt was made to form a qualified name.  
  
 For example, make sure that your code does not contain a function declaration where the function name begins with ::.  
  
## Example  
 The following sample generates C2825:  
  
```  
// C2825.cpp  
typedef int i;  
int main() {  
   int* p = new int;  
   p->i::i();   // C2825  
   // try the following line instead  
   // p->i::~i();  
}  
```

