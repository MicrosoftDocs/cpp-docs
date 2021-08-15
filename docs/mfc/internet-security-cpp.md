---
description: "Learn more about: Internet Security (C++)"
title: "Internet Security (C++)"
ms.date: "11/04/2016"
helpviewer_keywords: ["code signing [MFC], Internet security", "sandboxing [MFC]", "digital signatures [MFC], Internet security", "code signing [MFC]", "Web application security [MFC]", "code access security [MFC], Internet security considerations", "security [MFC]", "security [MFC], Internet", "Internet applications [MFC], security", "Web application security [MFC], Internet security approaches"]
ms.assetid: bf0da697-81bc-41f0-83fa-d7f82ed83df8
---
# Internet Security (C++)

Code safety is a major issue for developers and for users of Internet applications. There are risks: malicious code, code that has been tampered with, and code from unknown sites or authors.

There are two basic approaches to security when developing for the Internet. The first is called "sandboxing." In this approach, an application is restricted to a particular set of APIs, and excluded from potentially dangerous ones such as file I/O where a program could destroy data on a user's computer. The second is implemented using digital signatures. This approach is referred to as "shrinkwrap" for the Internet. Code is verified and signed using private key/public key technology. Before the code is run, its digital signature is verified to ensure that the code is from a known authenticated source, and that the code has not been altered since it has been signed.

In the first case, you trust that the application will not do any harm and you trust the origin of the application. In the second, digital signatures are used to verify authenticity. Digital signing is an industry standard used to identify and provide details about the publisher of the code. Its technology is based on standards, including RSA and X.509. Browsers typically allow users to choose if they want to download and run code of unknown origin.

## See also

[MFC Internet Programming Tasks](mfc-internet-programming-tasks.md)<br/>
[MFC Internet Programming Basics](mfc-internet-programming-basics.md)
