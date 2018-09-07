---
title: "Resource Compiler Warning RC4093 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["RC4093"]
dev_langs: ["C++"]
helpviewer_keywords: ["RC4093"]
ms.assetid: 3c61b4a4-b418-465b-a4fd-cb1ff0adb8dd
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Resource Compiler Warning RC4093
unescaped newline in character constant in inactive code  
  
 The constant expression of an `#if`, `#elif`, **#ifdef**, or **#ifndef** preprocessor directive evaluated to zero, making the code that follows inactive. Within that inactive code, a newline character appeared within a set of single or double quotation marks.  
  
 All text until the next double quotation mark was considered to be within a character constant.