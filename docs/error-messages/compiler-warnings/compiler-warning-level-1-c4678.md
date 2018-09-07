---
title: "Compiler Warning (level 1) C4678 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4678"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4678"]
ms.assetid: 0c588f34-595d-4e5c-9470-8723fca2cc06
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4678
base class 'base_type' is less accessible than 'derived_type'  
  
A public type derives from a private type. If the public type is instantiated in a referenced assembly, members of the private base type will not be accessible.  
  
C4678 is only reachable using the obsolete compiler option **/clr:oldSyntax**. It is an error when using **/clr**, to have a base class that is less accessible that its derived class.  
