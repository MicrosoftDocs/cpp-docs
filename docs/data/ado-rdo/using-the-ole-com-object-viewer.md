---
title: "Using the OLE-COM Object Viewer | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ActiveX controls [C++], viewing internal interfaces"
  - "OLE/COM Object Viewer"
  - "Object Viewer for Automation objects"
ms.assetid: a3359e31-2869-451d-9571-129b4e8b41f0
caps.latest.revision: 10
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
# Using the OLE/COM Object Viewer
You can use the OLE/COM Object Viewer to view a control's interfaces.  
  
### To use the OLE/COM Object Viewer  
  
1.  Start the OLE/COM Object Viewer (oleview.exe), which is located in the \Program Files (x86)\Windows Kits\8.0\bin\x86\ folder.  
  
2.  In the **Object Classes, Grouped by Component** category in the viewer, open the **Automation Objects** folder to view the registered Automation objects.  
  
3.  Select one of the controls. Several tabs appear in the right pane; the interfaces that are implemented by the control are displayed on the **Registry** tab.  
  
    -   If you open the shortcut menu for a control in the left pane and then choose **View Type Information**, the ITypeInfo Viewer displays a reconstructed .idl or .odl file.  
  
    -   If you expand the control node in the left pane, a list of the interfaces in the object is displayed. If you select an interface, its registry entry is displayed in the right pane.  
  
    -   If you open the shortcut menu for an interface and then choose **View**, the OLE/COM Object Viewer displays a dialog box that shows the GUID for the interface and an option to view type library information, if it is available. Selecting **View Type Info** displays a portion of a reconstructed .idl file that is specific to the interface in the ITypeInfo Viewer.  
  
    -   In the ITypeInfo Viewer, you can select an interface member in the tree view to display the accessor method signatures in the right pane.  
  
## See Also  
 [Using ActiveX Controls](../../data/ado-rdo/using-activex-controls.md)