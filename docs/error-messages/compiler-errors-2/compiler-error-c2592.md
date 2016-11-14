---
title: "Compiler Error C2592 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2592"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2592"
ms.assetid: 833a4d7b-66ef-4d4c-ae83-a533c2b0eb07
caps.latest.revision: 7
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
# Compiler Error C2592
'class': 'base_class_2' is inherited from 'base_class_1' and cannot be re-specified  
  
 You can only specify base classes that do not inherit from other base classes. In this case, only `base_class_1` is needed in the specification of `class` because `base_class_1` already inherits `base_class_2`.