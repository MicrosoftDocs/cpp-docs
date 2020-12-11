---
description: "Learn more about: Displaying Assertions"
title: "Displaying Assertions"
ms.date: "05/05/2019"
helpviewer_keywords: ["debugging [ATL], displaying assertions", "assertions, displaying", "debugging assertions", "assertions, debugging"]
ms.assetid: fa353fe8-4656-4384-a5d2-8866bc977f06
---
# Displaying Assertions

If the client connected to your service appears to stop responding, the service may have asserted and displayed a message box that you are not able to see. You can confirm this by using the Visual Studio debugger to debug your code (see [Using Task Manager](../atl/using-task-manager.md) earlier in this section).

If you determine that your service is displaying a message box that you cannot see, you may want to set the **Allow Service to Interact with Desktop** option before using the service again. This option is a startup parameter that permits any message boxes displayed by the service to appear on the desktop. To set this option, open the Services Control Panel application, select the service, click **Startup**, and then select the **Allow Service to Interact with Desktop** option.

## See also

[Debugging Tips](../atl/debugging-tips.md)
