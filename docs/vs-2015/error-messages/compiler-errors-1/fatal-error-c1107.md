---
title: "Fatal Error C1107 | Microsoft Docs"
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
  - "C1107"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1107"
ms.assetid: 541a4d9f-10bc-4dd8-b68e-15e548f3dc0a
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Fatal Error C1107
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Fatal Error C1107](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/fatal-error-c1107).  
  
  
could not find assembly 'file': please specify the assembly search path using /AI or by setting the LIBPATH environment variable  
  
 A metadata file was passed to a [#using](../../preprocessor/hash-using-directive-cpp.md) directive that the compiler was unable to locate.  
  
 LIBPATH, which is described in the topic for `#using`, and the [/AI](../../build/reference/ai-specify-metadata-directories.md) compiler option allow you to specify directories in which the compiler will look for referenced metadata files.

