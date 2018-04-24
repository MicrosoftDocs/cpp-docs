---
title: "C.1 Notation | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: a23b2631-8096-4bf3-ac23-ba4f4bd7a52a
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# C.1 Notation
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The grammar rules consist of the name for a non-terminal, followed by a colon, followed by replacement alternatives on separate lines.  
  
 The syntactic expression termopt indicates that the term is optional within the replacement.  
  
 The syntactic expression *term*optseq is equivalent to *term-seq*opt with the following additional rules:  
  
 *term-seq* :  
  
 *term*  
  
 *term-seq term*  
  
 *term-seq* , *term*