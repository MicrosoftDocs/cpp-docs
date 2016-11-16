---
title: "is_error_code_enum Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "future/std::is_error_code_enum"
dev_langs: 
  - "C++"
ms.assetid: 84ae4b99-66d2-41ba-9b50-645fcbe14630
caps.latest.revision: 13
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
# is_error_code_enum Structure
Specialization that indicates that [future_errc](../standard-library/future-enums.md#future_errc_enumeration) is suitable for storing an [error_code](../standard-library/error-code-class.md).  
  
## Syntax  
  
```
template <>
struct is_error_code_enum<Future_errc> : public true_type;
```  
  
## Requirements  
 **Header:** future  
  
 **Namespace:** std  
  
## See Also  
 [Header Files Reference](../standard-library/cpp-standard-library-header-files.md)   
 [\<future>](../standard-library/future.md)



