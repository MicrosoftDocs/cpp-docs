---
title: "MBCS Programming Tips"
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
ms.topic: article
ms.assetid: d8ad36b8-917f-474e-8adb-69462adecd17
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
# MBCS Programming Tips
In new development, you should use Unicode character encoding for all strings that end users might possibly see. MBCS is a legacy technology that has been superceded by Unicode. This section supplies tips for developers who must maintain existing programs that use MBCS and where it is not practical to convert to Unicode. The advice applies to MFC applications and applications written without MFC. Topics include:  
  
-   [General MBCS Programming Advice](../VS_visualcpp/General-MBCS-Programming-Advice.md)  
  
-   [Incrementing and Decrementing Pointers](../VS_visualcpp/Incrementing-and-Decrementing-Pointers.md)  
  
-   [Byte Indices](../VS_visualcpp/Byte-Indices.md)  
  
-   [Last Character in a String](../VS_visualcpp/Last-Character-in-a-String.md)  
  
-   [Character Assignment](../VS_visualcpp/Character-Assignment.md)  
  
-   [Character Comparison](../VS_visualcpp/Character-Comparison.md)  
  
-   [Buffer Overflow](../VS_visualcpp/Buffer-Overflow.md)  
  
## See Also  
 [Support for Multibyte Character Sets (MBCSs)](../VS_visualcpp/Support-for-Multibyte-Character-Sets--MBCSs-.md)