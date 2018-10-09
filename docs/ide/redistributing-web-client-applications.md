---
title: "Redistributing Web Client Applications | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-ide"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["Web applications [C++], redistributing", "deploying applications [C++], Web applications", "Internet applications [C++], redistributing", "application deployment [C++], Web applications"]
ms.assetid: fe05988b-dee8-4a46-b381-016b5103a6bf
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Redistributing Web Client Applications

If your application uses the MFC classes implementing the WebBrowser control (for example, `CHtmlView` or `CHtmlEditView`), Microsoft Internet Explorer 4.0 or later must at least be minimally installed on the target computer.

Installing the latest version of Internet Explorer also ensures that the target computer has the latest common control files. For more information, see [Install and Deploy Internet Explorer 11](/internet-explorer/ie11-deploy-guide/install-and-deploy-ie11).

## See Also

[Deploying Desktop Applications](../ide/deploying-native-desktop-applications-visual-cpp.md)