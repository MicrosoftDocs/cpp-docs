---
title: "Compiler Error C3238"
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
  - "C3238"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3238"
ms.assetid: 19942497-b3c5-4df0-9144-142ced92468b
caps.latest.revision: 9
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
# Compiler Error C3238
'type' : a type with this name has already been forwarded to assembly 'assembly'  
  
 A type was defined in a client application that is also defined, via type forwarding syntax, in a referenced assembly. Both types cannot be defined in the scope of the application.  
  
 See [Type Forwarding (C++/CLI)](../windows/type-forwarding--c---cli-.md) for more information.  
  
## Example  
 The following sample creates an assembly that contains a type that was forwarded from another assembly.  
  
```  
// C3238.cpp  
// compile with: /clr /LD  
public ref class R {};  
```  
  
## Example  
 The following sample creates an assembly that used to contain the type definition, but not only contains type forwarding syntax.  
  
```  
// C3238_b.cpp  
// compile with: /clr /LD  
#using "C3238.dll"  
[ assembly:TypeForwardedTo(R::typeid) ];  
```  
  
## Example  
 The following sample generates C3238.  
  
```  
// C3238_c.cpp  
// compile with: /clr /c  
// C3238 expected  
// Delete the following line to resolve.  
#using "C3238_b.dll"  
public ref class R {};  
```