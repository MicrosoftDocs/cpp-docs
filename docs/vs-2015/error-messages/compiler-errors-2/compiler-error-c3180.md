---
title: "Compiler Error C3180 | Microsoft Docs"
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
  - "C3180"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3180"
ms.assetid: 5281f583-7df7-418a-8507-d4da67ed6572
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3180
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3180](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3180).  
  
  
type name' : name exceeds meta-data limit of 'limit' characters  
  
 The compiler truncated the name for a managed type in metadata. The truncation will make the type unusable with the `#using` directive (or the equivalent in another language).  
  
 The type-name limit includes any namespace qualifications.

