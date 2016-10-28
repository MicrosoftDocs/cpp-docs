---
title: "OLE Common Dialog Classes"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "vc.classes.ole"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ActiveX classes [C++]"
  - "dialog classes [C++], OLE"
  - "OLE common dialog classes [C++]"
  - "common dialog classes"
ms.assetid: 706526ae-f94f-4909-a0f8-6b5fe954fd97
caps.latest.revision: 7
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
# OLE Common Dialog Classes
These classes handle common OLE tasks by implementing a number of standard OLE dialog boxes. They also provide a consistent user interface for OLE functionality.  
  
 [COleDialog](../mfcref/coledialog-class.md)  
 Used by the framework to contain common implementations for all OLE dialog boxes. All dialog box classes in the user-interface category are derived from this base class. `COleDialog` cannot be used directly.  
  
 [COleInsertDialog](../mfcref/coleinsertdialog-class.md)  
 Displays the Insert Object dialog box, the standard user interface for inserting new OLE linked or embedded items.  
  
 [COlePasteSpecialDialog](../mfcref/colepastespecialdialog-class.md)  
 Displays the Paste Special dialog box, the standard user interface for implementing the Edit Paste Special command.  
  
 [COleLinksDialog](../mfcref/colelinksdialog-class.md)  
 Displays the Edit Links dialog box, the standard user interface for modifying information about linked items.  
  
 [COleChangeIconDialog](../mfcref/colechangeicondialog-class.md)  
 Displays the Change Icon dialog box, the standard user interface for changing the icon associated with an OLE embedded or linked item.  
  
 [COleConvertDialog](../mfcref/coleconvertdialog-class.md)  
 Displays the Convert dialog box, the standard user interface for converting OLE items from one type to another.  
  
 [COlePropertiesDialog](../mfcref/colepropertiesdialog-class.md)  
 Encapsulates the Windows common OLE Properties dialog box. Common OLE Properties dialog boxes provide an easy way to display and modify the properties of an OLE document item in a manner consistent with Windows standards.  
  
 [COleUpdateDialog](../mfcref/coleupdatedialog-class.md)  
 Displays the Update dialog box, the standard user interface for updating all links in a document. The dialog box contains a progress indicator to indicate how close the update procedure is to completion.  
  
 [COleChangeSourceDialog](../mfcref/colechangesourcedialog-class.md)  
 Displays the Change Source dialog box, the standard user interface for changing the destination or source of a link.  
  
 [COleBusyDialog](../mfcref/colebusydialog-class.md)  
 Displays the Server Busy and Server Not Responding dialog boxes, the standard user interface for handling calls to busy applications. Usually displayed automatically by the `COleMessageFilter` implementation.  
  
## See Also  
 [Class Overview](../mfc/class-library-overview.md)