---
title: "Compiler Warning (level 1) C4951 | Microsoft Docs"
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
  - "C4951"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4951"
ms.assetid: 669d8bb7-5efa-4ba9-99db-4e65addbf054
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4951
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4951](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4951).  
  
  
function' has been edited since profile data was collected, function profile data not used  
  
 A function has been edited in an input module to [/LTCG:PGUPDATE](../../build/reference/ltcg-link-time-code-generation.md), so that the profile data is now not valid. The input module was recompiled after **/LTCG:PGINSTRUMENT** and has a function (***function***) with a different flow of control than was in the module at the time of the **/LTCG:PGINSTRUMENT** operation.  
  
 This warning is informational. To resolve this warning, run **/LTCG:PGINSTRUMENT**, redo all test runs, and run **/LTCG:PGOPTIMIZE**.  
  
 This warning would be replaced with an error if **/LTCG:PGOPTIMIZE** had been used.

