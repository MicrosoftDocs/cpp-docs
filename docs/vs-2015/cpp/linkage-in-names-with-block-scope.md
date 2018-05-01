---
title: "Linkage in Names with Block Scope | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "scope [C++], linkage rules"
  - "linkage [C++], scope linkage rules"
  - "names [C++], scope linkage rules"
  - "block scope [C++]"
  - "external linkage, scope linkage rules"
ms.assetid: 73efa91a-f761-47f7-bbd9-9f9e3508e218
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Linkage in Names with Block Scope
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Linkage in Names with Block Scope](https://docs.microsoft.com/cpp/cpp/linkage-in-names-with-block-scope).  
  
The following linkage rules apply to names with block scope (local names):  
  
-   Names declared as `extern` have external linkage unless they were previously declared as **static**.  
  
-   All other names with block scope have no linkage.  
  
## See Also  
 [Program and Linkage](../cpp/program-and-linkage-cpp.md)





