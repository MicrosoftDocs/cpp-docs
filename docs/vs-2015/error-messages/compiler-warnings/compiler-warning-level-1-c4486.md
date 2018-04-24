---
title: "Compiler Warning (level 1) C4486 | Microsoft Docs"
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
  - "C4486"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4486"
ms.assetid: 2c0c59e3-d025-4d97-8da2-fa27df1402fc
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4486
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4486](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4486).  
  
  
function' : a private virtual method of a ref class or value class should be marked 'sealed'  
  
 Since a private virtual member function of a managed class or struct cannot be accessed or overridden, it should be marked [sealed](../../windows/sealed-cpp-component-extensions.md).  
  
## Example  
 The following sample generates C4486.  
  
```  
// C4486.cpp  
// compile with: /clr /c /W1  
ref class B {  
private:  
   virtual void f() {}   // C4486  
   virtual void f1() sealed {}   // OK  
};  
```  
  
## Example  
 The following sample shows one possible use of a private sealed, virtual function.  
  
```  
// C4486_b.cpp  
// compile with: /clr /c  
ref class B {};  
  
ref class D : B {};  
  
interface class I {  
   B^ mf();  
};  
  
ref class E : I {  
private:  
   virtual B^ g() sealed = I::mf {  
      return gcnew B;  
   }  
  
public:  
   virtual D^ mf() {  
      return gcnew D;  
   }  
};  
```

