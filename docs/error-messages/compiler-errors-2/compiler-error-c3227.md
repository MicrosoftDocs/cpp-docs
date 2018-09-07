---
title: "Compiler Error C3227 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3227"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3227"]
ms.assetid: 7939c23a-96c8-43c2-89e9-f217d132d155
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3227
'parameter' : cannot use 'keyword' to allocate a generic type  
  
 In order to instantiate a type, an appropriate constructor is required. However, the compiler is not able to ensure that an appropriate constructor is available.  
  
 You can use templates instead of generics to resolve this error, or you can use one of several methods to create an instance of the type.  
  
## Example  
 The following sample generates C3227.  
  
```  
// C3227.cpp  
// compile with: /clr /c  
generic<class T> interface class ICreate {  
   static T Create();  
};  
  
generic <class T>  
where T : ICreate<T>  
ref class C {  
   void f() {  
      T t = new T;   // C3227  
  
      // OK  
      T t2 = ICreate<T>::Create();  
      T t3 = safe_cast<T>( System::Activator::CreateInstance(T::typeid) );  
   }  
};  
```