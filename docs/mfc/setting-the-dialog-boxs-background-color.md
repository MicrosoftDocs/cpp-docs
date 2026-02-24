---
description: "Learn more about: Setting the Dialog Box's Background Color"
title: "Setting the Dialog Box's Background Color"
ms.date: 11/17/2023
helpviewer_keywords: ["CSS, background attributes in styles [MFC]", "HTML element formatting, background attributes", "colors, dialog box", "dialog boxes [MFC], colors", "background colors, dialog boxes", "MFC dialog boxes [MFC], colors"]
ms.topic: concept-article
---
# Setting the Dialog Box's Background Color

>[!NOTE]
> The Microsoft Foundation Classes (MFC) library continues to be supported. However, we're no longer adding features or updating the documentation.

You can set the background color of your dialog boxes by handling `WM_CTLCOLOR` messages for the dialog box window. The color you set is used for only the specified dialog box.

For example, the following code fragment sets the background color of the dialog box to dark grey. The `OnCtlColor` member function is called whenever the dialog box is redrawn:

```cpp
HBRUSH CAboutDlg::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
    return (HBRUSH)GetStockObject(DKGRAY_BRUSH);
}
```

For the previous code fragment to work:
- add `virtual HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);` to the `protected:` section of the class definition for your dialog.
- add the following to the class definition for your dialog, and change `CMyDialog` to the name of your dialog class:

```cpp
BEGIN_MESSAGE_MAP(CMyDialog, CDialogEx)
    ON_WM_CTLCOLOR()
END_MESSAGE_MAP()
```

## See also

[Working with Dialog Boxes in MFC](../mfc/life-cycle-of-a-dialog-box.md)\
[Handling Windows Messages in Your Dialog Box](../mfc/handling-windows-messages-in-your-dialog-box.md)
