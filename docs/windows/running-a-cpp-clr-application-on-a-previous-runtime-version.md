---
description: "Learn more about: Running a C++ /clr Application on a Previous Runtime Version"
title: "Running a C++ -clr Application on a Previous Runtime Version"
ms.date: "11/04/2016"
helpviewer_keywords: ["applications [C++], runtime version specified", "versions [C++]", "app.config files, runtime version specified", "compatibility [C++], runtime version specified", "backward compatibility [C++], runtime version specified", "application deployment [C++], runtime version specified", "common language runtime [C++], version specified", "deploying applications [C++], runtime version specified"]
ms.assetid: 940171b7-6937-4b14-8e87-c199e23f4f2e
---
# Running a C++ /clr Application on a Previous Runtime Version

Unless otherwise specified, a C++ .NET Framework application is built to run on the common language runtime (CLR) version that the compiler uses to build the application. However, it is possible for an .exe application that is built for one version of the runtime to run on any other version that provides the required functionality.

To accomplish this, provide an app.config file that contains runtime version information in the `supportedRuntime` tag.

At run time, the app.config file must have a name of the form *filename.ext*.config, where *filename.ext* is the name of the executable that started the application, and it must be in the same directory as the executable. For example, if your application is named TestApp.exe, the app.config file would be named TestApp.exe.config.

If you specify more than one runtime version and the application runs on a computer that has more than one installed runtime version, the application uses the first version that is specified in the config file and is installed.

## See also

[Deploying Desktop Applications](deploying-native-desktop-applications-visual-cpp.md)
