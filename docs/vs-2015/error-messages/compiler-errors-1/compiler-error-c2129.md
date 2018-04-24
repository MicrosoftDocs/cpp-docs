---
title: "Compiler Error C2129 | Microsoft Docs"
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
  - "C2129"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2129"
ms.assetid: 21a8223e-1d22-4baa-9ca1-922b7f751dd0
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2129
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2129](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2129).  
  
  
static function 'function' declared but not defined  
  
 A forward reference is made to a `static` function that is never defined.  
  
 A `static` function must be defined within file scope. If the function is defined in another file, it must be declared `extern`.

