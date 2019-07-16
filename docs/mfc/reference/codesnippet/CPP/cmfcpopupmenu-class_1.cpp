// 30 is the size of the logo in pixels.
pPopupMenu->EnableMenuLogo(30);
pPopupMenu->EnableMenuSound();
// 500 is the animation speed in milliseconds.
pPopupMenu->SetAnimationSpeed(500);
pPopupMenu->SetAnimationType(CMFCPopupMenu::SLIDE);
pPopupMenu->SetForceShadow(true);
// 200 is the maximum width of the pop-up menu in pixels.
pPopupMenu->SetMaxWidth(200);
pPopupMenu->SetRightAlign();
pPopupMenu->InsertSeparator();