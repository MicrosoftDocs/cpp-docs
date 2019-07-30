BOOL bUserMode;
if (!GetAmbientProperty(DISPID_AMBIENT_USERMODE, VT_BOOL, &bUserMode))
bUserMode = TRUE;