---
description: "Learn more about: Control Names, MFC ActiveX Control Wizard"
title: "Control Names, MFC ActiveX Control Wizard"
ms.date: "11/04/2016"
f1_keywords: ["vc.appwiz.mfc.ctl.names"]
helpviewer_keywords: ["MFC ActiveX Control Wizard, control names"]
ms.assetid: 9b8b81d2-36df-48ed-b58a-a771a0e269ee
---
# Control Names, MFC ActiveX Control Wizard

Specify the names for the control class and property page class, the type names, and type identifiers for your control. With the exception of **Short name**, all other fields can be edited independently. If you change the text for **Short name**, the change is reflected in the names of all other fields in this page. This naming behavior is designed to make all the names easily identifiable for you as you develop your control.

- **Short name**

   Provide an abbreviated name for the control. By default, this name is based on the project name you provided in the **New Project** dialog box. The name you provide determines the class names, the type names, and the type identifiers, unless you change those fields individually.

- **Control class name**

   By default, the name of the control class is based on the short name, with `C` as a prefix and `Ctrl` as a suffix. For example, if your control's short name is `Price`, the control class name is `CPriceCtrl`.

- **Control .h file**

   By default, the name of the header file is based on the short name, with `Ctrl` as a suffix and `.h` as the file extension. For example, if your control's short name is `Price`, the header file name is `PriceCtrl.h`. The name in this field should match the control class name.

- **Control .cpp file**

   By default, the name of the header file is based on the short name, with `Ctrl` as a suffix and `.cpp` as the file extension. For example, if your control's short name is `Price`, the header file name is `PriceCtrl.cpp`. The name in this field should match the header name.

- **Control type name**

   By default, the name of the control type is based on the short name, followed by `Control`. For example, if your control's short name is `Price`, the control class type name is `Price Control`. If you change the value in this field, make sure the name indicates an inheritance.

- **Control type ID**

   Sets the control type ID of the control class. The control writes this string to the registry when it is added to a project. Container applications use this string to create an instance of the control.

   By default, the control type ID is based on the project name, which you indicated in the **New Project** dialog box, and the short name. This name should match the type name.

   By default, the control type ID appears as follows:

   *ProjectName.ShortName*Ctrl.1

   If you change the short name in this dialog box, the control type ID appears as follows:

   *ProjectName.NewShortName*Ctrl.1

- **PropPage class name**

   By default, the name of the property page class is based on the short name, with `C` as a prefix and `PropPage` as a suffix. For example, if your control's short name is `Price`, the property page class name is `CPricePropPage`. This name should match the control class name, appended with `PropPage`.

- **PropPage .h file**

   By default, the name of the property page header file is based on the short name, with as a `PropPage` as a suffix and `.h` as the file extension. For example, if your control's short name is `Price`, the property page header file name is `PricePropPage.h`. This name should match the class name.

- **PropPage .cpp file**

   By default, the name of the property page implementation file is based on the short name, with as a `PropPage` as a suffix and `.cpp` as the file extension. For example, if your control's short name is `Price`, the property page header file name is `PricePropPage.cpp`. This name should match the header file name.

- **PropPage type name**

   By default, the property page type name is based on the short name, followed by `Property Page`. For example, if your control's short name is `Price`, the property page type name is `Price Property Page`. If you change the value in this field, make sure the name indicates the control class.

- **PropPage type ID**

   Sets the ID of the property page class. The control writes this string in the registry when it is applied to a project. A container application uses this string to create an instance of the control's property page.

   By default, the property page type ID is based on the project name, which you indicated in the **New Project** dialog box, and the short name. This name should match the type name.

   By default, the property page type ID appears as follows:

   *ProjectName.ShortName*PropPage.1

   If you change the short name in this dialog box, the property page type ID appears as follows:

   *ProjectName.NewShortName*PropPage.1

## See also

[MFC ActiveX Control Wizard](../../mfc/reference/mfc-activex-control-wizard.md)<br/>
[Application Settings, MFC ActiveX Control Wizard](../../mfc/reference/application-settings-mfc-activex-control-wizard.md)<br/>
[Control Settings, MFC ActiveX Control Wizard](../../mfc/reference/control-settings-mfc-activex-control-wizard.md)<br/>
[File Types Created for Visual Studio C++ projects](../../build/reference/file-types-created-for-visual-cpp-projects.md)
