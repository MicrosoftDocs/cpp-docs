---
title: "Resource Compiler Warning RC4093 | Microsoft Docs"
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
  - "RC4093"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RC4093"
ms.assetid: 3c61b4a4-b418-465b-a4fd-cb1ff0adb8dd
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Resource Compiler Warning RC4093
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Resource Compiler Warning RC4093](https://docs.microsoft.com/cpp/error-messages/tool-errors/resource-compiler-warning-rc4093).  
  
  
unescaped newline in character constant in inactive code  
  
 The constant expression of an `#if`, `#elif`, **#ifdef**, or **#ifndef** preprocessor directive evaluated to zero, making the code that follows inactive. Within that inactive code, a newline character appeared within a set of single or double quotation marks.  
  
 All text until the next double quotation mark was considered to be within a character constant.

