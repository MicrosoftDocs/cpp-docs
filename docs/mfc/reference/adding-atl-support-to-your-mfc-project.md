---
description: "Learn more about: Adding ATL Support to Your MFC Project"
title: "Adding ATL Support to Your MFC Project"
ms.date: "11/04/2016"
f1_keywords: ["vc.codewiz.adding.atl.mfc"]
helpviewer_keywords: ["MFC, ATL support", "ATL, MFC projects"]
---
# Adding ATL Support to Your MFC Project

>[!NOTE]
> The Microsoft Foundation Classes (MFC) library and Active Template Library (ATL) continue to be supported. However, we're no longer adding features or updating the documentation.
> ATL support applies only to simple COM objects added to an MFC executable or DLL project. You can add other COM objects (including ActiveX controls) to MFC projects, but the objects might not operate as expected.

If you have already created an MFC-based application, then you can add support for the Active Template Library (ATL) easily by using the IDE.

::: moniker range=">=msvc-160"

1. In Solution Explorer, right-click the project node.

1. On the shortcut menu, click **Add**, and then click **New Item**.

1. Choose **ATL** in the left pane, then choose **ATL Support** in the center pane.

::: moniker-end

::: moniker range="<=msvc-150"

### To add ATL support to your MFC project

1. In Solution Explorer, right-click the project node.

1. On the shortcut menu, click **Add**, and then click **Add Class**.

1. Select **ATL** in the left pane, then choose **Add ATL Support to MFC Project** in the center pane.

::: moniker-end

For more information about how adding ATL support changes your MFC project's code, see [Details of ATL Support Added by the ATL Wizard](../../mfc/reference/details-of-atl-support-added-by-the-atl-wizard.md)

## See also

[Adding a Class](../../ide/adding-a-class-visual-cpp.md)<br/>
[Adding Functionality with Code Wizards](../../ide/adding-functionality-with-code-wizards-cpp.md)<br/>
[Adding a Member Function](../../ide/adding-a-member-function-visual-cpp.md)<br/>
[Adding a Member Variable](../../ide/adding-a-member-variable-visual-cpp.md)<br/>
[Overriding a Virtual Function](../../ide/overriding-a-virtual-function-visual-cpp.md)<br/>
[MFC Message Handler](../../mfc/reference/adding-an-mfc-message-handler.md)<br/>
[Navigating the Class Structure](../../ide/navigate-code-cpp.md)
