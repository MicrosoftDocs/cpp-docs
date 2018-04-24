---
title: "&#39;Imports&#39; statements must precede any declarations | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc30465"
  - "bc30465"
helpviewer_keywords: 
  - "BC30465"
ms.assetid: 726365f6-d6fc-454a-a43b-afa41bfea82a
caps.latest.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Imports&#39; statements must precede any declarations
An `Imports` statement follows a declaration statement within a source file.  
  
 The `Imports` statement imports namespace names from referenced projects and assemblies, as well as namespace names defined within the same project as the one in which it appears. `Imports` statements must be placed in a source file before any references to identifiers.  
  
 **Error ID:** BC30465  
  
### To correct this error  
  
-   Move the `Imports` statement to the top of the source file, before any declaration statements.  
  
## See Also  
 [Imports Statement (.NET Namespace and Type)](http://msdn.microsoft.com/library/7062f8aa-d890-4232-9eed-92836e13fb6e)