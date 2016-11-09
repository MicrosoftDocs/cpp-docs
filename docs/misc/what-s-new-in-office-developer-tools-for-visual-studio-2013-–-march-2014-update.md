---
title: "What&#39;s New in Office Developer Tools for Visual Studio 2013 – March 2014 Update | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: e701c650-2a2b-4b18-9f7b-04d4fc59a05d
caps.latest.revision: 2
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# What&#39;s New in Office Developer Tools for Visual Studio 2013 – March 2014 Update
The **Office Developer Tools for Visual Studio 2013 – March 2014 Update** includes many new features that either improve upon the tooling included in Visual Studio 2013 for Cloud Business Apps and apps for Office/SharePoint development. It also allows you to build new types of apps for Office that are enabled in Office 2013 SP1 and Office 365.  
  
-   [What’s New in Cloud Business Apps](#cba)  
  
-   [What’s New in App for Office Development](#office)  
  
-   [What’s New in App for SharePoint Development](#sharepoint)  
  
##  <a name="cba"></a> What’s New in Cloud Business Apps  
 Visual Studio 2013 introduced the Cloud Business App project template, which enables you to quickly build modern business applications that integrate with and extend the Office 365 platform experience. In this release, several new features have been added to provide better support for connecting to enterprise data and integrating document libraries, as well as better support for rapid application development.  
  
### Attaching to Enterprise Data  
 **New SAP Data Source**  
  
 Enterprise data plays a key role in many business applications. There are many different types of the enterprise data sources now on the market. In addition to the database, SharePoint, OData Service and WCF RIA Service data sources, the March 2014 Update tooling also offers the first class support for SAP Netweaver Gateway. When you connect to SAP, your cloud business app will now honor SAP annotations for Phone, WebAddress, and Email, simplifying the configuration of entities consumed from SAP Netweaver Gateway.  
  
 **Attach Data Source Wizard Improvements**  
  
 Many enterprise data sources store a large number of data entities, where a cloud business app likely needs to interact with only a few of them. In order to make it easy for you to find the entities you want to connect to, the **Attach Data Source Wizard** now allows you to search for entities based on the name and filter the entities by different categories. It also shows you the relationships of the entities within the data source.  
  
 **Performance Improvement When Attaching to Large Data Sets**  
  
 If your cloud business application needs to attach to a large data set, you’ll notice an improvement in performance in the **Attach Data Source Wizard**. The layout of the entity designer has been enhanced for large data sets, so that you can easily browse the relationships between the entities. In addition, it now allows you to change the order of properties in an entity.  
  
 **Business Type Improvements**  
  
 In addition to large numbers of entities, many enterprise data sources involve sophisticated business types, such as complex types. The March 2014 Update includes new support for complex data types.  
  
 If your cloud business app attaches to a SharePoint list that includes **Person** type columns, those columns will automatically light up as contacts when you run the app. For example, if you have Lync installed on your machine and it connects to the same Active Directory that your SharePoint site uses, the person type column shows the values as Lync contacts and activates Lync features automatically in your cloud business app.  
  
### Integrating Documents  
 Document storage and retrieval is a common requirement for many business applications. For example, you might want to provide access to a list of documents related to a product when a user views the details of the product. You may also want to allow your users to manage the documents in the app. Cloud business apps now enables you to attach to a SharePoint document library list and set up a relationship between the list entity and another data entity. With this capability, you can quickly build an app that shows documents related to a specific data field.  
  
 In addition, when you attach your app to a SharePoint host-web document library, the app screens will be integrated with a set of new document controls, which allow your users to create new Office documents (either blank documents or from document templates that are available in the attached document library), open documents in the Office Web App or Office client, and upload existing documents. All of these capabilities are provided by the tools without requiring any extra action from you.  
  
### Rapid Application Development Enhancements  
 **Enhanced Summary Control**  
  
 To better work with different data types, the summary control has been updated to display the default control for the underlying semantic type. With this support, if the summary control is associated with a **Person** type, the **Person Viewer** control will be used by the summary control, which presents additional information about a person (for example, the person’s name, title, and display picture).  
  
> [!NOTE]
>  The `contentItem.value` property for the summary control now returns the summary property value instead of the whole data entity. If you’ve used `contentItem.value` for a summary control to get the entity for accessing another property in the entity, you will need to update your code to use `contentItem.data` instead.  
  
 **Built-in Logic for Filtering Large Data Sets on Screens**  
  
 The March 2014 Update includes built-in data filtering support. Without requiring you do anything new, the cloud business app generates mobile-optimized screens, which allow your users to search data tables and sort the table using table headers.  
  
 **Create Screen Sets**  
  
 In order to help you to quickly build commonly-used screens for your users to browse, view and edit data in your app, a common screen set is introduced in this release. Instead of creating browse, view and new/edit screen one by one, you can now simply choose to create a common screen set, which will generate all these three types of screens at once. The common screen set also hooks up the data tables, relationships and navigation between screens automatically for you.  
  
 **App Bookmarking**  
  
 Users often want to bookmark a page in your app in order to quickly return to that page. Cloud business apps in this release now support bookmarking without you writing any code. It allows users to bookmark any page in the app. They can also pin a page to the start screen on their mobile devices.  
  
##  <a name="office"></a> What’s New in App for Office Development  
 **New Types of apps for Office**  
  
 Office 2013 SP1 and Office 365 support PowerPoint content apps, Access Web App content apps, and allows your mail app to be activated in compose forms (for example, when users are writing a new email message or creating a new appointment). The March 2014 Update supports all of these new app types across the entire development cycle from project creation, manifest editing, programming, and debugging to publishing. Napa has also been updated to support these new app types.  
  
 **Updated Project Templates**  
  
 The app for Office project creation wizard in Office Developer Tools has been updated to provide more organized options for app creation. Especially for content apps, two project templates are introduced in this release. One is simply to create a basic app, which contains minimal sample code, while the other contains more sample code to demonstrate how to implement an app for Excel and Access Web App to visualize data. You can choose between these two project templates in the project creation wizard to get a quick start for your app.  
  
 **More Choices to Activate Your app**  
  
 Going beyond the new app types, Office 2013 SP1 and Office 365 enables a new way for you to specify when the app can be activated. In addition to the app hosts where the app can be activated (Word, Excel, PowerPoint, etc.), it defines a list of API sets, each of which represents a set of Office JSOM APIs with the same semantics (Selection, TableBindings, etc.). For those Office APIs called in the key functionalities of your app, you can add the corresponding API sets into the app manifest, so that the app won’t be activated in Office hosts that don’t support those APIs. By doing these, you can get your app activated on as many hosts as possible across different versions without adding complicated programming logic.  
  
 To support this type of activation, the app for Office tooling introduces an Activate page in the task pane app and content app manifest editors. It allows you to update the API sets for your app, and also shows you where the app will be activated based on the API sets and the app hosts you select.  
  
 **Better IntelliSense Support**  
  
 To provide a better programming experience for the new app types and the new app activation model, IntelliSense is evolved as well. The IntelliSense only shows the APIs that are valid for the target app hosts. For example, if you build a content app that only targets the Access Web App, APIs that are supported in the Access Web App will show in the IntelliSense but not others. If you build a mail app only for compose forms, read-form mail app APIs will be hidden from the IntelliSense so that you will never misuse the APIs. Moreover, the Activation page in the task pane app / content app manifest editor includes an option that you can select to only show IntelliSense with the APIs that belong to the API sets you specified in the manifest.  
  
 **Debugging Improvements**  
  
 The March 2014 Update gives you more debugging options as well. For Excel task pane and content apps, you can debug them in the Office Web App as well as the desktop client. You can choose between IE, Chrome, and Firefox (if they are installed on your machine) through the app project properties window to launch the Office Web App for debugging  
  
 In addition to the Office Web App debugging support, the new tools also enable you to debug “Just My Code” for both apps for Office and SharePoint. With this option enabled, you will no longer be bothered by the JavaScript exceptions that are irrelevant to your code.  
  
##  <a name="sharepoint"></a> What’s New in App for SharePoint Development  
 **Targeting Different Versions of SharePoint**  
  
 The app for SharePoint tooling now allows you to target your app to SharePoint Server 2013 (which is compatible with SharePoint Online) or only to SharePoint Online. Through a simple switch in the app for SharePoint project properties page, the tools will update the SharePoint version number and the SharePoint Client Components assembly references used in your project accordingly.  
  
 **MVS Support for Client Web Parts**  
  
 To enhance the support with MVC web applications, MVC support for client web part pages is added in this release. As long as your app for SharePoint project is associated with an MVC application, when you add a client web part and choose to create a new part page in the client web part creation wizard, a client web part controller and a default view to go with the client web part controller will be added into the MVC application instead of a .aspx page.  
  
 **List Instance Support for Remote Event Receivers**  
  
 In Visual Studio 2013, the wizard for remote event receiver creation only allows you to pick a list template. Now, the wizard also shows all the list instances in the project for you to choose and create a remote event receiver. The tools will create the correct manifest based on your selection.  
  
 **Improved List Template Generation**  
  
 This release includes a fix for the SharePoint list template item as well. With the March 2014 update, when you create a SharePoint list template, the Type attribute in the list template manifest is set to the type of its parent template (instead of the default value “10000” as it used to be). With this fix, your new list template will inherit all the properties from its parent template for free. It’s especially helpful for those sophisticated list template types, such as document libraries, which contain a lot of custom features.