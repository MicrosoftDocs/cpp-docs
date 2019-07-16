// Get the icon from pane 1 and set it in panes 2 and 3.
HICON hIcon = m_statusBar.GetIcon(0);
m_statusBar.SetIcon(1, hIcon);
m_statusBar.SetIcon(2, hIcon);