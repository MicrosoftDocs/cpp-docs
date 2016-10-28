---
title: "Compiler Error C3465"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "C3465"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3465"
ms.assetid: aeb815e5-b3fc-4525-afe2-d738e9321df1
caps.latest.revision: 5
ms.author: "corob"
manager: "douge"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Compiler Error C3465
to use type 'type' you must reference the assembly 'assembly'  
  
 Type forwarding will work for a client application until you recompile the client. When you recompile, you will need a reference for every assembly containing the definition of a type used in your client application.  
  
 For more information, see [Type Forwarding (C++/CLI)](../windows/type-forwarding--c---cli-.md).  
  
## Example  
 The following sample builds an assembly that contains the new location of a type.  
  
```  
// C3465.cpp  
// compile with: /clr /LD  
public ref class R {  
public:  
   ref class N {};  
};  
```  
  
## Example  
 The following sample builds an assembly that used to contain the definition of the type, but now contains forwarding syntax for the type.  
  
```  
// C3465_b.cpp  
// compile with: /clr /LD  
#using "C3465.dll"  
[ assembly:TypeForwardedTo(R::typeid) ];  
```  
  
## Example  
 The following sample generates C3465.  
  
```  
// C3465_c.cpp  
// compile with: /clr  
// C3465 expected  
#using "C3465_b.dll"  
// Uncomment the following line to resolve.  
// #using "C3465.dll"  
  
int main() {  
   R^ r = gcnew R();  
}  
```