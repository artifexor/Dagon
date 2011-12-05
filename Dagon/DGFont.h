/*
 *  DAGON
 *  Copyright (c) 2011 Senscape s.r.l.
 *	All rights reserved.
 *
 *  NOTICE: Senscape permits you to use, modify, and distribute this
 *  file in accordance with the terms of the license agreement accompanying it.
 *
 */

#ifndef DG_FONT_H
#define	DG_FONT_H

#include "DGCommon.h"

extern const unsigned char _binary_def_font_start[];

void	DGFontInitialize(const char *fileName, unsigned int heightOfFont);
void	DGFontClean(void);
void	DGFontPrint(float xPosition, float yPosition, const char* textToPrint, ...);

#endif // DG_FONT_H