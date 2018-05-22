---
title: "Adding an ATL OLE DB Consumer | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ATL projects, adding ATL OLE DB consumers"
  - "OLE DB, adding ATL OLE DB consumer to projects"
  - "ATL OLE DB consumers"
ms.assetid: f940a513-4e42-4148-b521-dd0d7dc89fa2
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Adding an ATL OLE DB Consumer
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Adding an ATL OLE DB Consumer](https://docs.microsoft.com/cpp/atl/reference/adding-an-atl-ole-db-consumer).  
  
  
Use this wizard to add an ATL OLE DB consumer to a project. An ATL OLE DB consumer consists of an OLE DB accessor class and data bindings necessary to access a data source. The project must have been created as an ATL COM application, or as an MFC or Win32 application that contains ATL support (which the ATL OLE DB Consumer Wizard adds automatically).  
  
 **Note** You can add an OLE DB consumer to an MFC project. If you do, the ATL OLE DB Consumer Wizard adds the necessary COM support to your project. This assumes that when you created the MFC project, you selected the **ActiveX controls** check box (in the **Advanced Features** page of the MFC Project Application Wizard), which is checked by default. Selecting this option ensures that the application calls **CoInitialize** and **CoUninitialize**. If you did not select **ActiveX controls** when you created the MFC project, you need to call **CoInitialize** and **CoUninitialize** in your main code.  
  
### To add an ATL OLE DB consumer to your project  
  
1.  In Class View, right-click the project. On the shortcut menu, click **Add** and then click **Add Class**.  
  
2.  In the Visual C++ folder, double-click the **ATL OLE DB Consumer** icon or select it and click **Open**.  
  
     The ATL OLE DB Consumer Wizard opens.  
  
3.  Define settings as described in [ATL OLE DB Consumer Wizard](../../atl/reference/atl-ole-db-consumer-wizard.md).  
  
4.  Click **Finish** to close the wizard. The newly created OLE DB consumer code will be inserted in your project.  
  
## See Also  
 [Adding Functionality with Code Wizards](../../ide/adding-functionality-with-code-wizards-cpp.md)





