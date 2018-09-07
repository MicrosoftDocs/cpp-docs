---
title: "Compiler Error C3728 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3728"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3728"]
ms.assetid: 6b510cb1-887f-4fcd-9a1f-3bb720417ed1
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3728
'event': event does not have a raise method  
  
 Metadata created with a language, such as C#, that does not allow an event to be raised from outside the class in which it was defined, was included with the [#using](../../preprocessor/hash-using-directive-cpp.md) directive, and a Visual C++ program using CLR programming attempted to raise the event.  
  
 To raise an event in a program developed in a language such as C#, the class containing the event needs to also define a public method that raises the event.