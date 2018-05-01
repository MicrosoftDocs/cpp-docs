---
title: "Math Error M6203 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "M6203"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "M6203"
ms.assetid: bd7fdd1c-83e4-4d6a-901e-10a0308bf5be
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Math Error M6203
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Math Error M6203](https://docs.microsoft.com/cpp/error-messages/tool-errors/math-error-m6203).  
  
  
function' : _OVERFLOW error  
  
 The given function result was too large to be represented.  
  
 This error calls the `_matherr` function with the function name, its arguments, and the error type. You can rewrite the `_matherr` function to customize the handling of certain run-time floating-point math errors.

