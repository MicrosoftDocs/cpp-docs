---
description: "Learn more about: Options, ATL Property Page Wizard"
title: "Options, ATL Property Page Wizard"
ms.date: "05/09/2019"
f1_keywords: ["vc.codewiz.class.atl.ppg.options"]
helpviewer_keywords: ["ATL Property Page Wizard, options"]
ms.assetid: a7107779-b2ea-4f99-b84b-7f3e0c504bc8
---
# Options, ATL Property Page Wizard

::: moniker range="msvc-160"

The ATL Property Page wizard is not available in Visual Studio 2019 and later.

::: moniker-end

::: moniker range="<=msvc-150"

Use this page of the wizard to define the threading model and aggregation level of property page you are creating.

- **Threading model**

   Specifies the threading model used by the property page.

   See [Specifying the Project's Threading Model](../../atl/specifying-the-threading-model-for-a-project-atl.md) for more information.

   |Option|Description|
   |------------|-----------------|
   |**Single**|The property page runs only in the primary COM thread.|
   |**Apartment**|The property page can be created in any single thread apartment. The default.|

- **Aggregation**

   Adds aggregation support for the property page you are creating. See [Aggregation](../../atl/aggregation.md) for more information.

   |Option|Description|
   |------------|-----------------|
   |**Yes**|Create a property page that can be aggregated.|
   |**No**|Create a property page that cannot be aggregated.|
   |**Only**|Create a property page that can only be instantiated through aggregation.|

::: moniker-end

## See also

[ATL Property Page Wizard](../../atl/reference/atl-property-page-wizard.md)<br/>
[Strings, ATL Property Page Wizard](../../atl/reference/strings-atl-property-page-wizard.md)
