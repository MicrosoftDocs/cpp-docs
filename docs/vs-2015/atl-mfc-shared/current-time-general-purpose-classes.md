---
title: "Current Time: General Purpose Classes | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "time, setting current"
  - "current time, CTime object"
  - "procedures, getting current time"
  - "initializing objects, with the current time"
  - "time, getting current"
ms.assetid: c39e6775-6a92-4b27-95a7-5c86ed371d8a
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Current Time: General Purpose Classes
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Current Time: General Purpose Classes](https://docs.microsoft.com/cpp/atl-mfc-shared/current-time-general-purpose-classes).  
  
  
The following procedure shows how to create a `CTime` object and initialize it with the current time.  
  
#### To get the current time  
  
1.  Allocate a `CTime` object, as follows:  
  
     [!code-cpp[NVC_ATLMFC_Utilities#171](../snippets/cpp/VS_Snippets_Cpp/NVC_ATLMFC_Utilities/Cpp/NVC_ATLMFC_Utilities.cpp#171)]  
  
    > [!NOTE]
    >  Uninitialized `CTime` objects are not initialized to a valid time.  
  
2.  Call the `CTime::GetCurrentTime` function to get the current time from the operating system. This function returns a `CTime` object that can be used to set the value of `CTime`, as follows:  
  
     [!code-cpp[NVC_ATLMFC_Utilities#172](../snippets/cpp/VS_Snippets_Cpp/NVC_ATLMFC_Utilities/Cpp/NVC_ATLMFC_Utilities.cpp#172)]  
  
     Since `GetCurrentTime` is a static member function from the `CTime` class, you must qualify its name with the name of the class and the scope resolution operator (`::`), `CTime::GetCurrentTime()`.  
  
 Of course, the two steps outlined previously could be combined into a single program statement as follows:  
  
 [!code-cpp[NVC_ATLMFC_Utilities#173](../snippets/cpp/VS_Snippets_Cpp/NVC_ATLMFC_Utilities/Cpp/NVC_ATLMFC_Utilities.cpp#173)]  
  
## See Also  
 [Date and Time: General-Purpose Classes](../atl-mfc-shared/date-and-time-general-purpose-classes.md)










