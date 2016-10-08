---
title: "Compiler Warning C4368"
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
ms.assetid: cb85bcee-fd3d-4aa5-b626-2324f07a4f1b
caps.latest.revision: 13
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# Compiler Warning C4368
cannot define 'member' as a member of managed 'type': mixed types are not supported  
  
 You cannot embed a native data member in a CLR type.  
  
 You can, however, declare a pointer to a native type and control its lifetime in the constructor and destructor and finalizer of your managed class. For more information see [Destructors and finalizers](../VS_visualcpp/How-to--Define-and-Consume-Classes-and-Structs--C---CLI-.md#BKMK_Destructors_and_finalizers).  
  
 This warning is always issued as an error. Use the [warning](../VS_visualcpp/warning.md) pragma to disable C4368.  
  
## Example  
 The following sample generates C4368.  
  
```  
// C4368.cpp  
// compile with: /clr /c  
struct N {};  
ref struct O {};  
ref struct R {  
    R() : m_p( new N ) {}  
    ~R() { delete m_p; }  
  
   property N prop;   // C4368  
   int i[10];   // C4368  
  
   property O ^ prop2;   // OK  
   N * m_p;   // OK  
};  
```