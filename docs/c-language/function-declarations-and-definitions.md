---
title: "Function Declarations and Definitions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "local declarations"
  - "function definitions, function declarations"
  - "declaring functions, function definitions"
  - "internal declarations"
  - "external declarations"
  - "function prototypes, basics"
  - "external linkage, function declarations"
  - "declaring functions"
ms.assetid: 43fd98eb-7441-4473-a5d9-fc88c75577f7
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
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
# Function Declarations and Definitions
Function prototypes establish the name of the function, its return type, and the type and number of its formal parameters. A function definition includes the function body.  
  
## Remarks  
 Both function and variable declarations can appear inside or outside a function definition. Any declaration within a function definition is said to appear at the "internal" or "local" level. A declaration outside all function definitions is said to appear at the "external," "global," or "file scope" level. Variable definitions, like declarations, can appear at the internal level (within a function definition) or at the external level (outside all function definitions). Function definitions always occur at the external level. Function definitions are discussed further in [Function Definitions](../c-language/c-function-definitions.md). Function prototypes are covered in [Function Prototypes](../c-language/function-prototypes.md).  
  
## See Also  
 [Source Files and Source Programs](../c-language/source-files-and-source-programs.md)