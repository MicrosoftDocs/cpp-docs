---
title: "Compiler Error C2865 | Microsoft Docs"
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
  - "C2865"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2865"
ms.assetid: 973eb6a0-c99a-4d25-b3e5-fe0539794d77
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2865
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2865](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2865).  
  
  
function' : illegal comparison for handle_or_pointer  
  
 You can compare references to [Classes and Structs](../../windows/classes-and-structs-cpp-component-extensions.md) or [__gc](../../misc/gc.md) types only for equality to see if they refer to the same object (==) or to different objects (!=).  
  
 You cannot compare them for ordering because the .NET runtime might move managed objects at any time, changing the outcome of the test.

