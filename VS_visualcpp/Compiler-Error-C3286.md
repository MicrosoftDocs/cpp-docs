---
title: "Compiler Error C3286"
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
ms.assetid: 554328c8-cf44-4f7d-a8d2-def74d28ecdd
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
# Compiler Error C3286
'specifier': an iteration variable cannot have any storage-class specifiers  
  
 See [(NOTINBUILD)Storage-Class Specifiers](assetId:///10b3d22d-cb40-450b-994b-08cf9a211b6c) for more information.  
  
 See [for each, in](../VS_visualcpp/for-each--in.md) for more information.  
  
## Example  
 The following sample generates C3286.  
  
```  
// C3286.cpp  
// compile with: /clr  
int main() {  
   array<int> ^p = { 1, 2, 3 };  
   for each (static int i in p) {}   // C3286   
   for each (int j in p) {}   // OK  
}  
```