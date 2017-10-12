---
title: "Resource Compiler Fatal Error RC1018 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["RC1018"]
dev_langs: ["C++"]
helpviewer_keywords: ["RC1018"]
ms.assetid: bb1d2efd-6898-412f-bb03-9ff94c54e4dc
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Resource Compiler Fatal Error RC1018
unexpected '#elif'  
  
 The `#elif` directive did not appear within an `#if`, **#ifdef**, or **#ifndef** construct.  
  
 Make sure that there is an `#if`, **#ifdef**, or **#ifndef** statement in effect before this statement.