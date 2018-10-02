---
title: "UICheckState Enumeration | Microsoft Docs"
ms.custom: ""
ms.date: "04/03/2017"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
f1_keywords: ["afxwinforms/uicheckstate"]
dev_langs: ["C++"]
helpviewer_keywords: ["uicheckstate enumeration [MFC]"]
ms.assetid: 2ac0098c-20e7-410c-9685-5ead5cb02b63
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---

# UICheckState Enumeration
Describes the check state of a user interface item for the command.

### Syntax

```
public enum class
{
   [DefaultValue(typeid<Microsoft::VisualC::MFC::UICheckState>, "Checked")]
   Unchecked,
   Checked,
   Indeterminate
};
```

### Remarks

[ICommandUI::Check](icommandui-interface.md#check) uses these values to describe the state of a user interface item.
For more information on using Windows Forms, see [Using a Windows Form User Control in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).

### Requirements

**Header:** afxwinforms.h (defined in assembly atlmfc\lib\mfcmifc80.dll)
