---
title: "Compiler Warning (level 1) C4486"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: error-reference
ms.assetid: 2c0c59e3-d025-4d97-8da2-fa27df1402fc
caps.latest.revision: 4
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Compiler Warning (level 1) C4486
'function' : a private virtual method of a ref class or value class should be marked 'sealed'  
  
 Since a private virtual member function of a managed class or struct cannot be accessed or overridden, it should be marked [sealed](../VS_visualcpp/sealed---C---Component-Extensions-.md).  
  
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