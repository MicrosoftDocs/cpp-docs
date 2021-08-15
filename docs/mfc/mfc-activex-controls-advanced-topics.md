---
description: "Learn more about: MFC ActiveX Controls: Advanced Topics"
title: "MFC ActiveX Controls: Advanced Topics"
ms.date: "09/12/2018"
helpviewer_keywords: ["MFC ActiveX controls [MFC], error codes", "MFC ActiveX controls [MFC], accessing invisible dialog controls", "MFC ActiveX controls [MFC], advanced topics", "FireError method [MFC]", "MFC ActiveX controls [MFC], database classes", "MFC ActiveX controls [MFC], special keys", "PreTranslateMessage method [MFC]", "MFC ActiveX controls [MFC], parameterized property", "ThrowError method [MFC]"]
ms.assetid: e9e34abb-8e2d-461e-bb9c-a1aec5dcecbd
---
# MFC ActiveX Controls: Advanced Topics

This article covers advanced topics related to developing ActiveX controls. These include:

- [Using Database Classes in ActiveX Controls](#_core_using_database_classes_in_activex_controls)

- [Implementing a Parameterized Property](#_core_implementing_a_parameterized_property)

- [Handling Errors in Your ActiveX Control](#_core_handling_errors_in_your_activex_control)

- [Handling Special Keys in the Control](#_core_handling_special_keys_in_your_control)

- [Accessing Dialog Controls That Are Invisible at Run Time](#_core_accessing_dialog_controls_that_are_invisible_at_run_time)

>[!IMPORTANT]
> ActiveX is a legacy technology that should not be used for new development. For more information about modern technologies that supersede ActiveX, see [ActiveX Controls](activex-controls.md).

## <a name="_core_using_database_classes_in_activex_controls"></a> Using Database Classes in ActiveX Controls

Because the ActiveX control classes are part of the class library, you can apply the same procedures and rules for using database classes in a standard MFC application to developing ActiveX controls that use the MFC database classes.

For a general overview of the MFC database classes, see [MFC Database Classes (DAO and ODBC)](../data/mfc-database-classes-odbc-and-dao.md). The article introduces both the MFC ODBC classes and the MFC DAO classes and directs you to more details on either.

> [!NOTE]
> DAO is supported through Office 2013. DAO 3.6 is the final version, and it is considered obsolete. The Visual C++ environment and wizards do not support DAO (although the DAO classes are included and you can still use them). Microsoft recommends that you use [OLE DB Templates](../data/oledb/ole-db-programming.md) or [ODBC and MFC](../data/odbc/odbc-and-mfc.md) for new projects. You should only use DAO in maintaining existing applications.

## <a name="_core_implementing_a_parameterized_property"></a> Implementing a Parameterized Property

A parameterized property (sometimes called a property array) is a method for exposing a homogeneous collection of values as a single property of the control. For example, you can use a parameterized property to expose an array or a dictionary as a property. In Visual Basic, such a property is accessed using array notation:

[!code-vb[NVC_MFC_AxVb#1](codesnippet/visualbasic/mfc-activex-controls-advanced-topics_1.vb)]

Use the Add Property Wizard to implement a parameterized property. The Add Property Wizard implements the property by adding a pair of Get/Set functions that allow the control user to access the property using the above notation or in the standard fashion.

Similar to methods and properties, parameterized properties also have a limit to the number of parameters allowed. In the case of parameterized properties, the limit is 15 parameters (with one parameter reserved for storing the property value).

The following procedure adds a parameterized property, called Array, which can be accessed as a two-dimensional array of integers.

#### To add a parameterized property using the Add Property Wizard

1. Load your control's project.

1. In Class View, expand the library node of your control.

1. Right-click the interface node for your control (the second node of the library node) to open the shortcut menu.

1. From the shortcut menu, click **Add** and then click **Add Property**.

1. In the **Property Name** box, type `Array`.

1. In the **Property Type** box, select **`short`**.

1. For **Implementation** Type, click **Get/Set Methods**.

1. In the **Get Function** and **Set Function** boxes, type unique names for your Get and Set Functions or accept the default names.

1. Add a parameter, called *row* (type *short*), using the **Parameter Name** and **Parameter Type** controls.

1. Add a second parameter called *column* (type *short*).

1. Click **Finish**.

### Changes Made by the Add Property Wizard

When you add a custom property, the Add Property Wizard makes changes to the control class header (.H) and the implementation (.CPP) files.

The following lines are added to the control class .H file:

[!code-cpp[NVC_MFC_AxUI#35](codesnippet/cpp/mfc-activex-controls-advanced-topics_2.h)]

This code declares two functions called `GetArray` and `SetArray` that allow the user to request a specific row and column when accessing the property.

In addition, the Add Property Wizard adds the following lines to the control dispatch map, located in the control class implementation (.CPP) file:

[!code-cpp[NVC_MFC_AxUI#36](codesnippet/cpp/mfc-activex-controls-advanced-topics_3.cpp)]

Finally, the implementations of the `GetArray` and `SetArray` functions are added to the end of the .CPP file. In most cases, you will modify the Get function to return the value of the property. The Set function will usually contain code that should execute, either before or after the property changes.

For this property to be useful, you could declare a two-dimensional array member variable in the control class, of type **`short`**, to store values for the parameterized property. You could then modify the Get function to return the value stored at the proper row and column, as indicated by the parameters, and modify the Set function to update the value referenced by the row and column parameters.

## <a name="_core_handling_errors_in_your_activex_control"></a> Handling Errors in Your ActiveX Control

If error conditions occur in the control, you may need to report the error to the control container. There are two methods for reporting errors, depending on the situation in which the error occurs. If the error occurs within a property's Get or Set function, or within the implementation of an OLE Automation method, the control should call [COleControl::ThrowError](reference/colecontrol-class.md#throwerror), which signals to the control user that an error has occurred. If the error occurs at any other time, the control should call [COleControl::FireError](reference/colecontrol-class.md#fireerror), which fires a stock Error event.

To indicate the kind of error that has occurred, the control must pass an error code to `ThrowError` or `FireError`. An error code is an OLE status code, which has a 32-bit value. When possible, choose an error code from the standard set of codes defined in the OLECTL.H header file. The following table summarizes these codes.

### ActiveX Control Error Codes

|Error|Description|
|-----------|-----------------|
|CTL_E_ILLEGALFUNCTIONCALL|Illegal function call|
|CTL_E_OVERFLOW|Overflow|
|CTL_E_OUTOFMEMORY|Out of memory|
|CTL_E_DIVISIONBYZERO|Division by zero|
|CTL_E_OUTOFSTRINGSPACE|Out of string space|
|CTL_E_OUTOFSTACKSPACE|Out of stack space|
|CTL_E_BADFILENAMEORNUMBER|Bad file name or number|
|CTL_E_FILENOTFOUND|File not found|
|CTL_E_BADFILEMODE|Bad file mode|
|CTL_E_FILEALREADYOPEN|File already open|
|CTL_E_DEVICEIOERROR|Device I/O error|
|CTL_E_FILEALREADYEXISTS|File already exists|
|CTL_E_BADRECORDLENGTH|Bad record length|
|CTL_E_DISKFULL|Disk full|
|CTL_E_BADRECORDNUMBER|Bad record number|
|CTL_E_BADFILENAME|Bad file name|
|CTL_E_TOOMANYFILES|Too many files|
|CTL_E_DEVICEUNAVAILABLE|Device unavailable|
|CTL_E_PERMISSIONDENIED|Permission denied|
|CTL_E_DISKNOTREADY|Disk not ready|
|CTL_E_PATHFILEACCESSERROR|Path/file access error|
|CTL_E_PATHNOTFOUND|Path not found|
|CTL_E_INVALIDPATTERNSTRING|Invalid pattern string|
|CTL_E_INVALIDUSEOFNULL|Invalid use of NULL|
|CTL_E_INVALIDFILEFORMAT|Invalid file format|
|CTL_E_INVALIDPROPERTYVALUE|Invalid property value|
|CTL_E_INVALIDPROPERTYARRAYINDEX|Invalid property array index|
|CTL_E_SETNOTSUPPORTEDATRUNTIME|Set not supported at run time|
|CTL_E_SETNOTSUPPORTED|Set not supported (read-only property)|
|CTL_E_NEEDPROPERTYARRAYINDEX|Need property array index|
|CTL_E_SETNOTPERMITTED|Set not permitted|
|CTL_E_GETNOTSUPPORTEDATRUNTIME|Get not supported at run time|
|CTL_E_GETNOTSUPPORTED|Get not supported (write-only property)|
|CTL_E_PROPERTYNOTFOUND|Property not found|
|CTL_E_INVALIDCLIPBOARDFORMAT|Invalid clipboard format|
|CTL_E_INVALIDPICTURE|Invalid picture|
|CTL_E_PRINTERERROR|Printer error|
|CTL_E_CANTSAVEFILETOTEMP|Can't save file to TEMP|
|CTL_E_SEARCHTEXTNOTFOUND|Search text not found|
|CTL_E_REPLACEMENTSTOOLONG|Replacements too long|

If necessary, use the CUSTOM_CTL_SCODE macro to define a custom error code for a condition that is not covered by one of the standard codes. The parameter for this macro should be an integer between 1000 and 32767, inclusive. For example:

[!code-cpp[NVC_MFC_AxUI#37](codesnippet/cpp/mfc-activex-controls-advanced-topics_4.cpp)]

If you are creating an ActiveX control to replace an existing VBX control, define your ActiveX control error codes with the same numeric values the VBX control uses to ensure that the error codes are compatible.

## <a name="_core_handling_special_keys_in_your_control"></a> Handling Special Keys in the Control

In some cases you may want to handle certain keystroke combinations in a special way; for example, insert a new line when the ENTER key is pressed in a multiline text box control or move between a group of edit controls when a directional key ID pressed.

If the base class of your ActiveX control is `COleControl`, you can override [CWnd::PreTranslateMessage](reference/cwnd-class.md#pretranslatemessage) to handle messages before the container processes them. When using this technique, always return **TRUE** if you handle the message in your override of `PreTranslateMessage`.

The following code example demonstrates a possible way of handling any messages related to the directional keys.

[!code-cpp[NVC_MFC_AxUI#38](codesnippet/cpp/mfc-activex-controls-advanced-topics_5.cpp)]

For more information on handling keyboard interfaces for an ActiveX control, see the ActiveX SDK documentation.

## <a name="_core_accessing_dialog_controls_that_are_invisible_at_run_time"></a> Accessing Dialog Controls that Are Invisible at Run Time

You can create dialog controls that have no user interface and are invisible at run time. If you add an invisible at run time ActiveX control to a dialog box and use [CWnd::GetDlgItem](reference/cwnd-class.md#getdlgitem) to access the control, the control will not work correctly. Instead, you should use one of the following techniques to obtain an object that represents the control:

- Using the Add Member Variable Wizard, select **Control Variable** and then select the control's ID. Enter a member variable name and select the control's wrapper class as the **Control Type**.

     -or-

- Declare a local variable and subclass as the dialog item. Insert code that resembles the following (`CMyCtrl` is the wrapper class, IDC_MYCTRL1 is the control's ID):

   [!code-cpp[NVC_MFC_AxCont#19](codesnippet/cpp/mfc-activex-controls-advanced-topics_6.cpp)]

## See also

[MFC ActiveX Controls](mfc-activex-controls.md)
