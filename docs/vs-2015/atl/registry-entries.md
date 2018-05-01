---
title: "Registry Entries | Microsoft Docs"
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
helpviewer_keywords: 
  - "registry, ATL services entries"
  - "registry, application IDs"
ms.assetid: 881989b7-61bb-459a-a13e-3bfcb33e184e
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Registry Entries
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Registry Entries (ATL)](https://docs.microsoft.com/cpp/atl/registry-entries).  
  
  
DCOM introduced the concept of Application IDs (AppIDs), which group configuration options for one or more DCOM objects into a centralized location in the registry. You specify an AppID by indicating its value in the AppID named value under the object's CLSID.  
  
 By default, an ATL-generated service uses its CLSID as the GUID for its AppID. Under `HKEY_CLASSES_ROOT\AppID`, you can specify DCOM-specific entries. Initially, two entries exist:  
  
-   `LocalService`, with a value equal to the name of the service. If this value exists, it is used instead of the `LocalServer32` key under the CLSID.  
  
-   `ServiceParameters`, with a value equal to `–Service`. This value specifies parameters that will be passed to the service when it is started. Note that these parameters are passed to the service's `ServiceMain` function, not `WinMain`.  
  
 Any DCOM service also needs to create another key under `HKEY_CLASSES_ROOT\AppID`. This key is equal to the name of the EXE and acts as a cross-reference, as it contains an AppID value pointing back to the AppID entries.  
  
## See Also  
 [Services](../atl/atl-services.md)





