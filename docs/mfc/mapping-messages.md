---
title: "Mapping Messages | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["message maps [MFC], about message maps", "mappings [MFC], commands", "commands [MFC], mapping", "command mapping [MFC]", "message handling [MFC], connecting to handler functions", "commands [MFC], connecting to handler functions", "mappings [MFC], messages", "messages [MFC], mapping"]
ms.assetid: 996f0652-0698-4b8c-b893-cdaa836d9d0f
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Mapping Messages

Each framework class that can receive messages or commands has its own "message map." The framework uses message maps to connect messages and commands to their handler functions. Any class derived from class `CCmdTarget` can have a message map. Other articles explain message maps in detail and describe how to use them.

In spite of the name "message map," message maps handle both messages and commands — all three categories of messages listed in [Message Categories](../mfc/message-categories.md).

## See Also

[Messages and Commands in the Framework](../mfc/messages-and-commands-in-the-framework.md)

