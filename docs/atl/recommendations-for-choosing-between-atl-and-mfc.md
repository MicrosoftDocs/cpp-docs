---
title: "Recommendations for Choosing Between ATL and MFC | Microsoft Docs"
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
  - "MFC, ATL support"
  - "ATL, vs. MFC"
ms.assetid: 269325bb-11a8-4330-ad2b-a14a2458679e
caps.latest.revision: 10
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
# Recommendations for Choosing Between ATL and MFC
When developing components and applications, you can choose between two approaches — ATL and MFC (the Microsoft Foundation Class Library).  
  
## Using ATL  
 ATL is a fast, easy way to both create a COM component in C++ and maintain a small footprint. Use ATL to create a control if you don't need all of the built-in functionality that MFC automatically provides.  
  
## Using MFC  
 MFC allows you to create full applications, ActiveX controls, and active documents. If you have already created a control with MFC, you may want to continue development in MFC. When creating a new control, consider using ATL if you don't need all of MFC's built-in functionality.  
  
## Using ATL in an MFC Project  
 You can add support for using ATL in an existing MFC project by running a wizard. For details, see [Adding ATL Support to Your MFC Project](../mfc/reference/adding-atl-support-to-your-mfc-project.md).  
  
## See Also  
 [Introduction to ATL](../atl/introduction-to-atl.md)

