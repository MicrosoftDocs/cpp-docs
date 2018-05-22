---
title: "Compiler Error C2616 | Microsoft Docs"
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
  - "C2616"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2616"
ms.assetid: 8d0c02d6-a0b0-4135-b10f-438d67da68c6
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2616
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2616](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2616).  
  
  
conversion' : cannot implicitly convert a non-lvalue 'type1' to a 'type2' that is not const  
  
 A reference cannot be initialized from a non-lvalue.  
  
 This is an error under ANSI compatibility ([/Za](../../build/reference/za-ze-disable-language-extensions.md)) and a warning under Microsoft extensions (**/Ze**).

