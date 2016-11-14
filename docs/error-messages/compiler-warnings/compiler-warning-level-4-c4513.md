---
title: "Compiler Warning (level 4) C4513 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4513"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4513"
ms.assetid: 6877334a-f30a-4184-9483-dac3348737a4
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
# Compiler Warning (level 4) C4513
'class' : destructor could not be generated  
  
 The compiler cannot generate a default destructor for the given class; no destructor was created. The destructor is in a base class that is not accessible to the derived class. If the base class has a private destructor, make it public or protected.