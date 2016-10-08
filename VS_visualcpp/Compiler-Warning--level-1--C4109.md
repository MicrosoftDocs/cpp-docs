---
title: "Compiler Warning (level 1) C4109"
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
ms.assetid: 9e8d95c6-e05d-47e0-bd87-78974b3cc06c
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
# Compiler Warning (level 1) C4109
unexpected identifier 'identifier'  
  
 The pragma containing the unexpected identifier is ignored.  
  
## Example  
  
```  
// C4109.cpp  
// compile with: /W1 /LD  
#pragma init_seg( abc ) // C4109  
```