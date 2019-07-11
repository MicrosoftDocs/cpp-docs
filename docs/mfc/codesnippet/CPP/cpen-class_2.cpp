CPen myPen1, myPen2;

// Create a solid red pen of width 2.
myPen1.CreatePen(PS_SOLID, 2, RGB(255, 0, 0));

// Create a geometric pen.
LOGBRUSH logBrush;
logBrush.lbStyle = BS_SOLID;
logBrush.lbColor = RGB(0, 255, 0);
myPen2.CreatePen(PS_DOT | PS_GEOMETRIC | PS_ENDCAP_ROUND, 2, &logBrush);