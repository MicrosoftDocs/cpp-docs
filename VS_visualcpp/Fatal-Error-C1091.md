---
title: "Fatal Error C1091"
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
ms.assetid: 812d4201-9154-48b0-b9af-5959c082ca33
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
# Fatal Error C1091
compiler limit: string exceeds 'length' bytes in length  
  
 A string constant exceeded the current limit on the length of strings.  
  
 You might want to split the static string into two (or more) variables and use [strcpy_s](../VS_visualcpp/strcpy_s--wcscpy_s--_mbscpy_s.md) to join the result as part of the declaration or during run time.