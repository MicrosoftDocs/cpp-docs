---
title: "Compiler Warning (level 1) C4445 | Microsoft Docs"
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
  - "C4445"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4445"
ms.assetid: 535e92a0-ba08-4dfc-89b2-af2dcdd7caeb
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4445
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4445](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4445).  
  
  
function' : in a WinRT or managed type a virtual method cannot be private  
  
 If a virtual function is private, it cannot be accessed by a derived type. To fix this error, change the accessibility of the virtual member function to protected or public.

