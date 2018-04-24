---
title: "Compiler Error C3159 | Microsoft Docs"
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
  - "C3159"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3159"
ms.assetid: e115cc76-0021-4568-95fd-61a324c41a85
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3159
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3159](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3159).  
  
  
pointer' : array of pointers to value type cannot be declared  
  
 An array of pointers to a value type cannot be declared.  
  
 C3159 is only reachable using **/clr:oldSyntax**.  
  
 The following sample generates C3159:  
  
```  
// C3159.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
  
__value struct B {  
};  
  
void f( B*[] );   // C3159  
  
int main() {  
}  
```

