---
description: "Learn more about: Building C/C++ Isolated Applications"
title: "Building C/C++ Isolated Applications"
ms.date: "05/06/2019"
helpviewer_keywords: ["isolated applications [C++]"]
ms.assetid: 8a2fe4fa-0489-433e-bfc6-495844d8d73a
---
# Building C/C++ Isolated Applications

An isolated application depends only on side-by-side assemblies and binds to its dependencies using a manifest. It is not required for your application to be fully isolated in order to run properly on Windows; however, by investing in making your application fully isolated, you may save time if you need to service your application in the future. For more information on the advantages of making your application fully isolated, see [Isolated Applications](/windows/win32/SbsCs/isolated-applications).

When you build your native C/C++ application using Visual Studio, by default the Visual Studio project system generates a manifest file that describes your application's dependencies on Visual Studio libraries. If these are the only dependencies your application has, then it becomes an isolated application as soon as it is rebuilt with Visual Studio. If your application is using other libraries at runtime, then you may need to rebuild those libraries as side-by-side assemblies following the steps described in [Building C/C++ Side-by-side Assemblies](building-c-cpp-side-by-side-assemblies.md).

## See also

[Concepts of Isolated Applications and Side-by-side Assemblies](concepts-of-isolated-applications-and-side-by-side-assemblies.md)<br/>
[Building C/C++ Isolated Applications and Side-by-side Assemblies](building-c-cpp-isolated-applications-and-side-by-side-assemblies.md)
