---
title: "NMAKE Warning U4011"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "error-reference"
f1_keywords: 
  - "U4011"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "U4011"
ms.assetid: e8244514-eba6-4285-8853-7baeefdcd8a4
caps.latest.revision: 7
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
# NMAKE Warning U4011
'target' : not all dependents available; target not built  
  
 A dependent of the given target either did not exist or was out-of-date, and a command for updating the dependent returned a nonzero exit code. The /K option told NMAKE to continue processing unrelated parts of the build and to issue an exit code 1 when the NMAKE session is finished.  
  
 This warning is preceded by warning [U4010](../othererrors/nmake-warning-u4010.md) for each dependent that failed to be created or updated.