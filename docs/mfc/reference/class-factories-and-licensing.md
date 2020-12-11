---
description: "Learn more about: Class Factories and Licensing"
title: "Class Factories and Licensing"
ms.date: "11/04/2016"
helpviewer_keywords: ["class factories [MFC], and licensing"]
ms.assetid: 53c4856a-4062-46db-9f69-dd4339f746b3
---
# Class Factories and Licensing

To create an instance of your OLE control, a container application calls a member function of the control's class factory. Because your control is an actual OLE object, the class factory is responsible for creating instances of your control. Every OLE control class must have a class factory.

Another important feature of OLE controls is their ability to enforce a license. ControlWizard allows you to incorporate licensing during the creation of your control project. For more information on control licensing, see the article [ActiveX Controls: Licensing An ActiveX Control](../../mfc/mfc-activex-controls-licensing-an-activex-control.md).

The following table lists several macros and functions used to declare and implement your control's class factory and to license of your control.

### Class Factories and Licensing

|Macro or function|Description|
|-|-|
|[DECLARE_OLECREATE_EX](#declare_olecreate_ex)|Declares the class factory for an OLE control or property page.|
|[IMPLEMENT_OLECREATE_EX](#implement_olecreate_ex)|Implements the control's `GetClassID` function and declares an instance of the class factory.|
|[BEGIN_OLEFACTORY](#begin_olefactory)|Begins the declaration of any licensing functions.|
|[END_OLEFACTORY](#end_olefactory)|Ends the declaration of any licensing functions.|
|[AfxVerifyLicFile](#afxverifylicfile)|Verifies whether a control is licensed for use on a particular computer.|

## <a name="declare_olecreate_ex"></a> DECLARE_OLECREATE_EX

Declares a class factory and the `GetClassID` member function of your control class.

```
DECLARE_OLECREATE_EX(class_name)
```

### Parameters

*class_name*<br/>
The name of the control class.

### Remarks

Use this macro in the control class header file for a control that does not support licensing.

Note that this macro serves the same purpose as the following code sample:

[!code-cpp[NVC_MFCAxCtl#14](../../mfc/reference/codesnippet/cpp/class-factories-and-licensing_1.h)]

### Requirements

  **Header** afxctl.h

## <a name="implement_olecreate_ex"></a> IMPLEMENT_OLECREATE_EX

Implements your control's class factory and the [GetClassID](../../mfc/reference/colecontrol-class.md#getclassid) member function of your control class.

```
IMPLEMENT_OLECREATE_EX(
   class_name,
    external_name,
    l,
    w1,
    w2,
    b1,
    b2,
    b3,
    b4,
    b5,
    b6,
    b7,
    b8)
```

### Parameters

*class_name*<br/>
The name of the control property page class.

*external_name*<br/>
The object name exposed to applications.

*l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8*<br/>
Components of the class's CLSID. For more information on these parameters, see the Remarks for [IMPLEMENT_OLECREATE](run-time-object-model-services.md#implement_olecreate).

### Remarks

This macro must appear in the implementation file for any control class that uses the DECLARE_OLECREATE_EX macro or the BEGIN_OLEFACTORY and END_OLEFACTORY macros. The external name is the identifier of the OLE control that is exposed to other applications. Containers use this name to request an object of this control class.

### Requirements

  **Header** afxctl.h

## <a name="begin_olefactory"></a> BEGIN_OLEFACTORY

Begins the declaration of your class factory in the header file of your control class.

```
BEGIN_OLEFACTORY(class_name)
```

### Parameters

*class_name*<br/>
Specifies the name of the control class whose class factory this is.

### Remarks

Declarations of class factory licensing functions should begin immediately after BEGIN_OLEFACTORY.

### Requirements

  **Header** afxctl.h

## <a name="end_olefactory"></a> END_OLEFACTORY

Ends the declaration of your control's class factory.

```
END_OLEFACTORY(class_name)
```

### Parameters

*class_name*<br/>
The name of the control class whose class factory this is.

### Requirements

  **Header** afxctl.h

## <a name="afxverifylicfile"></a> AfxVerifyLicFile

Call this function to verify that the license file named by `pszLicFileName` is valid for the OLE control.

```
BOOL AFXAPI AfxVerifyLicFile(
    HINSTANCE  hInstance,
    LPCTSTR  pszLicFileName,
    LPOLESTR  pszLicFileContents,
    UINT cch = -1);
```

### Parameters

*hInstance*<br/>
The instance handle of the DLL associated with the licensed control.

*pszLicFileName*<br/>
Points to a null-terminated character string containing the license filename.

*pszLicFileContents*<br/>
Points to a byte sequence that must match the sequence found at the beginning of the license file.

*cch*<br/>
Number of characters in *pszLicFileContents*.

### Return Value

Nonzero if the license file exists and begins with the character sequence in *pszLicFileContents*; otherwise 0.

### Remarks

If *cch* is -1, this function uses:

[!code-cpp[NVC_MFC_Utilities#36](../../mfc/codesnippet/cpp/class-factories-and-licensing_2.cpp)]

### Requirements

  **Header** afxctl.h

## See also

[Macros and Globals](../../mfc/reference/mfc-macros-and-globals.md)
