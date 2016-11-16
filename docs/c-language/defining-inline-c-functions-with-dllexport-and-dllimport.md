---
title: "Defining Inline C Functions with dllexport and dllimport | Microsoft Docs"
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
  - "C"
helpviewer_keywords: 
  - "inline functions [C++], with dllexport and dllimport"
  - "dllimport attribute [C++], inline functions"
  - "dllexport attribute [C++], inline functions"
  - "dllexport attribute [C++]"
ms.assetid: 41418f7c-1c11-470b-bb2e-1f8269a239f0
caps.latest.revision: 8
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
# Defining Inline C Functions with dllexport and dllimport
**Microsoft Specific**  
  
 You can define as inline a function with the `dllexport` attribute. In this case, the function is always instantiated and exported, whether or not any module in the program references the function. The function is presumed to be imported by another program.  
  
 You can also define as inline a function declared with the **dllimport** attribute. In this case, the function can be expanded (subject to the /Ob (inline) compiler option specification) but never instantiated. In particular, if the address of an inline imported function is taken, the address of the function residing in the DLL is returned. This behavior is the same as taking the address of a non-inline imported function.  
  
 Static local data and strings in inline functions maintain the same identities between the DLL and client as they would in a single program (that is, an executable file without a DLL interface).  
  
 Exercise care when providing imported inline functions. For example, if you update the DLL, don't assume that the client will use the changed version of the DLL. To ensure that you are loading the proper version of the DLL, rebuild the DLL's client as well.  
  
 **END Microsoft Specific**  
  
## See Also  
 [DLL Import and Export Functions](../c-language/dll-import-and-export-functions.md)