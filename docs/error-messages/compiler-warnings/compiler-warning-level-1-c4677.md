---
title: "Compiler Warning (level 1) C4677 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4677"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4677"
ms.assetid: a8d656a1-e2ff-4f8b-9028-201765131026
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Compiler Warning (level 1) C4677
'function': signature of non-private member contains assembly private type 'private_type'  
  
 A type that has public accessibility outside the assembly uses a type that has private access outside the assembly. A component that references the public assembly type will not be able to use the type member or members that reference the assembly private type.  
  
## Example  
 The following sample generates C4677.  
  
```  
// C4677.cpp  
// compile with: /clr /c /W1  
delegate void TestDel();  
public delegate void TestDel2();  
  
public ref class MyClass {  
public:  
   static event TestDel^ MyClass_Event;   // C4677  
   static event TestDel2^ MyClass_Event2;   // OK  
};  
```