---
title: "2.8 Directive Binding | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 7bdac45e-ab55-42f0-bd47-a2e3d5bbab3e
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
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
# 2.8 Directive Binding
Dynamic binding of directives must adhere to the following rules:  
  
-   The **for**, **sections**, **single**, **master**, and **barrier** directives bind to the dynamically enclosing **parallel**, if one exists, regardless of the value of any **if** clause that may be present on that directive. If no parallel region is currently being executed, the directives are executed by a team composed of only the master thread.  
  
-   The **ordered** directive binds to the dynamically enclosing **for**.  
  
-   The **atomic** directive enforces exclusive access with respect to **atomic** directives in all threads, not just the current team.  
  
-   The **critical** directive enforces exclusive access with respect to **critical** directives in all threads, not just the current team.  
  
-   A directive can never bind to any directive outside the closest dynamically enclosing **parallel**.