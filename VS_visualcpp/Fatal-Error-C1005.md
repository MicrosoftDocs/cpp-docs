---
title: "Fatal Error C1005"
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
ms.assetid: 150daf8e-a38a-4669-9c1a-a05b5a1f65ef
caps.latest.revision: 7
manager: ghogen
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
# Fatal Error C1005
string too big for buffer  
  
 A string in a compiler intermediate file overflowed a buffer.  
  
 You could get this error when the parameter that you pass to either the [/Fd](../VS_visualcpp/-Fd--Program-Database-File-Name-.md) or [/Yl](../VS_visualcpp/-Yl--Inject-PCH-Reference-for-Debug-Library-.md) compiler options is greater than 256 bytes.