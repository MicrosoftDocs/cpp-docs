---
description: "Learn more about: Fatal Error C1011"
title: "Fatal Error C1011"
ms.date: 08/17/2022
f1_keywords: ["C1011"]
helpviewer_keywords: ["C1011"]
---
# Fatal Error C1011

> cannot locate standard module interface. Did you install the library part of the C++ modules feature in VS setup?

## Remarks

Use of standard modules requires the **C++ Modules for *version* build tools** component. You can add the component to your Visual Studio installation by using the Visual Studio Installer.

## To install the C++ Modules build tools

1. Open the Visual Studio Installer. In Visual Studio Installer, choose **Modify** next to your installation of Visual Studio, and then select the **Individual components** tab.

1. In the **Individual components** list, scroll down to **Compilers, build tools, and runtimes** and select the **C++ Modules for *version* build tools** component.

1. Choose **Modify** to continue with the installation.

When installation completes, you're ready to use C++ Modules in Visual Studio.
