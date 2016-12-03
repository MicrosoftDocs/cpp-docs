---
title: "Dialog Boxes in OLE | Microsoft Docs"
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
  - "MFC dialog boxes, OLE dialog boxes"
  - "OLE dialog boxes"
  - "dialog boxes"
  - "OLE dialog boxes, about OLE dialog boxes"
  - "dialog boxes, about dialog boxes"
  - "dialog boxes, OLE"
  - "Insert object"
ms.assetid: 73c41eb8-738a-4d02-9212-d3395bb09a3a
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
# Dialog Boxes in OLE
While a user runs an OLE-enabled application, there are times when the application needs information from the user in order to carry out the operation. The MFC OLE classes provide a number of dialog boxes to gather the required information. This topic lists the tasks handled by the OLE dialog boxes and the classes needed to display those dialog boxes. For details on OLE dialog boxes and the structures used to customize their behavior, see [MFC Reference](../mfc/mfc-desktop-applications.md).  
  
 *Insert Object*  
 This dialog box allows the user to insert newly created or existing objects into the compound document. It also allows the user to choose to display the item as an icon and enables the Change Icon command button. Display this dialog box when the user chooses Insert Object from the Edit menu. Use the [COleInsertDialog](../mfc/reference/coleinsertdialog-class.md) class to display this dialog box. Note that you cannot insert an MDI application into itself. An application that is a container/server cannot be inserted into itself unless it is an SDI application.  
  
 *Paste Special*  
 This dialog box allows the user to control the format used when pasting data into a compound document. The user can choose the format of the data, whether to embed or link the data, and whether to display it as an icon. Display this dialog box when the user chooses Paste Special from the Edit menu. Use the [COlePasteSpecialDialog](../mfc/reference/colepastespecialdialog-class.md) class to display this dialog box.  
  
 *Change Icon*  
 This dialog box allows the user to select which icon is displayed to represent the linked or embedded item. Display this dialog box when the user chooses Change Icon from the Edit menu or chooses the Change Icon button in either the Paste Special or Convert dialog boxes. Also display it when the user opens the Insert Object dialog box and chooses Display as Icon. Use the [COleChangeIconDialog](../mfc/reference/colechangeicondialog-class.md) class to display this dialog box.  
  
 *Convert*  
 This dialog box allows the user to change the type of an embedded or linked item. For example, if you have embedded a metafile in a compound document and later want to use another application to modify the embedded metafile, you can use the Convert dialog box. This dialog box is usually displayed by clicking *item type* Object on the Edit menu and then, on the cascading menu, clicking Convert. Use the [COleConvertDialog](../mfc/reference/coleconvertdialog-class.md) class to display this dialog box. For an example, run the MFC OLE sample [OCLIENT](../visual-cpp-samples.md).  
  
 *Edit Links or Update Links*  
 The Edit Links dialog box allows the user to change information about the source of a linked object. The Update Links dialog box verifies the sources of all the linked items in the current dialog box and displays the Edit Links dialog box if necessary. Display the Edit Links dialog box when the user chooses Links from the Edit menu. The Update Links dialog box is usually displayed when a compound document is first opened. Use either the [COleLinksDialog](../mfc/reference/colelinksdialog-class.md) or the [COleUpdateDialog](../mfc/reference/coleupdatedialog-class.md) class, depending on which dialog box you want to display.  
  
 *Server Busy or Server Not Responding*  
 The Server Busy dialog box is displayed when the user attempts to activate an item and the server is currently unable to handle the request, usually because the server is in use by another user or task. The Server Not Responding dialog box is displayed if the server does not respond to the activation request at all. These dialog boxes are displayed via `COleMessageFilter`, based on an implementation of the OLE interface **IMessageFilter**, and the user can decide whether to attempt the activation request again. Use the [COleBusyDialog](../mfc/reference/colebusydialog-class.md) class to display this dialog box.  
  
## See Also  
 [Dialog Boxes](../mfc/dialog-boxes.md)   
 [Life Cycle of a Dialog Box](../mfc/life-cycle-of-a-dialog-box.md)   
 [OLE](../mfc/ole-in-mfc.md)

