---
title: "Compiler Error C2873 | Microsoft Docs"
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
  - "C2873"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2873"
ms.assetid: 7a10036b-400e-4364-bd2f-dcd7370c5e28
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2873
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2873](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2873).  
  
  
symbol' : symbol cannot be used in a using-declaration  
  
 A `using` directive is missing a [namespace](../../misc/namespace-declaration.md) keyword. This causes the compiler to misinterpret the code as a [using declaration](../../cpp/using-declaration.md) rather than a [using directive](../../misc/using-directive-cpp.md).

