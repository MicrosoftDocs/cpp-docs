---
title: "Compiler Error C3462"
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
ms.assetid: 56b75f35-9fad-42d9-a969-eeca5d709bec
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
# Compiler Error C3462
'type': only an imported type can be forwarded  
  
 The TypeForwardedTo attribute must be applied to a type in referenced metadata.  
  
 For more information, see [Type Forwarding (C++/CLI)](../VS_visualcpp/Type-Forwarding--C---CLI-.md).  
  
## Example  
 The following sample creates a component.  
  
```  
// C3462.cpp  
// compile with: /clr /LD  
public ref class R {};  
```  
  
## Example  
 The following sample generates C3462.  
  
```  
// C3462b.cpp  
// compile with: /clr /c  
#using "C3462.dll"  
ref class N {};  
[assembly:TypeForwardedTo(N::typeid)];   // C3462  
[assembly:TypeForwardedTo(R::typeid)];  
```