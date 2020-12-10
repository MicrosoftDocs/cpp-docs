---
description: "Learn more about: Appearance, ATL Control Wizard"
title: "Appearance, ATL Control Wizard"
ms.date: "08/31/2018"
f1_keywords: ["vc.codewiz.class.atl.control.misc"]
helpviewer_keywords: ["ATL Control Wizard, appearance"]
ms.assetid: cc16d7ff-74d7-4c15-9ebd-4b19201ff457
---
# Appearance, ATL Control Wizard

Use this page of the wizard to identify additional user element options for the control. This page is available for controls identified as **Standard controls** under **Control type** on the [Options, ATL Control Wizard](../../atl/reference/options-atl-control-wizard.md) page.

## UIElement List

- **View status**

   Sets the appearance of the control within the container.

  - **Opaque**: Sets the VIEWSTATUS_OPAQUE bit in the [VIEWSTATUS](/windows/win32/api/ocidl/ne-ocidl-viewstatus) enumeration and draws the entire control rectangle passed to the [CComControlBase::OnDraw](../../atl/reference/ccomcontrolbase-class.md#ondraw) method. The control appears completely opaque, and none of the container shows behind the control boundaries.

      This setting helps the container draw the control more quickly. If this option is not selected, the control can contain transparent parts.

      Only an opaque control can have a solid background.

  - **Solid Background**: Sets the VIEWSTATUS_SOLIDBKGND bit in the VIEWSTATUS enumeration. The control's background appears as a solid color with no pattern.

      This option is available only if the **Opaque** option is also selected.

- **Add control based on**

   Sets the control to be based on a Windows control type by adding a [CContainedWindow](ccontainedwindowt-class.md) data member to the class implementing the control. It also adds a message map and message handler functions to handle Windows messages for the control. Choose from the list the type of Windows control you want to create, if any.

  - **Button**

  - **ListBox**

  - **SysAnimate32**

  - **SysListView32**

  - **ComboBox**

  - **RichEdit**

  - **SysDateTimePick32**

  - **SysMonthCal32**

  - **ComboBoxEx32**

  - **ScrollBar**

  - **SysHeader32**

  - **SysTabControl32**

  - **Edit**

  - **Static**

  - **SysIPAddress32**

  - **SysTreeView32**

- **Misc status**

   Sets additional appearance and behavior options for the control.

  - **Invisible at run-time**: Sets the control to be invisible at run time. You can use invisible controls to perform operations in the background, such as firing events at timed intervals.

  - **Acts like button**: Sets the OLEMISC_ACTSLIKEBUTTON bit in the [OLEMISC](/windows/win32/api/oleidl/ne-oleidl-olemisc) enumeration to enable a control to act like a button. If the container has marked the control's client site as a default button, selecting this option enables your button control to display itself as a default button by drawing itself with a thicker frame. See [CComControlBase::GetAmbientDisplayAsDefault](../../atl/reference/ccomcontrolbase-class.md#getambientdisplayasdefault) for more information.

  - **Acts like label**: Sets the OLEMISC_ACTSLIKELABEL bit in the OLEMISC enumeration to enable a control to replace the container's native label. The container determines what to do with this flag, if anything.

- **Other**

   Sets additional behavior options for the control.

  - **Normalized DC**: Sets the control to create a normalized device context when it is called to draw itself. This action standardizes the control's appearance, but it makes drawing less efficient.

  - **Window only**: Specifies that your control cannot be windowless. If you do not select this option, your control is automatically windowless in containers that support windowless objects, and it is automatically windowed in containers that do not support windowless objects. Selecting this option forces your control to be windowed, even in containers that support windowless objects.

  - **Insertable**: Select this option to have your control appear in the **Insert Object** dialog box of applications such as Word and Excel. Your control can then be inserted by any application that supports embedded objects through this dialog box.

## See also

[ATL Control Wizard](../../atl/reference/atl-control-wizard.md)<br/>
[SUBEDIT Sample: Superclasses a Standard Windows Control](https://github.com/Microsoft/VCSamples/tree/master/VC2008Samples/ATL/Controls/SubEdit)
