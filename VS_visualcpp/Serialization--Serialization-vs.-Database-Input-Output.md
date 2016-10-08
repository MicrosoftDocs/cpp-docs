---
title: "Serialization: Serialization vs. Database Input-Output"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
H1: Serialization: Serialization vs. Database Input/Output
ms.assetid: f1d23d77-4761-4a52-a7ea-54fc92d347ea
caps.latest.revision: 7
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Serialization: Serialization vs. Database Input-Output
This article explains when to use document objects and serialization for file-based input/output (I/O) and when other I/O techniques are appropriate — because the application reads and writes data on a per-transaction basis, as in database applications. If you don't use serialization, you also won't need the File Open, Save, and Save As commands. Topics covered include:  
  
-   [Recommendations for handling input/output](../VS_visualcpp/Recommendations-for-Handling-Input-Output.md)  
  
-   [Handling the File menu in database applications](../VS_visualcpp/File-Menu-in-an-MFC-Database-Application.md)  
  
## See Also  
 [Serialization](../VS_visualcpp/Serialization-in-MFC.md)