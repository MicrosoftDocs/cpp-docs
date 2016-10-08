---
title: "Compiler Error C2011"
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
ms.assetid: 992c9d51-e850-4d53-b86b-02e73b38249c
caps.latest.revision: 10
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
# Compiler Error C2011
'identifier' : 'type' type redefinition  
  
 The identifier was already defined as `type`. Check for redefinitions of the identifier.  
  
 You may also get C2011 if you import a header file or type library more than once into the same file. To prevent multiple inclusions of the types defined in a header file, use include guards or a `#pragma`[once](../VS_visualcpp/once.md) directive in the header file.  
  
 If you need to find the initial declaration of the redefined type, you can use the [/P](../VS_visualcpp/-P--Preprocess-to-a-File-.md) compiler flag to generate the preprocessed output passed to the compiler. You can use text search tools to find instances of the redefined identifier in the output file.  
  
 The following sample generates C2011 and shows one way to fix it:  
  
```  
// C2011.cpp  
// compile with: /c  
struct S;  
union S;   // C2011  
union S2;   // OK  
```