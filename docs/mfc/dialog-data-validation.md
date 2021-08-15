---
description: "Learn more about: Dialog Data Validation"
title: "Dialog Data Validation"
ms.date: "11/04/2016"
helpviewer_keywords: ["validating data [MFC], message boxes", "data validation [MFC], dialog boxes", "dialog boxes [MFC], validating data", "validating data [MFC], dialog box data entry", "DDV (dialog data validation) [MFC]", "data validation [MFC], message boxes"]
ms.assetid: f070c309-2044-4ff2-8c92-1ec1ea84af58
---
# Dialog Data Validation

You can specify validation in addition to data exchange by calling DDV functions, as shown in the example in [Dialog Data Exchange](dialog-data-exchange.md). The `DDV_MaxChars` call in the example validates that the string entered in the text-box control is not longer than 20 characters. The DDV function typically alerts the user with a message box if the validation fails and puts the focus on the offending control so the user can reenter the data. A DDV function for a given control must be called immediately after the DDX function for the same control.

You can also define your own custom DDX and DDV routines. For details on this and other aspects of DDX and DDV, see [MFC Technical Note 26](tn026-ddx-and-ddv-routines.md).

The [Add Member Variable Wizard](../ide/adding-a-member-variable-visual-cpp.md#add-member-variable-wizard) will write all of the DDX and DDV calls in the data map for you.

## See also

[Dialog Data Exchange and Validation](dialog-data-exchange-and-validation.md)<br/>
[Working with Dialog Boxes in MFC](life-cycle-of-a-dialog-box.md)<br/>
[Dialog Data Exchange](dialog-data-exchange.md)
