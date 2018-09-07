---
title: "MFC and ATL | Microsoft Docs"
ms.custom: ""
ms.date: "01/24/2018"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
dev_langs: ["C++"]
ms.assetid: 31b1a3a8-4154-4c4a-af10-fafc23ecdc5c
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# MFC and ATL
The Microsoft Foundation Classes (MFC) provide a C++ object-oriented wrapper over Win32 for rapid development of native desktop applications. The Active Template Library (ATL) is a wrapper library that simplifies COM development and is used extensively for creating ActiveX controls.  
  
You can create MFC or ATL programs with Visual Studio Community Edition or higher. The Express editions do not support MFC or ATL. 

In Visual Studio 2015, Visual C++ is an optional component, and MFC and ATL components are optional sub-components under Visual C++. If you do not select these components when you first install Visual Studio, you will be prompted to install them the first time you attempt to create or open an MFC or ATL project.  

In Visual Studio 2017 and later, MFC and ATL are optional sub-components under the **Desktop development with C++** workload in the Visual Studio Installer program. You can install ATL support without MFC, or combined MFC and ATL support (MFC depends on ATL). For more information about workloads and components, see [Install Visual Studio 2017](/visualstudio/install/install-visual-studio).
  
## Related Articles  
  
|Title|Description|  
|-----------|-----------------|  
|[MFC Desktop Applications](../mfc/mfc-desktop-applications.md)|Microsoft Foundation Classes provide a thin object-oriented wrapper over Win32 to enable rapid development of GUI applications in C++.|  
|[ATL COM Desktop Components](../atl/atl-com-desktop-components.md)|ATL provides class templates and other use constructs to simplify creation of COM objects in C++.|  
|[ATL/MFC Shared Classes](../atl-mfc-shared/atl-mfc-shared-classes.md)|References for [CStringT Class](../atl-mfc-shared/reference/cstringt-class.md) and other classes that are shared by MFC and ATL.|  
|[Working with Resource Files](../windows/working-with-resource-files.md)|The resource editor lets you edit UI resources such as strings, images, and dialog boxes.|  
|[Visual C++](../visual-cpp-in-visual-studio.md)|Parent topic for all C++ content in the MSDN library.|