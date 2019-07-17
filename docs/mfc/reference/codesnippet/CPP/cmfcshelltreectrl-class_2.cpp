// const int idTree = 1
CRect rectDummy(0, 0, 0, 0);
const DWORD dwViewStyle = WS_CHILD | WS_VISIBLE | TVS_HASLINES |
                          TVS_LINESATROOT | TVS_HASBUTTONS;

// The this pointer points to CFolderBar class which extends the CDockablePane class
m_wndShellTree.Create(dwViewStyle, rectDummy, this, idTree);