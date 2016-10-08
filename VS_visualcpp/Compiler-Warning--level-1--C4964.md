---
title: "Compiler Warning (level 1) C4964"
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
ms.assetid: b89c9274-8a92-4b7c-aa30-3fbb1b68ac73
caps.latest.revision: 8
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Compiler Warning (level 1) C4964
No optimization options were specified; profile info will not be collected  
  
 [/GL](../VS_visualcpp/-GL--Whole-Program-Optimization-.md) and [/LTCG](../VS_visualcpp/-LTCG--Link-time-Code-Generation-.md) were specified, but no optimizations were requested, so no .pgc files will be generated and, therefore, no profile-guided optimizations will be possible.  
  
 If you want .pgc files to be generated when you run your application, specify one of the [/O](../VS_visualcpp/-O-Options--Optimize-Code-.md) compiler options.  
  
 The following sample generates C4964:  
  
```  
// C4964.cpp  
// compile with: /W1 /GL /link /ltcg:pgi  
// C4964 expected  
// Add /O2, for example, to the command line to resolve this warning.  
int main() {  
   int i;  
}  
```