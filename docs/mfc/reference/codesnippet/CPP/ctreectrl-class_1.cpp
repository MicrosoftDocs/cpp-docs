// Assuming your window has a CTreeCtrl member named m_TreeCtrl,
// you can create the tree control window with a child ID of ID_MYTREE
// using a call like this:

m_TreeCtrl.Create(WS_VISIBLE | WS_TABSTOP | WS_CHILD | WS_BORDER |
                      TVS_HASBUTTONS | TVS_LINESATROOT | TVS_HASLINES |
                      TVS_DISABLEDRAGDROP | TVS_NOTOOLTIPS | TVS_EDITLABELS,
                  CRect(10, 10, 300, 100), this, ID_MYTREE);

// The control will have the appropriate window styles, and the tree
// control styles specified are those most commonly used.