---
title: "Compiler Error C3283"
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
ms.assetid: c51d912c-cde3-4928-904e-26734c8954ce
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
# Compiler Error C3283
'type' : an interface cannot have an instance constructor  
  
 A CLR [interface](../VS_visualcpp/interface-class---C---Component-Extensions-.md) cannot have an instance constructor.  A static constructor is allowed.  
  
 The following sample generates C3283:  
  
```  
// C3283.cpp  
// compile with: /clr  
interface class I {  
   I();   // C3283  
};  
```  
  
 Possible resolution:  
  
```  
// C3283b.cpp  
// compile with: /clr /c  
interface class I {  
   static I(){}  
};  
```