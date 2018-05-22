---
title: "money_base Class | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "locale/std::money_base"
  - "money_base"
  - "std::money_base"
  - "std.money_base"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "money_base class"
ms.assetid: 1a303c15-9272-4f26-ae16-dcf43a0fd38a
caps.latest.revision: 22
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# money_base Class
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [money_base Class](https://docs.microsoft.com/cpp/standard-library/money-base-class).  
  
The class describes an enumeration and a structure common to all specializations of template class [moneypunct](../standard-library/moneypunct-class.md).  
  
## Syntax  
  
struct pattern
   {
   char field[_PATTERN_FIELD_SIZE];
   };  
  
## Remarks  
 The enumeration **part** describes the possible values in elements of the array field in the structure pattern. The values of **part** are:  
  
- **none** to match zero or more spaces or generate nothing.  
  
- **sign** to match or generate a positive or negative sign.  
  
- **space** to match zero or more spaces or generate a space.  
  
- **symbol** to match or generate a currency symbol.  
  
- **value** to match or generate a monetary value.  
  
## Requirements  
 **Header:** \<locale>  
  
 **Namespace:** std  
  
## See Also  
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)







