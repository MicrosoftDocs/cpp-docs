---
title: "Walkthrough: Creating a Ribbon Application By Using MFC | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ribbon application, creating (MFC)"
  - "creating a ribbon aplication (MFC)"
ms.assetid: e61393e2-1d6b-4594-a7ce-157d3d1b0d9f
caps.latest.revision: 21
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
# Walkthrough: Creating a Ribbon Application By Using MFC
This walkthrough shows how to use the **MFC Application Wizard** to create an application that has a ribbon by default. You can then expand the ribbon by adding a **Custom** ribbon category that has a **Favorites** ribbon panel, and then adding some frequently used commands to the panel.  
  
## Prerequisites  
 This walkthrough assumes that you have set [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] to use **General Development Settings**. If you are using different settings, some of the user interface (UI) elements that are referenced in the following instructions might not be displayed. For information about how to change settings, see [How to: Reset Your Settings](http://msdn.microsoft.com/en-us/c95c51be-e609-4769-abba-65e6beedec76).  
  
### To create an MFC application that has a ribbon  
  
1.  Use the **MFC Application Wizard** to create an MFC application that has a ribbon. To run the wizard, on the **File** menu, point to **New**, and then click **Project**.  
  
2.  In the **New Project** dialog box, expand the **Visual C++** node under **Installed Templates**, select **MFC**, and then select **MFC Application**. Type a name for the project, for example, `MFCRibbonApp`, and then click **OK**.  
  
3.  On the first page of the **MFC Application Wizard**, click **Next**.  
  
4.  On the **Application Type** page, under **Visual style and colors**, select **Office 2007 (Blue theme)**. Leave the other settings as they are. Click **Next**.  
  
5.  On the **Compound Document Support** page, make sure that **None** is selected and then click **Next**.  
  
6.  On the **Document Template Properties** page, in the **File extension** box, type a file name extension for documents that this application creates, for example, `mfcrbnapp`. Click **Next**.  
  
7.  On the **Database Support** page, make sure that **None** is selected and then click **Next**.  
  
8.  On the **User Interface Features** page, make sure that **Use a ribbon** is selected. Click **Next**.  
  
9. By default, the **MFC Application Wizard** adds support for several docking panes. Because this walkthrough just teaches about the ribbon, you can remove these options from the application. On the **Advanced Features** page, clear all options. Click **Next**.  
  
10. On the **Generated Classes** page, click **Finish** to create the MFC application.  
  
11. To verify that the application was created successfully, build it and run it. To build the application, on the **Build** menu, click **Build Solution**. If the application builds successfully, run it by clicking **Start Debugging** on the **Debug** menu.  
  
     The wizard automatically creates a ribbon that has one ribbon category that is named **Home**. This ribbon contains three ribbon panels, which are named **Clipboard**, **View**, and **Window**.  
  
### To add a category and panel to the ribbon  
  
1.  To open the ribbon resource that the wizard created, on the **View** menu, point to **Other Windows** and then click **Resource View**. In **Resource View**, click **Ribbon** and then double-click **IDR_RIBBON**.  
  
2.  First, add a custom category to the ribbon by double-clicking **Category** in the **Toolbox**.  
  
     A category that has the caption **Category1** is created. By default, the category contains one panel.  
  
     Right-click **Category1** and then click **Properties**. In the **Properties** window, change **Caption** to `Custom`.  
  
     The **Large Images** and **Small Images** properties specify the bitmaps that are used as icons for the ribbon elements in this category. Because creating custom bitmaps is beyond the scope of this walkthrough, just reuse the bitmaps that were created by the wizard. Small bitmaps are 16 pixels by 16 pixels. For small images, use the bitmaps that are accessed by the IDB_FILESMALL resource ID. Large bitmaps are 32 pixels by 32 pixels. For large images, use the bitmaps that are accessed by the IDB_FILELARGE resource ID.  
  
    > [!NOTE]
    >  On high dots per inch (HDPI) displays, the HDPI versions of the images are automatically used.  
  
3.  Next, customize the panel. Panels are used to group items that are logically related to one another. For example, on the **Home** tab of this application, the **Cut**, **Copy**, and **Paste** commands are all located on the **Clipboard** panel. To customize the panel, right-click **Panel1** and then click **Properties**. In the **Properties** window, change **Caption** to `Favorites`.  
  
     You can specify the **Image Index** for the panel. This number specifies the icon that is displayed if the ribbon panel is added to the **Quick Access Toolbar**. The icon is not displayed on the ribbon panel itself.  
  
4.  To verify that the ribbon category and panel were created successfully, preview the ribbon control. On the **Ribbon Editor Toolbar**, click the **Test Ribbon** button. A **Custom** tab and **Favorites** panel should be displayed on the ribbon.  
  
### To add elements to the ribbon panels  
  
1.  To add elements to the panel that you created in the previous procedure, drag controls from the **Ribbon Editor** section of the **Toolbox** to the panel in the design view.  
  
2.  First, add a **Print** button. The **Print** button will have a submenu that contains a **Quick Print** command that prints by using the default printer. Both of these commands are already defined for this application. They are located on the application menu.  
  
     To create the **Print** button, drag a Button tool to the panel.  
  
     In the **Properties** window, change the **ID** property to **ID_FILE_PRINT**, which should already be defined. Change **Caption** to `Print`. Change **Image Index** to `4`.  
  
     To create the **Quick Print** button, click the property value column next to **Menu Items**, and then click the ellipsis (**...**). In the **Items Editor**, click the unlabeled **Add** button to create a menu item. In the **Properties** window, change **Caption** to `Quick Print`, **ID** to `ID_FILE_PRINT_DIRECT`, and **Image** to `5`. The image property specifies the Quick Print icon in the IDB_FILESMALL bitmap resource.  
  
3.  To verify that the buttons were added to the ribbon panel, build the application and run it. To build the application, on the **Build** menu, click **Build Solution**. If the application builds successfully, run the application by clicking **Start Debugging** on the **Debug** menu. The **Print** button and the combo box on the **Favorites** panel on the **Custom** tab on the ribbon should be displayed.  
  
## Next Steps  
 [How to: Customize the Quick Access Toolbar](../mfc/how-to-customize-the-quick-access-toolbar.md)  
  
 [How to: Customize the Application Button](../mfc/how-to-customize-the-application-button.md)  
  
 For end-to-end samples, see [Samples (MFC Feature Pack)](../visual-cpp-samples.md).  
  
## See Also  
 [Walkthroughs](../mfc/walkthroughs-mfc.md)   
 [Samples (MFC Feature Pack)](../visual-cpp-samples.md)

