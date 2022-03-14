---
description: "Learn more about: Add Class from Typelib Wizard"
title: "Add Class from Typelib Wizard"
ms.date: "03/10/2022"
helpviewer_keywords: ["COM interfaces, adding classes"]
ms.assetid: 96152afd-9374-4649-a6ab-b0fa2a5592a3
ms.custom: devdivchpfy22
---
# Add Class from Typelib Wizard

::: moniker range=">=msvc-160"

The wizard creates a class for each interface you add from the selected type library.

:::image type="content" source="../reference/media/add-class-from-typelib-wizard.png" alt-text="Screenshot of Add Class From Typelib Wizard.":::

- **Implement interface from**

   Specifies the location of the type library.

   |Option|Description|
   |------------|-----------------|
   |**Registry**|Registered type libraries are listed in **Available type libraries**.|
   |**File**|Provide the file location in **Location** for type libraries that aren't registered with the system.|

- **Available type libraries**

   Lists the type libraries registered in the system. Select a type library from this list to display its interfaces in the **Interfaces** list.

- **Location**

   Specifies the location of the type library. Under **Implement interface from**, select **File** to provide the type library file location. To browse to the location of the file, select the ellipsis button.

- **Available Interfaces**

   Lists the interfaces in the type library selected in the **Available type libraries** list.

   |Transfer button|Description|
   |---------------------|-----------------|
   |**>**|Adds the selected interface in the **Interfaces** list. Unavailable if no interface is selected.|
   |**>>**|Adds all the interfaces for the type library selected in the **Available type libraries** list.|
   |**\<**|Removes the selected class in the **Implement interfaces** list. Unavailable if no class is selected.|
   |**\<\<**|Removes all the classes in the **Implement interfaces** list. Unavailable if the **Implement interfaces** list is empty.|

- **Implement interfaces**

   Specifies the class names to be generated from the interfaces added using the **>** or **>>** button. Click the box to select a class, and then use the up or down keys to scroll through the list. The wizard generates classes when you select **OK**. You can select only one class at a time in this box.

   To remove a class, select it in this list and then select **<**. Select **<<** to remove all classes in the **Implement interfaces** box.

::: moniker-end

::: moniker range="<=msvc-150"

Use this wizard to add an MFC class from an available type library. The wizard creates a class for each interface you add from the selected type library.

- **Add class from**

   Specifies the location of the type library, from which the class is created.

   |Option|Description|
   |------------|-----------------|
   |**Registry**|Registered type libraries are listed in **Available type libraries**.|
   |**File**|Provide the file location in **Location** for type libraries that aren't registered with the system.|

- **Available type libraries**

   Lists the type libraries registered in the system. Select a type library from this list to display its interfaces in the **Interfaces** list.

- **Location**

   Specifies the location of the type library. If you select **File** under **Add Class From**, you can provide the location of the file containing the type library. To browse to the location of the file, select the ellipsis button.

- **Interfaces**

   Lists the interfaces in the type library selected in the **Available type libraries** list.

   |Transfer button|Description|
   |---------------------|-----------------|
   |**>**|Adds the interface selected in the **Interfaces** list. Unavailable if no interface is selected.|
   |**>>**|Adds all the interfaces in the type library selected in the **Available type libraries** list.|
   |**\<**|Removes the class selected in the **Generated classes** list. Unavailable if no class is selected in the **Generated classes** list.|
   |**\<\<**|Removes all the classes in the **Generated classes** list. Unavailable if the **Generated classes** list is empty.|

- **Generated classes**

   Specifies the class names to be generated from the interfaces added using the **>** or **>>** button. Click the box to select a class, and then use the up or down keys to scroll through the list, viewing each class name in the **Class** box and file name in the **File** box that the wizard generates when you select **Finish**. You can select only one class at a time in this box.

   To remove a class, select it in this list and then select **<**. Select **<<** to remove all classes in the **Generated classes** box.

- **Class**

   Specifies the name of the class selected in the **Generated classes** box that the wizard adds when you select **Finish**. You can edit the name in the **Class** box.

- **File**

   Sets the name of the header file for the new class. By default, this name is based on the name you provide in **Generated classes**. Select the ellipsis button to save the file name to the location of your choice, or to append the class declaration to an existing file. If you choose an existing file, the wizard won't save it to the selected location until you select **Finish** in the wizard.

   The wizard doesn't overwrite a file. If you select the name of an existing file, when you select **Finish**, the wizard prompts you to indicate whether the class declaration should be appended to the contents of the file. Select **Yes** to append the file; select **No** to return to the wizard and specify another file name.

::: moniker-end

## See also

[MFC Class from a Type Library](../../mfc/reference/adding-an-mfc-class-from-a-type-library.md)<br/>
[Automation Clients: Using Type Libraries](../../mfc/automation-clients-using-type-libraries.md)
