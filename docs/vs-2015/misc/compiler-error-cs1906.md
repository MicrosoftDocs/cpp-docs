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
  
 This error indicates an invalid [/resource (Embed Resource File to Output)](http://msdn.microsoft.com/library/5212666e-98ab-47e4-a497-b5545ab15c7f) or [/linkresource (Link to .NET Framework Resource)](http://msdn.microsoft.com/library/440c26c2-77c1-4811-a0a3-57cce3f5fc96) command line option. Check the syntax of the **/resource** or **/linkresource** command line option, and make sure that the accessibility modifier used is either **public** or `private`.