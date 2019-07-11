LOGPEN logpen;
CPen   cMyPen;

// Get the LOGPEN of an existing pen.
penExisting.GetLogPen(&logpen);

// Change the color to red and the width to 2.
logpen.lopnWidth.x = 2;
logpen.lopnColor = RGB(255, 0, 0);

// Create my pen using the new settings.
cMyPen.CreatePenIndirect(&logpen);