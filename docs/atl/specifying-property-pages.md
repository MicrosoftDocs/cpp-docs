---
description: "Learn more about: Specifying Property Pages"
title: "Specifying Property Pages (ATL)"
ms.date: "11/04/2016"
helpviewer_keywords: ["ISpecifyPropertyPages method", "property pages, specifying"]
ms.assetid: ee8678cf-c708-49ab-b0ad-fc2db31f1ac3
---
# Specifying Property Pages

When you create an ActiveX control, you will often want to associate it with property pages that can be used to set the properties of your control. Control containers use the `ISpecifyPropertyPages` interface to find out which property pages can be used to set your control's properties. You will need to implement this interface on your control.

To implement `ISpecifyPropertyPages` using ATL, take the following steps:

1. Derive your class from [ISpecifyPropertyPagesImpl](../atl/reference/ispecifypropertypagesimpl-class.md).

1. Add an entry for `ISpecifyPropertyPages` to your class's COM map.

1. Add a [PROP_PAGE](reference/property-map-macros.md#prop_page) entry to the property map for each page associated with your control.

> [!NOTE]
> When generating a standard control using the [ATL Control Wizard](../atl/reference/atl-control-wizard.md), you will only have to add the PROP_PAGE entries to the property map. The wizard generates the necessary code for the other steps.

Well-behaved containers will display the specified property pages in the same order as the PROP_PAGE entries in the property map. Generally, you should put standard property page entries after the entries for your custom pages in the property map, so that users see the pages specific to your control first.

## Example

The following class for a calendar control uses the `ISpecifyPropertyPages` interface to tell containers that its properties can be set using a custom date page and the stock color page.

[!code-cpp[NVC_ATL_Windowing#72](../atl/codesnippet/cpp/specifying-property-pages_1.h)]

## See also

[Property Pages](../atl/atl-com-property-pages.md)<br/>
[ATLPages Sample](../overview/visual-cpp-samples.md)
