---
title: "Building C/C++ Isolated Applications | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["isolated applications [C++]"]
ms.assetid: 8a2fe4fa-0489-433e-bfc6-495844d8d73a
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Building C/C++ Isolated Applications
An isolated application depends only on side-by-side assemblies and binds to its dependencies using a manifest. It is not required for your application to be fully isolated in order to run properly on Windows; however, by investing in making your application fully isolated, you may save time if you need to service your application in the future. For more information on the advantages of making your application fully isolated, see [Isolated Applications](http://msdn.microsoft.com/library/aa375190).  
  
 When you build your native C/C++ application using Visual C++, by default the Visual Studio project system generates a manifest file that describes your application's dependencies on Visual C++ libraries. If these are the only dependencies your application has, then it becomes an isolated application as soon as it is rebuilt with Visual Studio. If your application is using other libraries at runtime, then you may need to rebuild those libraries as side-by-side assemblies following the steps described in [Building C/C++ Side-by-side Assemblies](../build/building-c-cpp-side-by-side-assemblies.md).  
  
## See Also  
 [Concepts of Isolated Applications and Side-by-side Assemblies](../build/concepts-of-isolated-applications-and-side-by-side-assemblies.md)   
 [Building C/C++ Isolated Applications and Side-by-side Assemblies](../build/building-c-cpp-isolated-applications-and-side-by-side-assemblies.md)