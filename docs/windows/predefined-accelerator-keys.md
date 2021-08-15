---
description: "Learn more about: Accelerator Keys (C++)"
title: "Accelerator Keys (C++)"
ms.date: "02/14/2019"
helpviewer_keywords: ["accelerator keys", "keyboard shortcuts", "keyboard shortcuts [C++], predefined", "menus [C++], shortcut keys", "keyboard shortcuts [C++], menu association"]
ms.assetid: f234c5f2-4ec3-4c9e-834a-b5dd297625b9
---
# Accelerator Keys (C++)

## Predefined Accelerator Keys

There are a number of predefined accelerator keys that may be part of a Windows application project. Some of these virtual keys are for the Windows environment. Others support browser or Unicode applications. You can use any of these keys in any accelerator.

|Key|Description|
|---------|-----------------|
|VK_ACCEPT|(IME) accept|
|VK_BROWSER_BACK|(Windows) Browser, **Back** key|
|VK_BROWSER_FAVORITES|(Windows) Browser, **Favorites** key|
|VK_BROWSER_FORWARD|(Windows) Browser, **Forward** key|
|VK_BROWSER_HOME|(Windows) Browser, **Start** and **Home** key|
|VK_BROWSER_REFRESH|(Windows) Browser, **Refresh** key|
|VK_BROWSER_SEARCH|(Windows) Browser, **Search** key|
|VK_BROWSER_STOP|(Windows) Browser, **Stop** key|
|VK_CONVERT|(IME) convert|
|VK_FINAL|(IME) final mode|
|VK_HANGUEL|(IME) Hanguel mode (maintained for compatibility, use VK_HANGUL)|
|VK_HANGUL|(IME) Hangul mode|
|VK_HANJA|(IME) Hanja mode|
|VK_JUNJA|(IME) Junja mode|
|VK_KANA|(IME) Kana mode|
|VK_KANJI|(IME) Kanji mode|
|VK_LAUNCH_APP1|(Windows) **Start Application 1** key|
|VK_LAUNCH_APP2|(Windows) **Start Application 2** key|
|VK_LAUNCH_MAIL|(Windows) **Start Mail** key|
|VK_LAUNCH_MEDIA_SELECT|(Windows) **Select Media** key|
|VK_LCONTROL|**Left Ctrl** key|
|VK_LMENU|**Left Menu** key|
|VK_LSHIFT|**Left Shift** key|
|VK_MEDIA_NEXT_TRACK|(Windows) **Next Track** key|
|VK_MEDIA_PLAY_PAUSE|(Windows) **Play/Pause Media** key|
|VK_MEDIA_PREV_TRACK|(Windows) **Previous Track** key|
|VK_MEDIA_STOP|(Windows) **Stop Media** key|
|VK_MODECHANGE|(IME) mode change request|
|VK_NONCONVERT|(IME) nonconvert|
|VK_OEM_1|(Windows) For the US standard keyboard, the **;:** key|
|VK_OEM_102|(Windows) Either the angle bracket key or the backslash key on the RT 102-key keyboard|
|VK_OEM_2|(Windows) For the US standard keyboard, the **/?** key|
|VK_OEM_3|(Windows) For the US standard keyboard, the **`~** key|
|VK_OEM_4|(Windows) For the US standard keyboard, the **[{** key|
|VK_OEM_5|(Windows) For the US standard keyboard, the **\\&#124;** key|
|VK_OEM_6|(Windows) For the US standard keyboard, the **]}** key|
|VK_OEM_7|(Windows) For the US standard keyboard, the 'single-quote/double-quote' key|
|VK_OEM_COMMA|(Windows) For any country/region, the **,** key|
|VK_OEM_MINUS|(Windows) For any country/region, the **-** key|
|VK_OEM_PERIOD|(Windows) For any country/region, the **.** key|
|VK_OEM_PLUS|(Windows) For any country/region, the **+** key|
|VK_PACKET|(Windows) Used to pass Unicode characters as if they're keystrokes.|
|VK_RCONTROL|**Right Ctrl** key|
|VK_RMENU|**Right Menu** key|
|VK_RSHIFT|**Right Shift** key|
|VK_SLEEP|**Computer Sleep** key|
|VK_VOLUME_DOWN|(Windows) **Volume Down** key|
|VK_VOLUME_MUTE|(Windows) **Volume Mute** key|
|VK_VOLUME_UP|(Windows) **Volume Up** key|
|VK_XBUTTON1|(Windows) **X1** mouse button|
|VK_XBUTTON2|(Windows) **X2** mouse button|

## Accelerator Key Association

Many times, you want a menu item and a keyboard combination to issue the same program command. You do this action by assigning the same resource identifier (ID) to the menu item and to an entry in your application's accelerator table. You then edit the menu item's caption to show the name of the accelerator. For more information on menu items and accelerator keys, see [Menu Commands](./menu-command-properties.md).

## Requirements

Win32

## See also

[Accelerator Editor](../windows/accelerator-editor.md)<br/>
