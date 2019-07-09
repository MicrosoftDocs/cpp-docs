// Create a solid red pen of width 2.
CPen myPen1(PS_SOLID, 2, RGB(255, 0, 0));

// Create a geometric pen.
LOGBRUSH logBrush;
logBrush.lbStyle = BS_SOLID;
logBrush.lbColor = RGB(0, 255, 0);
CPen myPen2(PS_DOT | PS_GEOMETRIC | PS_ENDCAP_ROUND, 2, &logBrush);