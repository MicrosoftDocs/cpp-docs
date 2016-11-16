---
title: "Benefits and Tradeoffs of the Method Used to Link to the CRT | Microsoft Docs"
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
  - "_ATL_MIN_CRT macro"
ms.assetid: 49b485f7-9487-49e4-b12a-0f710b620e2b
caps.latest.revision: 12
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
# Benefits and Tradeoffs of the Method Used to Link to the CRT
Your project can link with the CRT either dynamically or statically. The table below outlines the benefits and tradeoffs involved in choosing which method to use.  
  
|Method|Benefit|Tradeoff|  
|------------|-------------|--------------|  
|Statically linking to the CRT<br /><br /> (**Runtime Library** set to **Single-threaded**)|The CRT DLL is not required on the system where the image will run.|About 25K of startup code is added to your image, substantially increasing its size.|  
|Dynamically linking to the CRT<br /><br /> (**Runtime Library** set to **Multi-threaded**)|Your image does not require the CRT startup code, so it is much smaller.|The CRT DLL must be on the system running the image.|  
  
 The topic [Linking to the CRT in Your ATL Project](../atl/linking-to-the-crt-in-your-atl-project.md) discusses how to select the manner in which to link to the CRT.  
  
## See Also  
 [Programming with ATL and C Run-Time Code](../atl/programming-with-atl-and-c-run-time-code.md)   
 [Run-Time Library Behavior](../build/run-time-library-behavior.md)   
 [CRT Library Features](../c-runtime-library/crt-library-features.md)

