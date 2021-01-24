---
description: "Learn more about: Commonly Overridden Member Functions"
title: "Commonly Overridden Member Functions"
ms.date: "09/06/2019"
helpviewer_keywords: ["CDialog class [MFC], members", "OnInitDialog function", "dialog classes [MFC], commonly overridden member functions", "OnCancel function", "overriding, dialog class members", "OnOK function", "MFC dialog boxes [MFC], overriding member functions"]
ms.assetid: 78eb566c-e361-4c86-8db5-c7e2791b249a
---
# Commonly Overridden Member Functions

The following table lists the most likely member functions to override in your `CDialog`-derived class.

### Commonly Overridden Member Functions of Class CDialog

|Member function|Message it responds to|Purpose of the override|
|---------------------|----------------------------|-----------------------------|
|`OnInitDialog`|**WM_INITDIALOG**|Initialize the dialog box's controls.|
|`OnOK`|**BN_CLICKED** for button **IDOK**|Respond when the user clicks the OK button.|
|`OnCancel`|**BN_CLICKED** for button **IDCANCEL**|Respond when the user clicks the Cancel button.|

`OnInitDialog`, `OnOK`, and `OnCancel` are virtual functions. To override them, you declare an overriding function in your derived dialog class using the [MFC Class Wizard](reference/mfc-class-wizard.md).

`OnInitDialog` is called just before the dialog box is displayed. You must call the default `OnInitDialog` handler from your override — usually as the first action in the handler. By default, `OnInitDialog` returns **TRUE** to indicate that the focus should be set to the first control in the dialog box.

`OnOK` is typically overridden for modeless but not modal dialog boxes. If you override this handler for a modal dialog box, call the base class version from your override — to ensure that `EndDialog` is called — or call `EndDialog` yourself.

`OnCancel` is usually overridden for modeless dialog boxes.

For more information about these member functions, see class [CDialog](reference/cdialog-class.md) in the *MFC Reference* and the discussion on [Working with Dialog Boxes in MFC](life-cycle-of-a-dialog-box.md).

## See also

[Dialog Boxes](dialog-boxes.md)<br/>
[Commonly Added Member Functions](commonly-added-member-functions.md)
