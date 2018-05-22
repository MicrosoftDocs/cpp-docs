---
title: "Compiler Error C2249 | Microsoft Docs"
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
  - "C2249"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2249"
ms.assetid: bdd6697c-e04b-49b9-8e40-d9eb6d74f2b6
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2249
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2249](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2249).  
  
  
member' : no accessible path to access member declared in virtual base 'class'  
  
 The `member` is inherited from a nonpublic `virtual` base class or structure.  
  
## Example  
 The following sample generates C2249.  
  
```  
// C2249.cpp  
class A {  
private:  
   void privFunc( void ) {};  
public:  
   void pubFunc( void ) {};  
};  
  
class B : virtual public A {} b;  
  
int main() {  
   b.privFunc();    // C2249, private member of A  
   b.pubFunc();    // OK  
}  
```  
  
## Example  
 C2249 can also occur if you try to assign a stream from the Standard C++ Library to another stream.  The following sample generates C2249.  
  
```  
// C2249_2.cpp  
#include <iostream>  
using namespace std;  
int main() {  
   cout = cerr;   // C2249  
   #define cout cerr;   // OK  
}  
```

