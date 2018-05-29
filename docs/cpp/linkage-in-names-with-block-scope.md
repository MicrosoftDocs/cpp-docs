---
title: "Linkage in Names with Block Scope | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
dev_langs: ["C++"]
helpviewer_keywords: ["scope [C++], linkage rules", "linkage [C++], scope linkage rules", "names [C++], scope linkage rules", "block scope [C++]", "external linkage, scope linkage rules"]
ms.assetid: 73efa91a-f761-47f7-bbd9-9f9e3508e218
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Linkage in Names with Block Scope
The following linkage rules apply to names with block scope (local names):  
  
-   Names declared as `extern` have external linkage unless they were previously declared as **static**.  
  
-   All other names with block scope have no linkage.  
  
## See Also  
 [Program and Linkage](../cpp/program-and-linkage-cpp.md)