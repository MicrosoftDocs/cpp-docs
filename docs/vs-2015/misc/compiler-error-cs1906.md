---
title: "Compiler Error CS1906 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS1906"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1906"
ms.assetid: 1a6abf5c-f673-4256-93ac-313dce50acc0
caps.latest.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS1906
Invalid option 'option'; Resource visibility must be either 'public' or 'private'  
  
 This error indicates an invalid [/resource (Embed Resource File to Output)](../Topic/-resource%20\(C%23%20Compiler%20Options\).md) or [/linkresource (Link to .NET Framework Resource)](../Topic/-linkresource%20\(C%23%20Compiler%20Options\).md) command line option. Check the syntax of the **/resource** or **/linkresource** command line option, and make sure that the accessibility modifier used is either **public** or `private`.