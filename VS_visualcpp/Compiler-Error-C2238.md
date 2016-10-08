---
title: "Compiler Error C2238"
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
ms.assetid: 3d53060c-d6b7-4603-b9cf-d7c65eb64cd2
caps.latest.revision: 8
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
# Compiler Error C2238
unexpected token(s) preceding 'token'  
  
 An incorrect token was found.  
  
 The following sample generates C2238:  
  
```  
// C2238.cpp  
// compile with: /c  
class v {  
virtual: int vvv;   // C2238  
};  
```