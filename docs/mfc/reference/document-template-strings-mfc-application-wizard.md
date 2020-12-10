---
description: "Learn more about: Document Template Strings, MFC Application Wizard"
title: "Document Template Strings, MFC Application Wizard"
ms.date: "11/04/2016"
f1_keywords: ["vc.appwiz.mfc.exe.doctemp"]
helpviewer_keywords: ["MFC Application Wizard, document template strings"]
ms.assetid: 8109f662-3182-4682-977a-2503321c678a
---
# Document Template Strings, MFC Application Wizard

In this page of the MFC Application Wizard, provide or refine the following options to help with document management and localization. Document template strings are available for applications that include **Document/view architecture support** in the [Application Type](../../mfc/reference/application-type-mfc-application-wizard.md). They are not available for dialog boxes. Because most document template strings are visible and used by the application's users, they are localized into the **Resource language** indicated in the **Application Type** page of the wizard.

- **Nonlocalized strings**

   Applies to applications that create user documents. Users can open, print, and save documents more easily if you provide a file extension and a file type ID. These items are not localized because they are used by the system rather than by the user.

   |Option|Description|
   |------------|-----------------|
   |**File extension**|Sets the file extension associated with the documents that the user saves when using the application. For example, if your project is named Widget, you could name the file extension .wgt. (When you enter the file extension, do not include the period.)<br /><br /> If you provide a file extension, the Explorer can print your application's documents without launching your application when the user drops the document icon on a printer icon.<br /><br /> If you do not specify an extension, a user must specify a file extension when saving files. The wizard does not provide a default file extension.|
   |**File type ID**|Sets the label for your document type in the system registry.|

- **Localized strings**

   Produces strings associated with the application and document that are read and used by the application's users, so the strings are localized.

   |Option|Description|
   |------------|-----------------|
   |**Language**|Indicates the language in which strings are displayed for all the boxes under **Localized strings**. To change the value in this box, select the appropriate language under **Resource language** in the [Application Type](../../mfc/reference/application-type-mfc-application-wizard.md) page of the MFC Application Wizard.|
   |**Main frame caption**|Sets the text appearing at the top of the main application frame. By default, the project name.|
   |**Doc type name**|Identifies the type of document under which a document of the application can be grouped. By default, the project name. Changing the default does not change any other options in this dialog box.|
   |**Filter name**|Sets the name your users can indicate to find files of your file type. This option is available from the **Files of type** and **Save as type** options in the standard Windows **Open** and **Save as** dialog boxes. By default, the project name plus Files, followed by the extension provided in **File extension**. For example, if your project is named Widget, and the file extension is .wgt, the **Filter name** is Widget Files (*.wgt) by default.|
   |**File new short name**|Sets the name appearing in the standard Windows **New** dialog box, if there is more than one new document template. If your application is an [Automation server](../../mfc/automation-servers.md), this name is used as the short name of your Automation object. By default, the project name.|
   |**File type long name**|Sets the file type name in the system registry. If your application is an Automation server, this name is used as the long name of your Automation object. By default, the project name plus .Document.|

## See also

[MFC Application Wizard](../../mfc/reference/mfc-application-wizard.md)
