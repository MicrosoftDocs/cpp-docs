---
description: "Learn more about: DCOMCNFG"
title: "DCOMCNFG"
ms.date: "11/04/2016"
helpviewer_keywords: ["DCOMCNFG utility", "DCOM, configuring in ATL"]
ms.assetid: 5a8126e9-ef27-40fb-a66e-9dce8d1a7e80
---
# DCOMCNFG

DCOMCNFG is a Windows NT 4.0 utility that allows you to configure various DCOM-specific settings in the registry. The DCOMCNFG window has three pages: Default Security, Default Properties, and Applications. Under Windows 2000 a fourth page, Default Protocols, is present.

## Default Security Page

You can use the Default Security page to specify default permissions for objects on the system. The Default Security page has three sections: Access, Launch, and Configuration. To change a section's defaults, click the corresponding **Edit Default** button. These Default Security settings are stored in the registry under `HKEY_LOCAL_MACHINE\Software\Microsoft\OLE`.

## Default Protocols Page

This page lists the set of network protocols available to DCOM on this machine. The order reflects the priority in which they will be used; the first in the list has the highest priority. Protocols can be added or deleted from this page.

## Default Properties Page

On the Default Properties page, you must select the **Enable Distributed COM on this computer** check box if you want clients on other machines to access COM objects running on this machine. Selecting this option sets the `HKEY_LOCAL_MACHINE\Software\Microsoft\OLE\EnableDCOM` value to `Y`.

## Applications Page

You change the settings for a particular object with the Applications page. Simply select the application from the list and click the **Properties** button. The Properties window has five pages:

- The General page confirms the application you are working with.

- The Location page allows you to specify where the application should run when a client calls `CoCreateInstance` on the relevant CLSID. If you select the **Run application on the following computer** check box and enter a computer name, then a `RemoteServerName` value is added under the AppID for that application. Clearing the **Run application on this computer** check box renames the `LocalService` value to `_LocalService` and, thereby, disables it.

- The Security page is similar to the Default Security page found in the DCOMCNFG window, except that these settings apply only to the current application. Again, the settings are stored under the AppID for that object.

- The Identify page identifies which user is used to run the application.

- The Endpoints page lists the set of protocols and endpoints available for use by clients of the selected DCOM server.

## See also

[Services](../atl/atl-services.md)
