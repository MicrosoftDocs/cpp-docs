---
title: "Appearance, ATL Control Wizard | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "vc.codewiz.class.atl.control.misc"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ATL Control Wizard, appearance"
ms.assetid: cc16d7ff-74d7-4c15-9ebd-4b19201ff457
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Appearance, ATL Control Wizard
Insert "Search Results" summary here.  
  
 Use this page of the wizard to identify additional user element options for the control. This page is available for controls identified as **Standard controls** under **Control type** on the [Options, ATL Control Wizard](../../atl/reference/options-atl-control-wizard.md) page.  
  
## UIElement List  
 **View status**  
 Sets the appearance of the control within the container.  
  
-   **Opaque**: Sets the `VIEWSTATUS_OPAQUE` bit in the [VIEWSTATUS](http://msdn.microsoft.com/library/windows/desktop/ms687201) enumeration and draws the entire control rectangle passed to the [CComControlBase::OnDraw](../../atl/reference/ccomcontrolbase-class.md#ccomcontrolbase__ondraw) method. The control appears completely opaque, and none of the container shows behind the control boundaries.  
  
     This setting helps the container draw the control more quickly. If this option is not selected, the control can contain transparent parts.  
  
     Only an opaque control can have a solid background.  
  
-   Sets the `VIEWSTATUS_SOLIDBKGND` bit in the `VIEWSTATUS` enumeration. The control's background appears as a solid color with no pattern.  
  
     This option is available only if the **Opaque** option is also selected.  
  
 **Add control based on**  
 Sets the control to be based on a Windows control type by adding a [CContainedWindow](ccontainedwindowt-class.md) data member to the class implementing the control. It also adds a message map and message handler functions to handle Windows messages for the control. Choose from the list the type of Windows control you want to create, if any.  

  
-   `Button`  
  
-   `ListBox`  
  
-   `SysAnimate32`  
  
-   `SysListView32`  
  
-   `ComboBox`  
  
-   `RichEdit`  
  
-   `SysDateTimePick32`  
  
-   `SysMonthCal32`  
  
-   `ComboBoxEx32`  
  
-   `ScrollBar`  
  
-   `SysHeader32`  
  
-   `SysTabControl32`  
  
-   `Edit`  
  
-   `Static`  
  
-   `SysIPAddress32`  
  
-   `SysTreeView32`  
  
 **Misc status**  
 Sets additional appearance and behavior options for the control.  
  
-   **Invisible at run-time**: Sets the control to be invisible at run time. You can use invisible controls to perform operations in the background, such as firing events at timed intervals.  
  
-   **Acts like button**: Sets the `OLEMISC_ACTSLIKEBUTTON` bit in the [OLEMISC](http://msdn.microsoft.com/library/windows/desktop/ms678497) enumeration to enable a control to act like a button. If the container has marked the control's client site as a default button, selecting this option enables your button control to display itself as a default button by drawing itself with a thicker frame. See [CComControlBase::GetAmbientDisplayAsDefault](../../atl/reference/ccomcontrolbase-class.md#ccomcontrolbase__getambientdisplayasdefault) for more information.  
  
-   **Acts like label**: Sets the `OLEMISC_ACTSLIKELABEL` bit in the `OLEMISC` enumeration to enable a control to replace the container's native label. The container determines what to do with this flag, if anything.  
  
 **Other**  
 Sets additional behavior options for the control.  
  
-   **Normalized DC**: Sets the control to create a normalized device context when it is called to draw itself. This action standardizes the control's appearance, but it makes drawing less efficient.  
  
-   **Window only**: Specifies that your control cannot be windowless. If you do not select this option, your control is automatically windowless in containers that support windowless objects, and it is automatically windowed in containers that do not support windowless objects. Selecting this option forces your control to be windowed, even in containers that support windowless objects.  
  
-   **Insertable**: Select this option to have your control appear in the **Insert Object** dialog box of applications such as Word and Excel. Your control can then be inserted by any application that supports embedded objects through this dialog box.  
  
## See Also  
 [ATL Control Wizard](../../atl/reference/atl-control-wizard.md)   
 [SUBEDIT Sample: Superclasses a Standard Windows Control](http://msdn.microsoft.com/en-us/30e46bdc-ed92-417c-b6b8-359017265a7b)

