---
title: "Running the Program as a Local Server | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-atl"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["debugging [ATL], running services as local server", "ATL services, running as local servers"]
ms.assetid: eb9701e6-e2a8-4666-897f-0c893aec8ac7
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Running the Program as a Local Server
If running the program as a service is inconvenient, you can temporarily change the registry so that the program is run as a normal local server. Simply rename the `LocalService` value under your AppID to `_LocalService` and ensure the `LocalServer32` key under your CLSID is set correctly. (Note that using DCOMCNFG to specify that your application should be run on a different computer renames your `LocalServer32` key to `_LocalServer32`.) Running your program as a local server takes a few more seconds on startup because the call to `StartServiceCtrlDispatcher` in `CAtlServiceModuleT::Start` takes a few seconds before it fails.  
  
## See Also  
 [Debugging Tips](../atl/debugging-tips.md)

