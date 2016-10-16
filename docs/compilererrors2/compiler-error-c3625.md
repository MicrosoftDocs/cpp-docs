---
title: "Compiler Error C3625"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "error-reference"
f1_keywords: 
  - "C3625"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3625"
ms.assetid: fdf49f21-d6b1-42f4-9eec-23b04ae8b4aa
caps.latest.revision: 11
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
# Compiler Error C3625
'native_type': a native type cannot derive from a managed or WinRT type 'type'  
  
 A native class cannot inherit from a managed or WinRT class. For more information, see [Classes and Structs](../windows/classes-and-structs---c---component-extensions-.md).  
  
 The following sample generates C3625:  
  
```  
// C3625.cpp  
// compile with: /clr /c  
ref class B {};  
class D : public B {};   // C3625 cannot inherit from a managed class  
```  
  
 The following sample generates C3625:  
  
```  
// C3625_b.cpp  
// compile with: /clr:oldSyntax /c  
__gc class B {};  
class D : public B {};   // C3625  cannot inherit from a managed class  
```