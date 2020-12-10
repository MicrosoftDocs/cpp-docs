---
description: "Learn more about: Handlers for Message-Map Ranges"
title: "Handlers for Message-Map Ranges"
ms.date: "11/04/2016"
helpviewer_keywords: ["message handlers [MFC]", "handlers [MFC], message-map ranges", "message maps [MFC], message handler functions", "message maps [MFC], ranges", "control-notification messages [MFC]", "command IDs [MFC], message mapping", "message-map ranges [MFC]", "handlers [MFC]", "message handling [MFC], message handler functions", "mappings [MFC], message ranges", "command handling [MFC], command update handlers", "controls [MFC], notifications", "handler functions [MFC], message-map ranges", "handler functions [MFC]", "command update handlers [MFC]", "command routing [MFC], command update handlers", "message ranges [MFC]", "handler functions [MFC], declaring", "message ranges [MFC], mapping"]
ms.assetid: a271478b-5e1c-46f5-9f29-e5be44b27d08
---
# Handlers for Message-Map Ranges

This article explains how to map a range of messages to a single message handler function (instead of mapping one message to only one function).

There are times when you need to process more than one message or control notification in exactly the same way. At such times, you might wish to map all of the messages to a single handler function. Message-map ranges allow you to do this for a contiguous range of messages:

- You can map ranges of command IDs to:

  - A command handler function.

  - A command update handler function.

- You can map control-notification messages for a range of control IDs to a message handler function.

Topics covered in this article include:

- [Writing the message-map entry](#_core_writing_the_message.2d.map_entry)

- [Declaring the handler function](#_core_declaring_the_handler_function)

- [Example for a range of command IDs](#_core_example_for_a_range_of_command_ids)

- [Example for a range of control IDs](#_core_example_for_a_range_of_control_ids)

## <a name="_core_writing_the_message.2d.map_entry"></a> Writing the Message-Map Entry

In the .CPP file, add your message-map entry, as shown in the following example:

[!code-cpp[NVC_MFCMessageHandling#6](codesnippet/cpp/handlers-for-message-map-ranges_1.cpp)]

The message-map entry consists of the following items:

- The message-map range macro:

  - [ON_COMMAND_RANGE](reference/message-map-macros-mfc.md#on_command_range)

  - [ON_UPDATE_COMMAND_UI_RANGE](reference/message-map-macros-mfc.md#on_update_command_ui_range)

  - [ON_CONTROL_RANGE](reference/message-map-macros-mfc.md#on_control_range)

- Parameters to the macro:

  The first two macros take three parameters:

  - The command ID that starts the range

  - The command ID that ends the range

  - The name of the message handler function

  The range of command IDs must be contiguous.

  The third macro, `ON_CONTROL_RANGE`, takes an additional first parameter: a control-notification message, such as **EN_CHANGE**.

## <a name="_core_declaring_the_handler_function"></a> Declaring the Handler Function

Add your handler function declaration in the .H file. The following code shows how this might look, as shown below:

[!code-cpp[NVC_MFCMessageHandling#7](codesnippet/cpp/handlers-for-message-map-ranges_2.h)]

Handler functions for single commands normally take no parameters. With the exception of update handler functions, handler functions for message-map ranges require an extra parameter, *nID*, of type **UINT**. This parameter is the first parameter. The extra parameter accommodates the extra command ID needed to specify which command the user actually chose.

For more information about parameter requirements for updating handler functions, see [Example for a Range of Command IDs](#_core_example_for_a_range_of_command_ids).

## <a name="_core_example_for_a_range_of_command_ids"></a> Example for a Range of Command IDs

When might you use ranges One example is in handling commands like the Zoom command in the MFC sample [HIERSVR](../overview/visual-cpp-samples.md). This command zooms the view, scaling it between 25% and 300% of its normal size. HIERSVR's view class uses a range to handle the Zoom commands with a message-map entry resembling this:

[!code-cpp[NVC_MFCMessageHandling#8](codesnippet/cpp/handlers-for-message-map-ranges_3.cpp)]

When you write the message-map entry, you specify:

- Two command IDs, beginning and ending a contiguous range.

   Here they are **ID_VIEW_ZOOM25** and **ID_VIEW_ZOOM300**.

- The name of the handler function for the commands.

   Here it's `OnZoom`.

The function declaration would resemble this:

[!code-cpp[NVC_MFCMessageHandling#9](codesnippet/cpp/handlers-for-message-map-ranges_4.h)]

The case of update handler functions is similar, and likely to be more widely useful. It's quite common to write `ON_UPDATE_COMMAND_UI` handlers for a number of commands and find yourself writing, or copying, the same code over and over. The solution is to map a range of command IDs to one update handler function using the `ON_UPDATE_COMMAND_UI_RANGE` macro. The command IDs must form a contiguous range. For an example, see the `OnUpdateZoom` handler and its `ON_UPDATE_COMMAND_UI_RANGE` message-map entry in the HIERSVR sample's view class.

Update handler functions for single commands normally take a single parameter, *pCmdUI*, of type `CCmdUI*`. Unlike handler functions, update handler functions for message-map ranges do not require an extra parameter, *nID*, of type **UINT**. The command ID, which is needed to specify which command the user actually chose, is found in the `CCmdUI` object.

## <a name="_core_example_for_a_range_of_control_ids"></a> Example for a Range of Control IDs

Another interesting case is mapping control-notification messages for a range of control IDs to a single handler. Suppose the user can click any of 10 buttons. To map all 10 buttons to one handler, your message-map entry would look like this:

[!code-cpp[NVC_MFCMessageHandling#10](codesnippet/cpp/handlers-for-message-map-ranges_5.cpp)]

When you write the `ON_CONTROL_RANGE` macro in your message map, you specify:

- A particular control-notification message.

   Here it's **BN_CLICKED**.

- The control ID values associated with the contiguous range of controls.

   Here these are **IDC_BUTTON1** and **IDC_BUTTON10**.

- The name of the message handler function.

   Here it's `OnButtonClicked`.

When you write the handler function, specify the extra **UINT** parameter, as shown in the following:

[!code-cpp[NVC_MFCMessageHandling#11](codesnippet/cpp/handlers-for-message-map-ranges_6.cpp)]

The `OnButtonClicked` handler for a single **BN_CLICKED** message takes no parameters. The same handler for a range of buttons takes one **UINT**. The extra parameter allows for identifying the particular control responsible for generating the **BN_CLICKED** message.

The code shown in the example is typical: converting the value passed to an **`int`** within the message range and asserting that this is the case. Then you might take some different action depending on which button was clicked.

## See also

[Declaring Message Handler Functions](declaring-message-handler-functions.md)
