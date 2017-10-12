---
title: "Compiler Error C2856 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C2856"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2856"]
ms.assetid: fe616c51-124e-49e3-9dd8-883ec1660680
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2856
\#pragma hdrstop cannot be inside an #if block  
  
 The `hdrstop` pragma cannot be placed inside the body of a conditional compilation block.  
  
 Move the `#pragma hdrstop` statement to an area that is not contained in an `#if/#endif` block.