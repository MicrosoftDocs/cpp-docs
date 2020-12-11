---
description: "Learn more about: Strings, ATL Property Page Wizard"
title: "Strings, ATL Property Page Wizard"
ms.date: "05/09/2019"
f1_keywords: ["vc.codewiz.class.atl.ppg.strings"]
helpviewer_keywords: ["ATL Property Page Wizard, strings"]
ms.assetid: 00547db6-911f-49eb-92e1-2ba67079d4df
---
# Strings, ATL Property Page Wizard

::: moniker range="msvc-160"

The ATL Property Page wizard is not available in Visual Studio 2019 and later.

::: moniker-end

::: moniker range="<=msvc-150"

Provides the text associated with the property page.

- **Title**

   Sets the text that appears on the tab of the property page.

- **Doc string**

   Sets a text string describing the page. This string can be displayed in the property sheet dialog box. The property frame could use the description in a status line or tool tip. The standard property frame currently does not use this string.

- **Help file**

   Sets the name of the help file that describes how to use the property page. This name should not include a path. When the user presses **Help**, the frame opens the help file in the directory named in the value of the HelpDir key in the property page registry entries under its CLSID.

::: moniker-end

## See also

[ATL Property Page Wizard](../../atl/reference/atl-property-page-wizard.md)<br/>
[Options, ATL Property Page Wizard](../../atl/reference/options-atl-property-page-wizard.md)
