---
title: "register Storage-Class Specifier | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "register variables"
  - "register storage class"
ms.assetid: 7577bf48-88ec-4191-873c-ef4217a4034e
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# register Storage-Class Specifier
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [register Storage-Class Specifier](https://docs.microsoft.com/cpp/c-language/register-storage-class-specifier).  
  
Microsoft Specific**  
  
 The Microsoft C/C++ compiler does not honor user requests for register variables. However, for portability all other semantics associated with the **register** keyword are honored by the compiler. For example, you cannot apply the unary address-of operator (**&**) to a register object nor can the **register** keyword be used on arrays.  
  
 **END Microsoft Specific**  
  
## See Also  
 [Storage-Class Specifiers for Internal-Level Declarations](../c-language/storage-class-specifiers-for-internal-level-declarations.md)





