---
title: "Creating the Provider | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "OLE DB providers, creating"
ms.assetid: 2506ba8f-010d-4231-aac1-387432f7b6b9
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Creating the Provider
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Creating the Provider](https://docs.microsoft.com/cpp/data/oledb/creating-the-provider).  
  
  
To create an OLE DB provider with the ATL OLE DB Provider Wizard  
  
1.  Right-click the project.  
  
2.  On the shortcut menu, click **Add**, and then click **Add Class**.  
  
3.  In the **Add Class** dialog box, select the **ATL OLE DB Provider** icon, and then click **Open**.  
  
4.  In the ATL OLE DB Provider Wizard, enter a short name for your provider in the **Short Name** box. The following topics use the short name "MyProvider", but you can use another name. The other name boxes populate according to the name you enter.  
  
5.  Edit the other name boxes, if needed. In addition to the object and file names, you can edit the following:  
  
    -   **Coclass**: The name that COM uses to create the provider.  
  
    -   **ProgID**: The programmatic identifier, which is a text string that can be used instead of a GUID.  
  
    -   **Version**: Used with the ProgID and coclass to generate a version-dependent programmatic ID.  
  
6.  Click **Finish**.  
  
## See Also  
 [Creating an OLE DB Provider](../../data/oledb/creating-an-ole-db-provider.md)

