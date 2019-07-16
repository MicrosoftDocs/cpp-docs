CMenu mnu;
HMENU hmnu = AfxGetMainWnd()->GetMenu()->GetSafeHmenu();
mnu.Attach(hmnu);

// Now you can manipulate the window's menu as a CMenu
// object...

mnu.Detach();