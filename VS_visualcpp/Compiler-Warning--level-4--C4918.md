---
title: "Compiler Warning (level 4) C4918"
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
ms.assetid: 1bcf6d35-3467-4aa8-b2ef-cb33f4e70238
caps.latest.revision: 7
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
# Compiler Warning (level 4) C4918
'character' : invalid character in pragma optimization list  
  
 An unknown character was found in the optimization list of an [optimize](../VS_visualcpp/optimize.md) pragma statement.  
  
 For example, the following statement generates C4918:  
  
```  
// C4918.cpp  
// compile with: /W4  
#pragma optimize("X", on) // C4918 expected  
int main()  
{  
}  
```