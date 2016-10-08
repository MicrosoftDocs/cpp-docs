---
title: "Compiler Warning (level 3) C4359"
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
ms.assetid: d8fe993c-ef82-45a0-a43d-c29f9d1bacdb
caps.latest.revision: 5
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
# Compiler Warning (level 3) C4359
'type': actual alignment (8) is greater than the value specified in __declspec(align())  
  
 The alignment specified for a type is less than the alignment of the type of one of its data members.  For more information, see [align](../VS_visualcpp/align--C---.md).  
  
## Example  
 The following sample generates C4359.  
  
```  
// C4359.cpp  
// compile with: /W3 /c  
struct __declspec(align(8)) C8 { __int64 i; };  
struct __declspec(align(4)) C4  { C8 m8; };   // C4359  
struct __declspec(align(8)) C8_b  { C8 m8; };   // OK  
struct __declspec(align(16)) C16  { C8 m8; };   // OK  
```