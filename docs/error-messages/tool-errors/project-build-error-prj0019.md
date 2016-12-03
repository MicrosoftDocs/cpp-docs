---
title: "Project Build Error PRJ0019 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "PRJ0019"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "PRJ0019"
ms.assetid: 5390a62b-aacf-4bc8-b9d7-08f1e0233423
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Project Build Error PRJ0019
A tool returned an error code from  
  
 An error level was nonzero for a custom build step or build event.  
  
 You will also see PRJ0019 when a tool returned an error code but no error message. This can happen, for example, if you redirect the output of MIDL to NUL.  
  
 See [Troubleshooting Custom Build Steps and Build Events](../../ide/troubleshooting-build-customizations.md) for more information.  
  
 This error can also occur when you are running as a member of the Users group and Administrative access is needed. For more information, see [Running as a Member of the Users Group](../../security/running-as-a-member-of-the-users-group.md).