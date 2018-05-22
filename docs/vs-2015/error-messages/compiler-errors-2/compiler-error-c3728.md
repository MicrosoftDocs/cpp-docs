---
title: "Compiler Error C3728 | Microsoft Docs"
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
  - "C3728"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3728"
ms.assetid: 6b510cb1-887f-4fcd-9a1f-3bb720417ed1
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3728
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3728](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3728).  
  
  
event': event does not have a raise method  
  
 Metadata created with a language, such as C#, that does not allow an event to be raised from outside the class in which it was defined, was included with the [#using](../../preprocessor/hash-using-directive-cpp.md) directive, and a Visual C++ program using CLR programming attempted to raise the event.  
  
 To raise an event in a program developed in a language such as C#, the class containing the event needs to also define a public method that raises the event.

