---
title: "Compiler Error CS1906"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "CS1906"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1906"
ms.assetid: 1a6abf5c-f673-4256-93ac-313dce50acc0
caps.latest.revision: 9
ms.author: "billchi"
manager: "douge"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Compiler Error CS1906
Invalid option 'option'; Resource visibility must be either 'public' or 'private'  
  
 This error indicates an invalid [/resource (Embed Resource File to Output)](../Topic/-resource%20\(C%23%20Compiler%20Options\).md) or [/linkresource (Link to .NET Framework Resource)](../Topic/-linkresource%20\(C%23%20Compiler%20Options\).md) command line option. Check the syntax of the **/resource** or **/linkresource** command line option, and make sure that the accessibility modifier used is either **public** or `private`.