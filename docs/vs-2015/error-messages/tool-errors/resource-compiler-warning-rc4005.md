---
title: "Resource Compiler Warning RC4005 | Microsoft Docs"
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
  - "RC4005"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RC4005"
ms.assetid: 71f03b4a-c9a9-415d-920f-bf2e58507f93
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Resource Compiler Warning RC4005
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Resource Compiler Warning RC4005](https://docs.microsoft.com/cpp/error-messages/tool-errors/resource-compiler-warning-rc4005).  
  
  
identifier' : macro redefinition  
  
 The identifier is defined twice. The compiler used the second macro definition.  
  
 This warning can be caused by defining a macro on the command line and in the code with a `#define` directive. It also can be caused by macros imported from include files.  
  
 To eliminate the warning, either remove one of the definitions or use an `#undef` directive before the second definition.

