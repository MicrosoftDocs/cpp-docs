---
title: "Creating the Project (ATL Tutorial, Part 1) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "get-started-article"
dev_langs: 
  - "C++"
ms.assetid: f6b727d1-390a-4b27-b82f-daadcd9fc059
caps.latest.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Creating the Project (ATL Tutorial, Part 1)
This tutorial walks you step-by-step through a nonattributed ATL project that creates an ActiveX object that displays a polygon. The object includes options for allowing the user to change the number of sides making up the polygon, and code to refresh the display.  
  
> [!NOTE]
>  ATL and MFC are not generally supported in the Express editions of Visual Studio.  
  
> [!NOTE]
>  This tutorial creates the same source code as the Polygon sample. If you want to avoid entering the source code manually, you can download it from the [Polygon sample abstract](../visual-cpp-samples.md). You can then refer to the Polygon source code as you work through the tutorial, or use it to check for errors in your own project.  
  
### To create the initial ATL project using the ATL Project Wizard  
  
1.  In the Visual Studio development environment, click **New** on the **File** menu, and then click **Project**.  
  
2.  Click the **Visual C++ Projects** folder and select **ATL Project**.  
  
3.  Type `Polygon` as the project name.  
  
     The location for the source code will usually default to My Documents\Visual Studio Projects, and a new folder will be created automatically.  
  
4.  Click **OK** and the ATL Project Wizard opens.  
  
5.  Click **Application Settings** to see the options available.  
  
6.  As you are creating a control, and a control must be an in-process server, leave the **Application type** as a DLL.  
  
7.  Leave the other options at their default values, and click **Finish**.  
  
 The ATL Project Wizard will create the project by generating several files. You can view these files in Solution Explorer by expanding the Polygon object. The files are listed below.  
  
|File|Description|  
|----------|-----------------|  
|Polygon.cpp|Contains the implementation of `DllMain`, `DllCanUnloadNow`, `DllGetClassObject`, `DllRegisterServer`, and `DllUnregisterServer`. Also contains the object map, which is a list of the ATL objects in your project. This is initially blank.|  
|Polygon.def|This module-definition file provides the linker with information about the exports required by your DLL.|  
|Polygon.idl|The interface definition language file, which describes the interfaces specific to your objects.|  
|Polygon.rgs|This registry script contains information for registering your program's DLL.|  
|Polygon.rc|The resource file, which initially contains the version information and a string containing the project name.|  
|Resource.h|The header file for the resource file.|  
|Polygonps.def|This module definition file provides the linker with information about the exports required by the proxy and stub code that support calls across apartments.|  
|stdafx.cpp|The file that will `#include` the ATL implementation files.|  
|stdafx.h|The file that will `#include` the ATL header files.|  
  
1.  In Solution Explorer, right-click the `Polygon` project.  
  
2.  On the shortcut menu, click **Properties**.  
  
3.  Click on **Linker**. Change the **Per-UserRedirection** option to **Yes**.  
  
4.  Click **OK**.  
  
 In the next step, you will add a control to your project.  
  
 [On to Step 2](../atl/adding-a-control-atl-tutorial-part-2.md)  
  
## See Also  
 [Tutorial](../atl/active-template-library-atl-tutorial.md)

