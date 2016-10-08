---
title: "Compiler Error C3461"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-csharp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: bd66833a-545d-445a-bdfe-dee771a450a4
caps.latest.revision: 6
manager: douge
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
# Compiler Error C3461
'type': only a managed type can be forwarded  
  
 Type forwarding can only occur on CLR types.  See [Classes and Structs](../VS_visualcpp/Classes-and-Structs---C---Component-Extensions-.md) for more information.  
  
 For more information, see [Type Forwarding (C++/CLI)](../VS_visualcpp/Type-Forwarding--C---CLI-.md).  
  
## Example  
 The following sample creates a component.  
  
```  
// C3461.cpp  
// compile with: /clr /LD  
public ref class R {};  
```  
  
## Example  
 The following sample generates C3461.  
  
```  
// C3461b.cpp  
// compile with: /clr /c  
#using "C3461.dll"  
class N {};  
[assembly:TypeForwardedTo(N::typeid)];   // C3461  
[assembly:TypeForwardedTo(R::typeid)];   // OK  
```