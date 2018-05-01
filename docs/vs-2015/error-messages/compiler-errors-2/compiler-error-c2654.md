---
title: "Compiler Error C2654 | Microsoft Docs"
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
  - "C2654"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2654"
ms.assetid: ca7de1bd-576b-40bf-96fc-a91984827d20
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2654
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2654](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2654).  
  
  
identifier' : attempt to access member outside a member function  
  
 A member is accessed in a declaration. Member data can be accessed only in member functions.  
  
 This error can be caused when trying to initialize variables in a declaration. Use a constructor for this purpose.

