---
description: "Learn more about: /APPCONTAINER (Microsoft Store app)"
title: "/APPCONTAINER (UWP/Microsoft Store app)"
ms.date: 05/11/2022
ms.assetid: 9a432db5-7640-460b-ab18-6f61fa7daf6f
---
# `/APPCONTAINER` (Microsoft Store app)

Specifies whether the linker creates an executable image that must run in an AppContainer environment.

## Syntax

> **`/APPCONTAINER`**\[**`:NO`**]

## Remarks

The **`/APPCONTAINER`** linker option modifies an executable to indicate whether the app must run in the AppContainer process-isolation environment. Specify **`/APPCONTAINER`** for an app that must run in the AppContainer environment—for example, a Universal Windows Platform (UWP) or Windows Phone 8.x app. The option is set automatically in Visual Studio when you create a Universal Windows app from a template. For a desktop app, specify **`/APPCONTAINER:NO`** or just omit the option. By default, **`/APPCONTAINER`** is off.

The **`/APPCONTAINER`** option was introduced in Windows 8.

### To set this linker option in Visual Studio

1. Open the project **Property Pages** dialog box. For more information, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **Command Line** property page.

1. In **Additional Options**, enter *`/APPCONTAINER`* or *`/APPCONTAINER:NO`*.

## See also

[MSVC linker reference](linking.md)\
[MSVC linker options](linker-options.md)
