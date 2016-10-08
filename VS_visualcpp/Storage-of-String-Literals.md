---
title: "Storage of String Literals"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
  - C
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: ba5e4d2c-d456-44b3-a8ca-354af547ac50
caps.latest.revision: 9
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
# Storage of String Literals
The characters of a literal string are stored in order at contiguous memory locations. An escape sequence (such as **\\\\** or **\\"**) within a string literal counts as a single character. A null character (represented by the **\0** escape sequence) is automatically appended to, and marks the end of, each string literal. (This occurs during [translation phase](../VS_visualcpp/Phases-of-Translation.md) 7.) Note that the compiler may not store two identical strings at two different addresses. [/GF](../VS_visualcpp/-GF--Eliminate-Duplicate-Strings-.md) forces the compiler to place a single copy of identical strings into the executable file.  
  
## Remarks  
 **Microsoft Specific**  
  
 Strings have static storage duration. See [Storage Classes](../VS_visualcpp/C-Storage-Classes.md) for information about storage duration.  
  
 **END Microsoft Specific**  
  
## See Also  
 [C String Literals](../VS_visualcpp/C-String-Literals.md)