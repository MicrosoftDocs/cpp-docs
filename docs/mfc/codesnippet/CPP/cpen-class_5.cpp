EXTLOGPEN extlogpen;
penExisting.GetExtLogPen(&extlogpen);
CPen penOther;
LOGBRUSH LogBrush = { extlogpen.elpBrushStyle, extlogpen.elpColor,
   extlogpen.elpHatch };
penOther.CreatePen(PS_COSMETIC, 1, &LogBrush);