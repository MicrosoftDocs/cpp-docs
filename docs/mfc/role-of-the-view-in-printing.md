---
description: "Learn more about: Role of the View in Printing"
title: "Role of the View in Printing"
ms.date: "11/04/2016"
helpviewer_keywords: ["views [MFC], printing", "OnDraw method [MFC], and printing", "printing [MFC], OnDraw method [MFC]", "printing [MFC], views", "CView class [MFC], role in printing", "printing views [MFC]"]
---
# Role of the View in Printing

>[!NOTE]
> The Microsoft Foundation Classes (MFC) library continues to be supported. However, we're no longer adding features or updating the documentation.

Your view also plays two important roles in printing its associated document.

The view:

- Uses the same [OnDraw](../mfc/reference/cview-class.md#ondraw) code to draw on the printer as to draw on the screen.

- Manages dividing the document into pages for printing.

For more information about printing and about the view's role in printing, see [Printing and Print Preview](../mfc/printing-and-print-preview.md).

## See also

[Using Views](../mfc/using-views.md)
