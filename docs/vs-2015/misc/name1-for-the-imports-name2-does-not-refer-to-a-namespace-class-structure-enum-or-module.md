---
title: "&#39;&lt;name1&gt;&#39; for the Imports &#39;&lt;name2&gt;&#39; does not refer to a Namespace, Class, Structure, Enum or Module | Microsoft Docs"
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
  - "vbc30467"
  - "bc30467"
helpviewer_keywords: 
  - "BC30467"
ms.assetid: a4b8a23b-ba1b-44f7-9584-258dd2607581
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;name1&gt;&#39; for the Imports &#39;&lt;name2&gt;&#39; does not refer to a Namespace, Class, Structure, Enum or Module
You have attempted to use the `Imports` statement on something that is not a `Namespace`, `Class`, `Structure`, `Enum`, or `Module`. The `Imports` statement imports namespace names from referenced projects and assemblies, or it imports namespace names defined within the same project as the module in which the statement appears.  
  
 **Error ID:** BC30467  
  
### To correct this error  
  
-   Check the entity that you are trying to import, and make sure it is valid for use with an `Imports` statement.  
  
## See Also  
 [Imports Statement (.NET Namespace and Type)](http://msdn.microsoft.com/library/7062f8aa-d890-4232-9eed-92836e13fb6e)   
 [References and the Imports Statement](http://msdn.microsoft.com/library/38149bd4-0a6f-4b31-b5f8-94a8c33f1600)   
 [NIB How to: Add or Remove References By Using the Add Reference Dialog Box](http://msdn.microsoft.com/en-us/3bd75d61-f00c-47c0-86a2-dd1f20e231c9)