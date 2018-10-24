---
title: "Creating a Project for the Provider | Microsoft Docs"
ms.custom: ""
ms.date: "10/22/2018"
ms.technology: ["cpp-data"]
ms.topic: "reference"
dev_langs: ["C++"]
helpviewer_keywords: ["ATL projects, creating", "OLE DB providers, projects", "projects [C++], creating"]
ms.assetid: 076a75de-1d4b-486a-bcf8-9c0f6b049fa2
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# Creating a Project for the Provider

## To create a project in which the OLE DB provider will reside  
  
1. From the **File** menu, click **New**, and then click **Project**.  
  
     The **New Project** dialog box appears.  
  
1. In the **Project Types** pane, click the **Installed** > **Visual C++** > **MFC/ATL** folder. In the **Templates** pane, click **ATL Project**.  

    > [!NOTE]
    > In previous versions of Visual Studio, find the project type under **Installed** > **Templates** > **Visual C++** > **ATL**.
  
1. In the **Name** box, enter a name for the project, and then click **OK**.  
  
     The **ATL Project Wizard** appears.  
  
1. In the **ATL Project Wizard**, choose **Dynamic-Link Library (DLL)** for **Application Type**.  
  
1. Click **Finish**.  
  
## See Also  

[Creating an OLE DB Provider](../../data/oledb/creating-an-ole-db-provider.md)