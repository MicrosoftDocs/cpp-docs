---
title: "Compiler Error C3214 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3214"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3214"
ms.assetid: 49ee4a9a-2549-4adb-9d3a-38e154303c2e
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3214
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3214](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3214).  
  
  
type' : invalid type argument for generic parameter 'param' of generic 'generic_type', does not meet constraint 'constraint'  
  
 The type was specified for an instantiation of a generic class that does not meet the generic class's constraint.  
  
 The following sample generates C3214:  
  
```  
// C3214.cpp  
// compile with: /clr  
interface struct A {};  
  
generic <class T>   
where T : A  
ref class C {};  
  
ref class X : public A {};  
  
int main() {  
   C<int>^ c = new C<int>;   // C3214  
   C<X ^> ^ c2 = new C<X^>;   // OK  
}  
```

