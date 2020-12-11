---
description: "Learn more about: Dialog-Box Components in the Framework"
title: "Dialog-Box Components in the Framework"
ms.date: "11/04/2016"
helpviewer_keywords: ["MFC dialog boxes [MFC], creating", "dialog classes [MFC], dialog box components", "MFC dialog boxes [MFC], about MFC dialog boxes", "dialog templates [MFC], MFC framework", "MFC dialog boxes [MFC], dialog resource"]
ms.assetid: 592db160-0a8a-49be-ac72-ead278aca53f
---
# Dialog-Box Components in the Framework

In the MFC framework, a dialog box has two components:

- A dialog-template resource that specifies the dialog box's controls and their placement.

   The dialog resource stores a dialog template from which Windows creates the dialog window and displays it. The template specifies the dialog box's characteristics, including its size, location, style, and the types and positions of the dialog box's controls. You will usually use a dialog template stored as a resource, but you can also create your own template in memory.

- A dialog class, derived from [CDialog](reference/cdialog-class.md), to provide a programmatic interface for managing the dialog box.

   A dialog box is a window and will be attached to a Windows window when visible. When the dialog window is created, the dialog-template resource is used as a template for creating child window controls for the dialog box.

## See also

[Dialog Boxes](dialog-boxes.md)<br/>
[Working with Dialog Boxes in MFC](life-cycle-of-a-dialog-box.md)
