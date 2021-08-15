---
description: "Learn more about: Help Menu Merging"
title: "Help Menu Merging"
ms.date: "11/04/2016"
helpviewer_keywords: ["menus [MFC], merging", "merging Help menus [MFC]", "Help [MFC], for active document containers"]
ms.assetid: 9d615999-79ba-471a-9288-718f0c903d49
---
# Help Menu Merging

When an object is active within a container, the menu merging protocol of OLE Documents gives the object complete control of the **Help** menu. As a result, the container's Help topics are not available unless the user deactivates the object. The active document containment architecture expands on the rules for in-place menu merging to allow both the container and an active document that is active to share the menu. The new rules are simply additional conventions about what component owns what part of the menu and how the shared menu is constructed.

The new convention is simple. In active documents, the **Help** menu has two top-level menu items organized as follows:

`Help`

`Container Help >`

`Object Help    >`

For example, when a Word section is active in the Office Binder, then the **Help** menu would appear as follows:

`Help`

`Binder Help >`

`Word Help   >`

Both menu items are cascading menus under which any additional menu items specific to the container and the object are provided to the user. What items appear here will vary with the container and objects involved.

To construct this merged **Help** menu, the active document containment architecture modifies the normal OLE Documents procedure. According to OLE Documents, the merged menu bar can have six groups of menus, namely **File**, **Edit**, **Container**, **Object**, **Window**, **Help**, in that order. In each group, there can be zero or more menus. The groups **File**, **Container**, and **Window** belong to the container and the groups **Edit**, **Object,** and **Help** belong to the object. When the object wants to do menu merging, it creates a blank menu bar and passes it to the container. The container then inserts its menus, by calling `IOleInPlaceFrame::InsertMenus`. The object also passes a structure that is an array of six LONG values (**OLEMENUGROUPWIDTHS**). After inserting the menus, the container marks how many menus it added in each one of its groups, and then returns. Then the object inserts its menus, paying attention to the count of menus in each container group. Finally, the object passes the merged menu bar and the array (which contains the count of menus in each group) to OLE, which returns an opaque "menu descriptor" handle. Later the object passes that handle and the merged menu bar to the container, via `IOleInPlaceFrame::SetMenu`. At this time, the container displays the merged menu bar and also passes the handle to OLE, so that OLE can do proper dispatching of menu messages.

In the modified active document procedure, the object must first initialize the **OLEMENUGROUPWIDTHS** elements to zero before passing it to the container. Then the container performs a normal menu insertion with one exception: The container inserts a **Help** menu as the last item and stores a value of 1 in the last (sixth) entry of the **OLEMENUGROUPWIDTHS** array (that is, width[5], which belongs to the object's Help group). This **Help** menu will have only one item which is a submenu, the "**Container Help** >" cascade menu as previously described.

The object then executes its normal menu insertion code, except that before inserting its **Help** menu, it checks the sixth entry of the **OLEMENUGROUPWIDTHS** array. If the value is 1 and the name of the last menu is **Help** (or the appropriate localized string), then the object inserts its **Help** menu as submenu of the container's **Help** menu.

The object then sets the sixth element of **OLEMENUGROUPWIDTHS** to zero and increments the fifth element by one. This lets OLE know that the **Help** menu belongs to the container and the menu messages corresponding to that menu (and its submenus) should be routed to the container. It is then the container's responsibility to forward **WM_INITMENUPOPUP**, **WM_SELECT**, **WM_COMMAND**, and other menu-related messages that belong to the object's portion of the **Help** menu. This is accomplished by using **WM_INITMENU** to clear a flag that tells the container whether the user has navigated into the object's **Help** menu. The container then watches **WM_MENUSELECT** for entry into or exit from any item on the **Help** menu that the container did not add itself. On entry, it means the user has navigated into an object menu, so the container sets the "in object Help menu" flag and uses the state of that flag to forward any **WM_MENUSELECT**, **WM_INITMENUPOPUP**, and **WM_COMMAND** messages, as a minimum, to the object window. (On exit, the container clears the flag and then processes these same messages itself.) The container should use the window returned from the object's `IOleInPlaceActiveObejct::GetWindow` function as the destination for these messages.

If the object detects a zero in the sixth element of **OLEMENUGROUPWIDTHS**, it proceeds according to the normal OLE Documents rules. This procedure covers containers that do participate in **Help** menu merging as well as those that do not.

When the object calls `IOleInPlaceFrame::SetMenu`, before displaying the merged menu bar, the container checks whether the **Help** menu has an additional submenu, in addition to what the container has inserted. If so, the container leaves its **Help** menu in the merged menu bar. If the **Help** menu does not have an additional submenu, the container will remove its **Help** menu from the merged menu bar. This procedure covers objects that participate in **Help** menu merging as well as those that do not.

Finally, when it is time to disassemble the menu, the object removes the inserted **Help** menu in addition to removing the other inserted menus. When the container removes its menus, it will remove its **Help** menu in addition to the other menus that it has inserted.

## See also

[Active Document Containers](active-document-containers.md)
