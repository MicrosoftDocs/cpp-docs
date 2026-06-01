---
description: "Learn more about: Creating Modal Dialog Boxes"
title: "Creating Modal Dialog Boxes"
ms.date: "11/04/2016"
helpviewer_keywords: ["modal dialog boxes [MFC], creating", "MFC dialog boxes [MFC], creating", "MFC dialog boxes [MFC], modal"]
ms.topic: concept-article
---
# Creating Modal Dialog Boxes

>[!NOTE]
> The Microsoft Foundation Classes (MFC) library continues to be supported. However, we're no longer adding features or updating the documentation.

To create a modal dialog box, call either of the two public constructors declared in [CDialog](reference/cdialog-class.md). Next, call the dialog object's [DoModal](reference/cdialog-class.md#domodal) member function to display the dialog box and manage interaction with it until the user chooses OK or Cancel. This management by `DoModal` is what makes the dialog box modal. For modal dialog boxes, `DoModal` loads the dialog resource.

## See also

[Working with Dialog Boxes in MFC](life-cycle-of-a-dialog-box.md)
