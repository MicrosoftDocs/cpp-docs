---
title: "Compiler Error C3622 | Microsoft Docs"
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
  - "C3622"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3622"
ms.assetid: 02836f78-0cf2-4947-b87e-710187d81014
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3622
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3622](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3622).  
  
  
class' : a class declared as 'keyword' cannot be instantiated  
  
 An attempt was made to instantiate a class marked as [abstract](../../windows/abstract-cpp-component-extensions.md) (or [__abstract](../../misc/abstract.md)). A class marked as abstract can be a base class, but it cannot be instantiated.  
  
## Example  
 The following sample generates C3622.  
  
```  
// C3622.cpp  
// compile with: /clr  
ref class a abstract {};  
  
int main() {  
   a aa;   // C3622  
}  
```  
  
## Example  
 The following sample generates C3622.  
  
```  
// C3622_b.cpp  
// compile with: /clr:oldSyntax  
__abstract class a {  
};  
int main() {  
   a aa;   // C3622  
}  
```

