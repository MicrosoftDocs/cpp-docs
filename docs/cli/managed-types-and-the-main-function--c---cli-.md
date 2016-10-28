---
title: "Managed Types and the main Function (C++-CLI)"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "main function, in managed applications"
  - "managed code, main() function"
ms.assetid: 9d0e9620-58c4-4dac-a0e1-ffeb95f80fa5
caps.latest.revision: 12
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
# Managed Types and the main Function (C++/CLI)
When writing an application using **/clr**, the arguments of the **main()** function cannot be of a managed type.  
  
 An example of a proper signature is:  
  
```  
// managed_types_and_main.cpp  
// compile with: /clr  
int main(int, char*[], char*[]) {}  
```  
  
## See Also  
 [Managed Types (C++/CLI)](../cli/managed-types--c---cli-.md)