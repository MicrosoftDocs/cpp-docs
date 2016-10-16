---
title: "Common Dialog Classes"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "dialog classes [C++]"
  - "dialog boxes [C++], Windows common dialogs"
  - "common dialog boxes [C++], common dialog classes"
  - "common dialog classes [C++]"
  - "MFC dialog boxes, Windows common dialogs"
  - "Windows common dialogs [C++]"
  - "dialog classes [C++], common"
  - "common dialog boxes [C++]"
ms.assetid: 5c4f6443-896c-4b05-a7df-8169fdadc71d
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
# Common Dialog Classes
In addition to class [CDialog](../mfcref/cdialog-class.md), MFC supplies several classes derived from `CDialog` that encapsulate commonly used dialog boxes, as shown in the following table. The dialog boxes encapsulated are called the "common dialog boxes" and are part of the Windows common dialog library (COMMDLG.DLL). The dialog-template resources and code for these classes are provided in the Windows common dialog boxes that are part of Windows versions 3.1 and later.  
  
### Common Dialog Classes  
  
|Derived dialog class|Purpose|  
|--------------------------|-------------|  
|[CColorDialog](../mfcref/ccolordialog-class.md)|Lets user select colors.|  
|[CFileDialog](../mfcref/cfiledialog-class.md)|Lets user select a filename to open or to save.|  
|[CFindReplaceDialog](../mfcref/cfindreplacedialog-class.md)|Lets user initiate a find or replace operation in a text file.|  
|[CFontDialog](../mfcref/cfontdialog-class.md)|Lets user specify a font.|  
|[CPrintDialog](../mfcref/cprintdialog-class.md)|Lets user specify information for a print job.|  
|[CPrintDialogEx](../mfcref/cprintdialogex-class.md)|Windows 2000 print property sheet.|  
  
 For more information about the common dialog classes, see the individual class names in the *MFC Reference*. MFC also supplies a number of standard dialog classes used for OLE. For information about these classes, see the base class, [COleDialog](../mfcref/coledialog-class.md), in the *MFC Reference*.  
  
 Three other classes in MFC have dialog-like characteristics. For information about classes [CFormView](../mfcref/cformview-class.md), [CRecordView](../mfcref/crecordview-class.md), and [CDaoRecordView](../mfcref/cdaorecordview-class.md), see the classes in the *MFC Reference*. For information about class [CDialogBar](../mfcref/cdialogbar-class.md), see [Dialog Bars](../mfc/dialog-bars.md).  
  
## See Also  
 [Dialog Boxes](../mfc/dialog-boxes.md)   
 [Life Cycle of a Dialog Box](../mfc/life-cycle-of-a-dialog-box.md)   
 [Dialog Boxes in OLE](../mfc/dialog-boxes-in-ole.md)