---
description: "Learn more about: Add a member variable"
title: "Add a member variable"
ms.date: "11/09/2018"
f1_keywords: ["vc.codewiz.classes.member.variable", "vc.codewiz.variable.overview"]
helpviewer_keywords: ["member variables, adding", "member variables", "add member variable wizard [C++]", "dialog box controls, member variables", "dialog box controls, variable types", "variables, dialog box control member variables"]
ms.assetid: 437783bd-8eb4-4508-8b73-7380116e9d71
---
# Add a member variable

You may add a member variable to a class using Class View. Member variables can be either for [data exchange and data validation](../mfc/dialog-data-exchange-and-validation.md), or they can be generic. The data member variable wizard is designed to take the relevant information and use it to insert elements in your source files at the appropriate locations. You may add a member variable from the [Dialog editor](../windows/dialog-editor.md) in [Resource View](../windows/how-to-create-a-resource-script-file.md#create-resources), or from [Class View](/visualstudio/ide/viewing-the-structure-of-code).

> [!NOTE]
> When you're designing and implementing a dialog box, you might find it more efficient to use the Dialog editor to add the dialog box controls, and then to implement the controls' member variables.

**To add a member variable for a dialog control in Resource View using the Add Member Variable Wizard:**

1. In Resource View, expand the project node and the Dialog node to display the list of the project's dialog boxes.

1. Double-click the dialog box to which you want to add the member variable to open it in the Dialog editor.

1. In the dialog box displayed in the Dialog editor, right-click the control to which you want to add the member variable.

1. On the shortcut menu, choose **Add Variable** to display the [Add member variable wizard](#add-member-variable-wizard).

   > [!NOTE]
   > A default value is already provided in **Control ID**.

1. Provide the information in the appropriate wizard boxes. For more information, see [dialog box controls and variable types](#dialog-box-controls-and-variable-types).

1. Select **Finish** to add the definition and implementation code to the project and close the wizard.

**To add a member variable from Class View using the Add Member Variable Wizard:**

1. In [Class View](/visualstudio/ide/viewing-the-structure-of-code), expand the project node to display the classes in the project.

1. Right-click the class to which you want to add a variable.

1. On the shortcut menu, choose **Add**, and then choose **Add Variable** to display the Add Member Variable Wizard.

1. Provide the information in the appropriate wizard boxes. For more information, see [Add member variable wizard](#add-member-variable-wizard).

1. Select **Finish** to add the definition and implementation code to the project and close the wizard.

## In this section

- [Add member variable wizard](#add-member-variable-wizard)
- [Dialog box controls and variable types](#dialog-box-controls-and-variable-types)

## Add member variable wizard

This wizard adds a member variable declaration to the header file. Depending on the options, it can add code to the .cpp file. Once you've added the member variable using the wizard, you can edit the code in the development environment.

- **Access**

  Sets the access to the member variable. Access modifiers are keywords that specify the access other classes have to the member variable. For more information about specifying access, see [member-access control](../cpp/member-access-control-cpp.md). The member variable access level is set to **`public`** by default.

  - [public](../cpp/public-cpp.md)
  - [protected](../cpp/protected-cpp.md)
  - [private](../cpp/private-cpp.md)

- **Variable type**

  Sets the return type for the member variable you're adding.

  - If you're adding a member variable that isn't a dialog box control, select from the list of available types.

    For information about the types, see [fundamental types](../cpp/fundamental-types-cpp.md).

    - **`char`**
    - **`double`**
    - **`float`**
    - **`int`**
    - **`long`**
    - **`short`**
    - **`unsigned char`**
    - **`unsigned int`**
    - **`unsigned long`**

  - If you're adding a member variable for a dialog box control, this box is filled with the type of object that is returned for a control or value. If you select **Control**, then **Variable type** specifies the base class of the control you select in the **Control ID** box. If the dialog box control can hold a value, and if you select **Value**, then **Variable type** specifies the appropriate type for the value that control can hold. For more information, see [dialog box controls and variable types](#dialog-box-controls-and-variable-types).

    This value depends on the selection in **Control ID** and can't be changed.

- **Variable name**

  Sets the name of the member variable you're adding. Member variables typically begin with the identifying string `m_`, which is provided for you by default.

- **Control variable**

  Indicates that the member variable manages a control within a dialog box with [data exchange and data validation](../mfc/dialog-data-exchange-and-validation.md) support. For more information, see [DoDataExchange](../mfc/reference/cwnd-class.md#dodataexchange). This option is available only for member variables added to classes derived from [CDialog](../mfc/reference/cdialog-class.md). Select this box to activate the **Control ID** and **Control type** options.

- **Control ID**

  Sets the ID for the control variable you're adding. Select from the list the ID for the type of control for which you're adding the member variable. The list is active only when the **Control variable** box is selected, and it's limited to IDs for the controls already added to the dialog box. For example, for the standard **OK** button, the Control ID is **IDOK**.

  |Option|Description|
  |------------|-----------------|
  |**Control**|This option is set by default for the control type. It manages the control itself, not the state or contents of the control (as you might want to manage for a list box, combo box, or edit box).|
  |**Value**|This option is available for control types that can hold a value or show a state, such as an edit box or a check box. It's also available for control types for which you might manage range, contents, or state. For more information, see [dialog box controls and variable types](#dialog-box-controls-and-variable-types).|

- **Category**

  Specifies whether the variable is based on a control type or the value of the control.

- **Control type**

  Sets the type of control being added. This box isn't available to change. For example, a button has the control type **BUTTON**, and a combo box has the control type **COMBOBOX**. For more information, see [dialog box controls and variable types](#dialog-box-controls-and-variable-types).

- **Max characters**

  Available only when **Variable type** is set to [CString](../atl-mfc-shared/reference/cstringt-class.md). Indicates the most number of characters that the control can hold.

- **Min value**

  Available only when the variable type is `BOOL`, **`int`**, `UINT`, **`long`**, `DWORD`, **`float`**, **`double`**, `BYTE`, **`short`**, [COLECurrency](../mfc/reference/colecurrency-class.md) or [CTime](../atl-mfc-shared/reference/ctime-class.md). Indicates the lowest value acceptable for a scale or date range.

- **Max value**

  Available only when the variable type is `BOOL`, **`int`**, `UINT`, **`long`**, `DWORD`, **`float`**, **`double`**, `BYTE`, **`short`**, `COLECurrency`, or `CTime`. Indicates the highest value acceptable for a scale or date range.

- **.h file**

  For ActiveX controls, whose member variables require a wrapper class. Sets the name of the header file to add the class declaration.

- **.cpp file**

  For ActiveX controls, whose member variables require a wrapper class. Sets the name of the implementation file to add the class definition.

- **Comment**

  Provides a comment in the header file for the member variable.

## Dialog box controls and variable types

You can use the [add member variable wizard](#add-member-variable-wizard) to add a member variable to a dialog box control created using MFC. The type of control for which you add the member variable determines the options that appear in the dialog box.

The following table describes all the dialog box control types that are supported in MFC and the [Dialog editor](../windows/dialog-editor.md). It also displays their available types and values.

|Control|Control type|Control variable type|Value variable type|Min/max values (value type only)|
|-------------|------------------|---------------------------|-------------------------|-----------------------------------------|
|Animation control|SysAnimate32|[CAnimateCtrl](../mfc/reference/canimatectrl-class.md)|None; control only|N/A|
|Button|BUTTON|[CButton](../mfc/reference/cbutton-class.md)|None; control only|N/A|
|Check box|CHECK|[CButton](../mfc/reference/cbutton-class.md)|`BOOL`|Min value/Max value|
|Combo box|COMBOBOX|[CComboBox](../mfc/reference/ccombobox-class.md)|[CString](../atl-mfc-shared/reference/cstringt-class.md)|Max characters|
|Date time picker control|SysDateTimePick32|[CDateTimeCtrl](../mfc/reference/cdatetimectrl-class.md)|[CTime](../atl-mfc-shared/reference/ctime-class.md)|Min value/max value|
|Edit box|EDIT|[CEdit](../mfc/reference/cedit-class.md)|`CString`, int, UINT, long, DWORD, float, double, BYTE, short, BOOL, `COleDateTime`, or `COleCurrency`|Min value/max value; some support max characters|
|Hotkey control|msctls_hotkey32|[CHotKeyCtrl](../mfc/reference/chotkeyctrl-class.md)|None; control only|N/A|
|List box|LISTBOX|[CListBox](../mfc/reference/clistbox-class.md)|`CString`|Max characters|
|List control|SysListView32|[CListCtrl](../mfc/reference/clistctrl-class.md)|None; control only|N/A|
|Month Calendar control|SysMonthCal32|[CMonthCalCtrl](../mfc/reference/cmonthcalctrl-class.md)|`CTime`|Min value/max value|
|Progress control|msctls_progress32|[CProgressCtrl](../mfc/reference/cprogressctrl-class.md)|None; control only|N/A|
|Rich Edit 2 control|RichEdit20A|[CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)|`CString`|Max characters|
|Rich Edit control|RICHEDIT|`CRichEditCtrl`|`CString`|Max characters|
|Scroll bar (vertical or horizontal|SCROLLBAR|[CScrollBar](../mfc/reference/cscrollbar-class.md)|**`int`**|Min value/max value|
|Slider control|msctls_trackbar32|[CSliderCtrl](../mfc/reference/csliderctrl-class.md)|**`int`**|Min value/max value|
|Spin control|msctls_updown32|[CSpinButtonCtrl](../mfc/reference/cspinbuttonctrl-class.md)|None; control only|N/A|
|Tab control|SysTabControl32|[CTabCtrl](../mfc/reference/ctabctrl-class.md)|None; control only|N/A|
|Tree control|SysTreeView32|[CTreeCtrl](../mfc/reference/ctreectrl-class.md)|None; control only|N/A|
