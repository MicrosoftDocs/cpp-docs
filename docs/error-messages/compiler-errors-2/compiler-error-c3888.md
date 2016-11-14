---
title: "Compiler Error C3888 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3888"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3888"
ms.assetid: 40820812-79c5-4dcd-a19d-b4164d25fc8a
caps.latest.revision: 3
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
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
# Compiler Error C3888
'name' : the const expression associated with this literal data member is not supported by C++/CLI  
  
 The *name* data member that is declared with the [literal](../../windows/literal-cpp-component-extensions.md) keyword is initialized with a value the compiler does not support. The compiler supports only constant integral, enum, or string types. The likely cause for the **C3888** error is that the data member is initialized with a byte array.  
  
### To correct this error  
  
1.  Check that the declared literal data member is a supported type.  
  
## See Also  
 [literal](../../windows/literal-cpp-component-extensions.md)