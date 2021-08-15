---
description: "Learn more about: Implementing Property Pages"
title: "Implementing Property Pages"
ms.date: "11/04/2016"
helpviewer_keywords: ["IPropertyPage2 class", "IPropertyPage class", "property pages, implementing"]
ms.assetid: 62f29440-33a7-40eb-a1ef-3634c95f640c
---
# Implementing Property Pages

::: moniker range="msvc-160"

The ATL Property Page wizard is not available in Visual Studio 2019 and later.

::: moniker-end

::: moniker range="<=msvc-150"

Property pages are COM objects that implement the `IPropertyPage` or `IPropertyPage2` interface. ATL provides support for implementing property pages through the [ATL Property Page Wizard](../atl/reference/atl-property-page-wizard.md) in the [Add Class dialog box](../ide/adding-a-class-visual-cpp.md#add-class-dialog-box).

To create a property page using ATL:

- Create or open an ATL Dynamic-link library (DLL) server project.

- Open the [Add Class dialog box](../ide/adding-a-class-visual-cpp.md#add-class-dialog-box) and select **ATL Property Page**.

- Make sure your property page is apartment threaded (since it has a user interface).

- Set the title, description (Doc String), and help file to be associated with your page.

- Add controls to the generated dialog resource to act as the user interface of your property page.

- Respond to changes in your page's user interface to perform validation, update the page site, or update the objects associated with your page. In particular, call [IPropertyPageImpl::SetDirty](../atl/reference/ipropertypageimpl-class.md#setdirty) when the user makes changes to the property page.

- Optionally override the `IPropertyPageImpl` methods using the guidelines below.

   |IPropertyPageImpl method|Override when you want to...|Notes|
   |------------------------------|----------------------------------|-----------|
   |[SetObjects](../atl/reference/ipropertypageimpl-class.md#setobjects)|Perform basic sanity checks on the number of objects being passed to your page and the interfaces that they support.|Execute your own code before calling the base class implementation. If the objects being set don't conform to your expectations, you should fail the call as soon as possible.|
   |[Activate](../atl/reference/ipropertypageimpl-class.md#activate)|Initialize your page's user interface (for example, set dialog controls with current property values from objects, create controls dynamically, or perform other initializations).|Call the base class implementation before your code so that the base class has a chance to create the dialog window and all the controls before you try to update them.|
   |[Apply](../atl/reference/ipropertypageimpl-class.md#apply)|Validate the property settings and update the objects.|There is no need to call the base class implementation since it doesn't do anything apart from trace the call.|
   |[Deactivate](../atl/reference/ipropertypageimpl-class.md#deactivate)|Clean up window-related items.|The base class implementation destroys the dialog box representing the property page. If you need to clean up before the dialog box is destroyed, you should add your code before calling the base class.|

For an example property page implementation, see [Example: Implementing a Property Page](../atl/example-implementing-a-property-page.md).

> [!NOTE]
> If you want to host ActiveX controls in your property page, you will need to change the derivation of your wizard-generated class. Replace **CDialogImpl\<CYourClass>** with **CAxDialogImpl\<CYourClass>** in the list of base classes.

::: moniker-end

## See also

[Property Pages](../atl/atl-com-property-pages.md)<br/>
[ATLPages Sample](../overview/visual-cpp-samples.md)
