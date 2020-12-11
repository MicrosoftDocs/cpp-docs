---
description: "Learn more about: Updating a Column When Another Table Contains a Reference to the Row"
title: "Update a column when another table contains a reference to the row"
ms.date: "10/24/2018"
helpviewer_keywords: ["rowsets, column updates"]
ms.assetid: abb5db69-055d-431f-b12d-ad2940a661ba
---
# Updating a Column When Another Table Contains a Reference to the Row

Some providers can detect which columns in the row change, but many providers can't. As a result, updating a column can result in an error when there's a reference to the row you're trying to update. To solve this problem, create a separate accessor holding only the columns you want to change. Pass the number of that accessor to `SetData`.

## See also

[Using Accessors](../../data/oledb/using-accessors.md)
