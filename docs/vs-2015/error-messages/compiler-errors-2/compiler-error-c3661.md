---
title: "Compiler Error C3661 | Microsoft Docs"
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
  - "C3661"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3661"
ms.assetid: 50793fd1-1829-4b29-ad0d-094ef2068b43
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3661
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3661](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3661).  
  
  
explicit override list did not find any methods to override  
  
 An explicit override specified one or more type names.  However, there was no function with the necessary signature in the type(s) that matched the overriding function's signature.  If you attempt to override based on type name, there must be one or more virtual functions in the specified type(s) that match the signature of the overriding function.  
  
 For more information, see [Explicit Overrides](../../windows/explicit-overrides-cpp-component-extensions.md).

