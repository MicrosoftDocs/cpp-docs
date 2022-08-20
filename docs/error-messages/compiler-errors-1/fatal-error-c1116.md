---
description: "Learn more about: Fatal Error C1116"
title: "Fatal Error C1116"
ms.date: 08/17/2022
f1_keywords: ["C1116"]
helpviewer_keywords: ["C1116"]
---
# Fatal Error C1116

> unrecoverable error importing module/headerunit '*name*'. Specialization of '*primary-template*' with arguments '*argument-list*'

Error C1116 can happen when the creation of the specialization requires the compiler to parse a token-stream and it encounters an identifier without a matching symbol. To resolve the issue, verify that all template specification arguments are defined and spelled correctly.
