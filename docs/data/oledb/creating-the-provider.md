---
title: "Creating the Provider | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
dev_langs: ["C++"]
helpviewer_keywords: ["OLE DB providers, creating"]
ms.assetid: 2506ba8f-010d-4231-aac1-387432f7b6b9
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# Creating the Provider

#### To create an OLE DB provider with the ATL OLE DB Provider Wizard  
  
1. Right-click the project.  
  
1. On the shortcut menu, click **Add**, and then click **Add Class**.  
  
1. In the **Add Class** dialog box, select the **ATL OLE DB Provider** icon, and then click **Open**.  
  
1. In the ATL OLE DB Provider Wizard, enter a short name for your provider in the **Short Name** box. The following topics use the short name "MyProvider", but you can use another name. The other name boxes populate according to the name you enter.  
  
1. Edit the other name boxes, if needed. In addition to the object and file names, you can edit the following:  
  
    -   **Coclass**: The name that COM uses to create the provider.  
  
    -   **ProgID**: The programmatic identifier, which is a text string that can be used instead of a GUID.  
  
    -   **Version**: Used with the ProgID and coclass to generate a version-dependent programmatic ID.  
  
1. Click **Finish**.  
  
## See Also  

[Creating an OLE DB Provider](../../data/oledb/creating-an-ole-db-provider.md)