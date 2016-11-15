---
title: "Math Error M6102 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "M6102"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "M6102"
ms.assetid: dbd2241f-6595-431e-9597-d9dbdb3a0ca2
caps.latest.revision: 6
author: "corob-msft"
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
# Math Error M6102
denormal  
  
 An operation generated a very small floating-point number, which be invalid due loss of significance. Denormal floating-point exceptions are usually masked, causing them to be trapped and operated upon.  
  
 Program terminates with exit code 130.