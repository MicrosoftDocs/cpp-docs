---
title: "Compiler Error C3180"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "error-reference"
f1_keywords: 
  - "C3180"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3180"
ms.assetid: 5281f583-7df7-418a-8507-d4da67ed6572
caps.latest.revision: 6
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Compiler Error C3180
'type name' : name exceeds meta-data limit of 'limit' characters  
  
 The compiler truncated the name for a managed type in metadata. The truncation will make the type unusable with the `#using` directive (or the equivalent in another language).  
  
 The type-name limit includes any namespace qualifications.