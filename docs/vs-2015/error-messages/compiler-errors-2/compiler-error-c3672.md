---
title: "Compiler Error C3672 | Microsoft Docs"
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
  - "C3672"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3672"
ms.assetid: da971041-1766-467a-aecf-1d8655c6cb7a
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3672
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3672](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3672).  
  
  
pseudo-destructor expression can only be used as part of a function call  
  
 A destructor was called incorrectly.  For more information, see [Destructors](../../cpp/destructors-cpp.md).  
  
## Example  
 The following sample generates C3672.  
  
```  
// C3672.cpp  
template<typename T>  
void f(T* pT) {  
   &pT->T::~T;   // C3672  
   pT->T::~T();   // OK  
};  
  
int main() {  
   int i;  
   f(&i);  
}  
```

