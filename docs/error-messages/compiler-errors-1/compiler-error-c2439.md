---
title: "Compiler Error C2439 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2439"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2439"
ms.assetid: 3c5dbe5c-b7d3-4bb0-8619-92f6e280461e
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
# Compiler Error C2439
'identifier' : member could not be initialized  
  
 A class, structure, or union member cannot be initialized.  
  
### To fix by checking the following possible causes  
  
1.  Trying to initialize an indirect base class or structure.  
  
2.  Trying to initialize an inherited member of a class or structure. An inherited member must be initialized by the constructor of the class or structure.