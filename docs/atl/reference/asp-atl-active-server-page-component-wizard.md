---
description: "Learn more about: ASP, ATL Active Server Page Component Wizard"
title: "ASP, ATL Active Server Page Component Wizard"
ms.date: "11/04/2016"
f1_keywords: ["vc.codewiz.class.atl.asp.asp"]
helpviewer_keywords: ["ATL Active Server Page Component Wizard, ASP"]
ms.assetid: 4d8cafd6-5e12-4461-8911-29288896af3c
---
# ASP, ATL Active Server Page Component Wizard

Use this page of the ATL Active Server Page Component Wizard to specify optional settings for handling information and state related to your ASP component.

- **Optional methods**

   Adds the optional ASP methods, **OnStartPage** and **OnEndPage**, to your object. This option must be selected to set any Active Server Pages intrinsic objects. By default, it is selected.

- **OnStartPage/OnEndPage**

   [OnStartPage](/previous-versions//ms691624\(v=vs.85\)) is called the first time the script tries to access the object. **OnEndPage** is called when the object is finished processing the script.

- **Intrinsic object**

   You must select the **OnStartPage/OnEndPage** option to set any ASP intrinsic objects.

|Option|Description|
|------------|-----------------|
|**Request**|Provides access to the Active Server Pages intrinsic **Request** object. The Request object is used to pass an HTTP request.|
|**Response**|Provides access to the Active Server Pages intrinsic **Response** object. In response to a request, the Response object sends information to the browser to display to the user.|
|**Session**|Provides access to the Active Server Pages intrinsic **Session** object. The **Session** object maintains information about the current user session, including storing and retrieving state information.|
|**Application**|Provides access to the Active Server Pages intrinsic **Application** object. The **Application** object manages state that is shared across multiple ASP objects.|
|**Server**|Provides access to the Active Server Pages intrinsic **Server** object. The **Server** object allows you to create other ASP objects.|

## See also

[ATL Active Server Page Component Wizard](../../atl/reference/atl-active-server-page-component-wizard.md)<br/>
[ATL Active Server Page Component](../../atl/reference/adding-an-atl-active-server-page-component.md)
