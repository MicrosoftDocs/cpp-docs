---
title: "Fatal Error C1005 | Microsoft Docs"
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
  - "C1005"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1005"
ms.assetid: 150daf8e-a38a-4669-9c1a-a05b5a1f65ef
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Fatal Error C1005
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Fatal Error C1005](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/fatal-error-c1005).  
  
  
string too big for buffer  
  
 A string in a compiler intermediate file overflowed a buffer.  
  
 You could get this error when the parameter that you pass to either the [/Fd](../../build/reference/fd-program-database-file-name.md) or [/Yl](../../build/reference/yl-inject-pch-reference-for-debug-library.md) compiler options is greater than 256 bytes.

