---
title: "Compiler Error C2856 | Microsoft Docs"
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
  - "C2856"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2856"
ms.assetid: fe616c51-124e-49e3-9dd8-883ec1660680
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2856
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2856](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2856).  
  
  
pragma hdrstop cannot be inside an #if block  
  
 The `hdrstop` pragma cannot be placed inside the body of a conditional compilation block.  
  
 Move the `#pragma hdrstop` statement to an area that is not contained in an `#if/#endif` block.

