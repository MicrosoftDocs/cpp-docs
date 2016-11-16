---
title: "Compiler Error C2121 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2121"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2121"
ms.assetid: e04f32da-3736-4df3-8a1c-d687afcecf5c
caps.latest.revision: 6
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
# Compiler Error C2121
'#' : invalid character : possibly the result of a macro expansion  
  
 An invalid # character may have been inserted by an incorrect macro that uses the token-pasting operator (##) instead of the stringizing operator (#).