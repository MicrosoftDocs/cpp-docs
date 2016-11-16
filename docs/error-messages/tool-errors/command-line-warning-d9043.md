---
title: "Command-Line Warning D9043 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "D9043"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "D9043"
ms.assetid: 9263e28d-217b-414c-bfb6-86efd3c27a77
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
# Command-Line Warning D9043
invalid value 'warning_level' for 'compiler_option'; assuming '4999'; Code Analysis warnings are not associated with warning levels  
  
## Example  
 The following sample generates C9043.  
  
```  
// D9043.cpp  
// compile with: /analyze /w16001  
// D9043 warning expected  
int main() {}  
```