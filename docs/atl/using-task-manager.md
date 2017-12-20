---
title: "Using Task Manager | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: ["C++"]
helpviewer_keywords: ["Task Manager", "breakpoints, Task Manager", "debugging [ATL], using Task Manager"]
ms.assetid: 773fccd5-308d-42c2-a17f-60ae94989062
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# Using Task Manager
One of the simplest ways to debug a service is through the use of the Task Manager in Windows NT 4.0 or Windows 2000. While the service is running, start the Task Manager and click the **Processes** tab. Right-click the name of the EXE and then click **Debug**. This launches Visual C++ attached to that running process. Now, click **Break** on the **Debug** menu to allow you to set breakpoints in your code. Click **Run** to run to your selected breakpoints.  
  
## See Also  
 [Debugging Tips](../atl/debugging-tips.md)

