---
title: "Compiler Warning (level 1) C4381 | Microsoft Docs"
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
  - "C4381"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4381"
ms.assetid: f67a6db3-b334-4b2e-8182-b30c7a3c7c32
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4381
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4381](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4381).  
  
  
function1': interface method will not be implemented by non-public method 'function2'  
  
 A class must implement all function in an interface. A class can satisfy this condition if one of its base classes implements the function. However, the function must be implemented as a public function.

