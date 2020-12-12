---
description: "Learn more about: Common Dialog Classes"
title: "Common Dialog Classes"
ms.date: "11/04/2016"
helpviewer_keywords: ["dialog classes [MFC]", "dialog boxes [MFC], Windows common dialogs", "common dialog boxes [MFC], common dialog classes", "common dialog classes [MFC]", "MFC dialog boxes [MFC], Windows common dialogs", "Windows common dialogs [MFC]", "dialog classes [MFC], common", "common dialog boxes [MFC]"]
ms.assetid: 5c4f6443-896c-4b05-a7df-8169fdadc71d
---
# Common Dialog Classes

In addition to class [CDialog](reference/cdialog-class.md), MFC supplies several classes derived from `CDialog` that encapsulate commonly used dialog boxes, as shown in the following table. The dialog boxes encapsulated are called the "common dialog boxes" and are part of the Windows common dialog library (COMMDLG.DLL). The dialog-template resources and code for these classes are provided in the Windows common dialog boxes that are part of Windows versions 3.1 and later.

### Common Dialog Classes

|Derived dialog class|Purpose|
|--------------------------|-------------|
|[CColorDialog](reference/ccolordialog-class.md)|Lets user select colors.|
|[CFileDialog](reference/cfiledialog-class.md)|Lets user select a filename to open or to save.|
|[CFindReplaceDialog](reference/cfindreplacedialog-class.md)|Lets user initiate a find or replace operation in a text file.|
|[CFontDialog](reference/cfontdialog-class.md)|Lets user specify a font.|
|[CPrintDialog](reference/cprintdialog-class.md)|Lets user specify information for a print job.|
|[CPrintDialogEx](reference/cprintdialogex-class.md)|Windows Print property sheet.|

For more information about the common dialog classes, see the individual class names in the *MFC Reference*. MFC also supplies a number of standard dialog classes used for OLE. For information about these classes, see the base class, [COleDialog](reference/coledialog-class.md), in the *MFC Reference*.

Three other classes in MFC have dialog-like characteristics. For information about classes [CFormView](reference/cformview-class.md), [CRecordView](reference/crecordview-class.md), and [CDaoRecordView](reference/cdaorecordview-class.md), see the classes in the *MFC Reference*. For information about class [CDialogBar](reference/cdialogbar-class.md), see [Dialog Bars](dialog-bars.md).

## See also

[Dialog Boxes](dialog-boxes.md)<br/>
[Working with Dialog Boxes in MFC](life-cycle-of-a-dialog-box.md)<br/>
[Dialog Boxes in OLE](dialog-boxes-in-ole.md)
