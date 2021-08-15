---
description: "Learn more about: /APPCONTAINER"
title: "/APPCONTAINER"
ms.date: "11/04/2016"
f1_keywords: ["/APPCONTAINER"]
helpviewer_keywords: ["APPCONTAINER editbin option", "-APPCONTAINER editbin option", "/APPCONTAINER editbin option"]
ms.assetid: 0ca4f1ec-c8de-4a37-b3e2-deda7af0bb88
---
# /APPCONTAINER

Marks an executable that must run in an app container—for example, a Microsoft Store or Universal Windows app.

```

/APPCONTAINER[:NO]
```

## Remarks

An executable that has the **/APPCONTAINER** option set can only be run in an app container, which is the process-isolation environment introduced in Windows 8. For Microsoft Store and Universal Windows apps, this option must be set.

## See also

[EDITBIN Options](editbin-options.md)<br/>
[What's a Universal Windows App?](/windows/uwp/get-started/universal-application-platform-guide)
