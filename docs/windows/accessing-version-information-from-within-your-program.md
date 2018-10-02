---
title: "Accessing Version Information from Within Your Program (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
f1_keywords: ["vc.editors.version"]
dev_langs: ["C++"]
helpviewer_keywords: ["VerQueryValue", "version information, accessing from within programs", "GetFileVersionInfo", "version information"]
ms.assetid: 18622333-d9e8-4309-9465-677cd10c79b1
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Accessing Version Information from Within Your Program (C++)

### To access version information from within your program

1. If you want to access the version information from within your program, use the [GetFileVersionInfo](/windows/desktop/api/winver/nf-winver-getfileversioninfoa) function and the [VerQueryValue](/windows/desktop/api/winver/nf-winver-verqueryvaluea) function.

For information on adding resources to managed projects, please see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).

## Requirements

Win32

## See Also

[Version Information Editor](../windows/version-information-editor.md)<br/>
[Version Information (Windows)](https://msdn.microsoft.com/library/windows/desktop/ms646981.aspx)