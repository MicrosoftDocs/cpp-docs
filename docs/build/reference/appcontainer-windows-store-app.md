---
description: "Learn more about: /APPCONTAINER (Microsoft Store App)"
title: "/APPCONTAINER (UWP/Microsoft Store App)"
ms.date: "11/04/2016"
ms.assetid: 9a432db5-7640-460b-ab18-6f61fa7daf6f
---
# /APPCONTAINER (Microsoft Store App)

Specifies whether the linker creates an executable image that must be run in an app container.

## Syntax

```
/APPCONTAINER[:NO]
```

## Remarks

By default, /APPCONTAINER is off.

This option modifies an executable to indicate whether the app must be run in the appcontainer process-isolation environment. Specify /APPCONTAINER for an app that must run in the appcontainer environment—for example, a Universal Windows Platform (UWP) or Windows Phone 8.x app. (The option is set automatically in Visual Studio when you create a Universal Windows app from a template.) For a desktop app, specify /APPCONTAINER:NO or just omit the option.

The /APPCONTAINER option was introduced in Windows 8.

### To set this linker option in Visual Studio

1. Open the project **Property Pages** dialog box. For more information, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Expand the **Configuration Properties** node.

1. Expand the **Linker** node.

1. Select the **Command Line** property page.

1. In **Additional Options**, enter `/APPCONTAINER` or `/APPCONTAINER:NO`.

## See also

[MSVC linker reference](linking.md)<br/>
[MSVC Linker Options](linker-options.md)
