---
description: "Learn more about: Security Implications of Customization"
title: "Security Implications of Customization"
ms.date: "11/04/2016"
helpviewer_keywords: ["security, MFC Feature Pack", "MFC Feature Pack, security"]
ms.assetid: 9be96b12-be38-43bd-a133-5d671265f7a1
---
# Security Implications of Customization

This topic discusses a potential security weakness in MFC.

## Potential Security Weakness

MFC allows the user customize the look of an application user interface, for example, the appearance of buttons and icons. MFC also supports user-defined tools, which let the user execute shell commands. A security vulnerability arises because the customized settings of the application are saved in the user profile in the registry. Anyone who can access the registry can edit those settings and change the application appearance or behavior. For example, an administrator on the computer could impersonate a user by causing the user's application to execute arbitrary programs (even from a network share).

## Workarounds

We recommend any of these three ways to close the vulnerabilities in the registry:

- Encrypt the data that is stored there

- Store the data in a secure file instead of in the registry.

   To accomplish either of these first two ways, derive a class from [CSettingsStore Class](../mfc/reference/csettingsstore-class.md) and override its methods to implement encryption or storage outside the registry.

- You can also disable customizations in your application.

## See also

[Customization for MFC](../mfc/customization-for-mfc.md)
