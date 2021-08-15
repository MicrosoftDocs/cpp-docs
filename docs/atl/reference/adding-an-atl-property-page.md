---
description: "Learn more about: Adding an ATL Property Page"
title: "Adding an ATL Property Page"
ms.date: "05/09/2019"
helpviewer_keywords: ["property pages, adding", "ATL projects, adding property pages", "controls [ATL], property pages"]
ms.assetid: ddf92b49-42a2-46d2-b6b8-d37baedebeca
---
# Adding an ATL Property Page

> [!NOTE]
> The ATL Property Page wizard is not available in Visual Studio 2019 and later.

To add an Active Template Library (ATL) property page to your project, your project must have been created as an ATL application or as an MFC application that contains ATL support. You can use the [ATL Project Wizard](../../atl/reference/atl-project-wizard.md) to create an ATL application or [add an ATL object to your MFC application](../../mfc/reference/adding-atl-support-to-your-mfc-project.md) to implement ATL support for an MFC application.

If you are adding a property page for a control, your control must support the [ISpecifyPropertyPagesImpl](../../atl/reference/ispecifypropertypagesimpl-class.md) interface. By default, this interface is in the derivation list of your control class when you [create an ATL control](../../atl/reference/adding-an-atl-control.md) using the [ATL Control Wizard](../../atl/reference/atl-control-wizard.md).

> [!NOTE]
> If your control class does not have [ISpecifyPropertyPagesImpl](../../atl/reference/ispecifypropertypagesimpl-class.md) in its derivation list, you must add it manually.

## To add an ATL property page to your project

1. In either **Solution Explorer** or [Class View](/visualstudio/ide/viewing-the-structure-of-code), right-click the name of the project to which you want to add the ATL property page.

1. From the shortcut menu, click **Add** and then click **Add Class**.

1. In the [Add Class](../../ide/adding-a-class-visual-cpp.md#add-class-dialog-box) dialog box, in the **Templates** pane, click **ATL Property Page** and then click **Open** to display the [ATL Property Page Wizard](../../atl/reference/atl-property-page-wizard.md).

Once you create a property page for a control, you must provide the [PROP_PAGE](property-map-macros.md#prop_page) entry in the property map for the control.

## See also

[Property Pages](../../atl/atl-com-property-pages.md)<br/>
[Fundamentals of ATL COM Objects](../../atl/fundamentals-of-atl-com-objects.md)<br/>
[Example: Implementing a Property Page](../../atl/example-implementing-a-property-page.md)
