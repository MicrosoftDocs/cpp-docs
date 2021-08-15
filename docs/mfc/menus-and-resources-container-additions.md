---
description: "Learn more about: Menus and Resources: Container Additions"
title: "Menus and Resources: Container Additions"
ms.date: "11/04/2016"
f1_keywords: ["IDP_OLE_INIT_FAILED", "IDP_FAILED_TO_CREATE", "VK_ESCAPE"]
helpviewer_keywords: ["application accelerator table [MFC]", "VK_ESCAPE key [MFC]", "IDP_FAILED_TO_CREATE macro [MFC]", "visual editing, application menus and resources", "OLE containers [MFC], menus and resources", "accelerator tables [MFC], container applications", "IDP_OLE_INIT_FAILED macro [MFC]", "CONTAIN tutorial [MFC]", "Links menu item [MFC]"]
ms.assetid: 425448be-8ca0-412e-909a-a3a9ce845288
---
# Menus and Resources: Container Additions

This article explains the changes that need to be made to the menus and other resources in a visual editing container application.

In container applications, two types of changes need to be made: modifications to existing resources to support OLE visual editing and addition of new resources used for in-place activation. If you use the application wizard to create your container application, these steps will be done for you, but they may require some customization.

If you do not use the application wizard, you may want to look at OCLIENT.RC, the resource script for the OCLIENT sample application, to see how these changes are implemented. See the MFC OLE sample [OCLIENT](../overview/visual-cpp-samples.md).

Topics covered in this article include:

- [Container Menu Additions](#_core_container_menu_additions)

- [Accelerator Table Additions](#_core_container_application_accelerator_table_additions)

- [String Table Additions](#_core_string_table_additions_for_container_applications)

## <a name="_core_container_menu_additions"></a> Container Menu Additions

You must add the following items to the Edit menu:

|Item|Purpose|
|----------|-------------|
|**Insert New Object**|Opens the OLE Insert Object dialog box to insert a linked or embedded item into the document.|
|**Paste Link**|Pastes a link to the item on the Clipboard into the document.|
|**OLE Verb**|Calls the selected item's primary verb. The text of this menu item changes to reflect the primary verb of the selected item.|
|**Links**|Opens the OLE Edit Links dialog box to change existing linked items.|

In addition to the changes listed in this article, your source file must include AFXOLECL.RC, which is required for the Microsoft Foundation Class Library implementation. Insert New Object is the only required menu addition. Other items can be added, but those listed here are the most common.

You must create a new menu for your container application if you want to support in-place activation of contained items. This menu consists of the same File menu and Window pop-up menus used when files are open, but it has two separators placed between them. These separators are used to indicate where the server (component) item (application) should place its menus when activated in place. For more information on this menu-merging technique, see [Menus and Resources: Menu Merging](menus-and-resources-menu-merging.md).

## <a name="_core_container_application_accelerator_table_additions"></a> Container Application Accelerator Table Additions

Small changes to a container application's accelerator table resources are necessary if you are supporting in-place activation. The first change allows the user to press the escape key (ESC) to cancel the in-place editing mode. Add the following entry to the main accelerator table:

|ID|Key|Type|
|--------|---------|----------|
|ID_CANCEL_EDIT_CNTR|VK_ESCAPE|**VIRTKEY**|

The second change is to create a new accelerator table that corresponds to the new menu resource created for in-place activation. This table has entries for the File and Window menus in addition to the VK_ESCAPE entry above. The following example is the accelerator table created for in-place activation in the MFC sample [CONTAINER](../overview/visual-cpp-samples.md):

|ID|Key|Type|
|--------|---------|----------|
|ID_FILE_NEW|CTRL+N|**VIRTKEY**|
|ID_FILE_OPEN|CTRL+O|**VIRTKEY**|
|ID_FILE_SAVE|CTRL+S|**VIRTKEY**|
|ID_FILE_PRINT|CTRL+P|**VIRTKEY**|
|ID_NEXT_PANE|VK_F6|**VIRTKEY**|
|ID_PREV_PANE|SHIFT+VK_F6|**VIRTKEY**|
|ID_CANCEL_EDIT_CNTR|VK_ESCAPE|**VIRTKEY**|

## <a name="_core_string_table_additions_for_container_applications"></a> String Table Additions for Container Applications

Most of the changes to string tables for container applications correspond to the additional menu items mentioned in [Container Menu Additions](#_core_container_menu_additions). They supply the text displayed in the status bar when each menu item is displayed. As an example, here are the string-table entries the application wizard generates:

|ID|String|
|--------|------------|
|IDP_OLE_INIT_FAILED|OLE initialization failed. Make sure that the OLE libraries are the correct version.|
|IDP_FAILED_TO_CREATE|Failed to create object. Make sure that the object is entered in the system registry.|

## See also

[Menus and Resources (OLE)](menus-and-resources-ole.md)<br/>
[Menus and Resources: Server Additions](menus-and-resources-server-additions.md)
