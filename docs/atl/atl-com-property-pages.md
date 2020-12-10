---
description: "Learn more about: ATL COM Property Pages"
title: "ATL COM Property Pages"
ms.date: "11/04/2016"
helpviewer_keywords: ["property pages, COM", "ATL COM objects", "COM property pages", "property pages, ATL", "COM objects, ATL", "ATL property pages"]
ms.assetid: 663c7caa-2e5e-4b5c-b8ea-fd434ceb1654
---
# ATL COM Property Pages

COM property pages provide a user interface for setting the properties (or calling the methods) of one or more COM objects. Property pages are used extensively by ActiveX controls for providing rich user interfaces that allow control properties to be set at design time.

Property pages are COM objects that implement the [IPropertyPage](/windows/win32/api/ocidl/nn-ocidl-ipropertypage) or [IPropertyPage2](/windows/win32/api/ocidl/nn-ocidl-ipropertypage2) interface. These interfaces provide methods that allow the page to be associated with a `site` (a COM object representing the container of the page) and a number of *objects* (COM objects whose methods will be called in response to changes made by the user of the property page). The property page container is responsible for calling methods on the property page interface to tell the page when to show or hide its user interface, and when to apply the changes made by the user to the underlying objects.

Each property page can be built completely independently of the objects whose properties can be set. All that a property page needs is to understand a particular interface (or set of interfaces) and to provide a user interface for calling methods on that interface.

For more information, see [Property Sheets and Property Pages](/windows/win32/com/property-sheets-and-property-pages) in the Windows SDK.

## In This Section

[Specifying Property Pages](../atl/specifying-property-pages.md)<br/>
Lists the steps for specifying property pages for you control and shows an example class.

[Implementing Property Pages](../atl/implementing-property-pages.md)<br/>
Lists the steps for implementing property pages, including methods to override. Walks you through a complete example based on the ATLPages sample program.

## Related Sections

[ATLPages Sample](../overview/visual-cpp-samples.md)<br/>
The sample abstract for the ATLPages sample, which implements a property page using `IPropertyPageImpl`.

[ATL](../atl/active-template-library-atl-concepts.md)<br/>
Provides links to conceptual topics on how to program using the Active Template Library.

## See also

[Concepts](../atl/active-template-library-atl-concepts.md)
