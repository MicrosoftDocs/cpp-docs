---
title: "Compiler Error C3365 | Microsoft Docs"
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
  - "C3365"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3365"
ms.assetid: 875ec3a4-522c-4e3d-9b67-48808b857f6d
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3365
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3365](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3365).  
  
  
operator 'operator' : differing operands of type 'type1' and 'type2'  
  
 An attempt was made to compose delegates with different types.  See [How to: Compose Delegates](../../misc/how-to-compose-delegates.md) for more information about delegates.  
  
 The following sample generates C3365:  
  
```  
// C3365.cpp  
// compile with: /clr  
delegate void D1();  
delegate void D2(int);  
  
ref class R {  
public:  
   void f(){}  
   void g(int){}  
};  
  
int main() {  
   D1^ d1 = gcnew D1(gcnew R, &R::f);  
   D2^ d2 = gcnew D2(gcnew R, &R::g);  
   D1^ d3 = gcnew D1(gcnew R, &R::f);  
  
   d1 += d2;   // C3365  
   d1 += d3;   // OK  
   d1();  
}  
```

