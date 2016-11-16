---
title: "What optimization techniques should I use to improve the client application&#39;s performance when loading? | Microsoft Docs"
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
helpviewer_keywords: 
  - "DLLs [C++], optimizing"
  - "performance [C++], DLLs"
  - "optimization [C++], DLLs"
ms.assetid: 2f8bbfb5-08b9-4a35-8302-25a1966881b1
caps.latest.revision: 8
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
# What optimization techniques should I use to improve the client application&#39;s performance when loading?
If your DLL is a regular DLL that is statically linked to MFC, changing it to a regular DLL that is dynamically linked to MFC reduces the file size.  
  
 If the DLL has a large number of exported functions, use a .def file to export the functions (instead of using **__declspec(dllexport)**) and use the .def file [NONAME attribute](../build/exporting-functions-from-a-dll-by-ordinal-rather-than-by-name.md) on each exported function. The NONAME attribute causes only the ordinal value and not the function name to be stored in the DLL's export table, which reduces the file size.  
  
 DLLs that are implicitly linked to an application are loaded when the application loads. To improve the performance when loading, try dividing the DLL into different DLLs. Put all the functions that the calling application needs immediately after loading into one DLL and have the calling application implicitly link to that DLL. Put the other functions that the calling application does not need right away into another DLL and have the application explicitly link to that DLL. For more information, see [Determining Which Linking Method to Use](../build/determining-which-linking-method-to-use.md).  
  
## See Also  
 [DLL Frequently Asked Questions](../build/dll-frequently-asked-questions.md)