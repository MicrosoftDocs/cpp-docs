---
title: "Android Debugger | Microsoft Docs"
ms.custom: ""
ms.date: "9/26/2017"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "vs-ide-general"
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 789f7a1c-38b4-41d0-809b-14f4d96c8116
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
f1_keywords:
  - VC.Project.AndroidDebugger.DebuggerType
  - VC.Project.AndroidDebugger.AndroidDeviceID
  - VC.Project.AndroidDebugger.PackagePath
  - VC.Project.AndroidDebugger.LaunchActivity
  - VC.Project.AndroidDebugger.LaunchActivity
  - VC.Project.AndroidDebugger.LaunchActivity
---

# Android Debugger

Property | Description | Choices
--- | ---| ---
Debugger Type | Specifies which code type to debug. | **Native Only**<br>**Java Only**<br>
Debug Target | Specifies the emulator or device to use for debugging. If no emulators are running, then please use 'Android Virtual Device (AVD) Manager' to start a device.
Package to Launch | Specifies the location of the .apk that will be debugged. Choose this option to specify that a specific Package (APK) should be started when the application is debugged.
Launch Activity | The Android activity to use to launch the application, has to match the one used in manifest. Press Apply to retrieve the list from AndroidManifest.xml and populate it dynamically.
Additional Symbol Search Paths | Additional search path for debug symbols.
Additional Java Source Search Paths | Additional search paths for Java source files. (Applies only when Debugger Type is Java Only.)
