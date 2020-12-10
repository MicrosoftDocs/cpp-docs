---
description: "Learn more about: Creating Modeless Dialog Boxes"
title: "Creating Modeless Dialog Boxes"
ms.date: "11/04/2016"
helpviewer_keywords: ["MFC dialog boxes [MFC], modeless", "modeless dialog boxes [MFC], creating", "MFC dialog boxes [MFC], creating"]
ms.assetid: 70d78c7f-3d40-477b-9f78-0f33c359f88b
---
# Creating Modeless Dialog Boxes

For a modeless dialog box, you must provide your own public constructor in your dialog class. To create a modeless dialog box, call your public constructor and then call the dialog object's [Create](reference/cdialog-class.md#create) member function to load the dialog resource. You can call **Create** either during or after the constructor call. If the dialog resource has the property **WS_VISIBLE**, the dialog box appears immediately. If not, you must call its [ShowWindow](reference/cwnd-class.md#showwindow) member function.

## See also

[Working with Dialog Boxes in MFC](life-cycle-of-a-dialog-box.md)
