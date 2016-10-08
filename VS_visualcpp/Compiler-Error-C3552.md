---
title: "Compiler Error C3552"
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
ms.assetid: 83401524-1bf1-44c0-8aca-a6eb35c4224c
caps.latest.revision: 4
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
# Compiler Error C3552
'typename': a late specified return type cannot contain 'auto'  
  
 If you use the `auto` keyword as a placeholder for the return type of a function, you must provide a late-specified return type. However, you cannot use another `auto` keyword to specify the late-specified return type. For example, the following code fragment yields error C3552.  
  
 `auto myFunction->auto; // C3552`