---
title: "Compiler Error C2692 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2692"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2692"
ms.assetid: 02ade3b4-b757-448b-b065-d7d71bc3f441
caps.latest.revision: 12
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
# Compiler Error C2692
'function_name' : fully prototyped functions required in C compiler with the '/clr' option  
  
 When compiling for .NET managed code, the C compiler requires ANSI function declarations. In addition, if a function takes no parameters, it must explicitly declare `void` as the parameter type.