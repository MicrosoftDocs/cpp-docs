---
title: "Math Error M6202 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "M6202"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "M6202"
ms.assetid: 4d17045f-c6dc-4705-9512-e9af12c35fb4
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
# Math Error M6202
'function' : _SING error  
  
 An argument to the given function was a singularity value for this function. The function is not defined for that argument.  
  
 This error calls the `_matherr` function with the function name, its arguments, and the error type. You can rewrite the `_matherr` function to customize the handling of certain run-time floating-point math errors.