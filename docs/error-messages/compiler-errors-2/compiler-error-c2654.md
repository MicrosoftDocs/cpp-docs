---
title: "Compiler Error C2654 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2654"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2654"]
ms.assetid: ca7de1bd-576b-40bf-96fc-a91984827d20
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2654
'identifier' : attempt to access member outside a member function  
  
 A member is accessed in a declaration. Member data can be accessed only in member functions.  
  
 This error can be caused when trying to initialize variables in a declaration. Use a constructor for this purpose.