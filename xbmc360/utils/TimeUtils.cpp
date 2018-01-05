/*
 *      Copyright (C) 2005-2013 Team XBMC
 *      http://xbmc.org
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with XBMC; see the file COPYING.  If not, see
 *  <http://www.gnu.org/licenses/>.
 *
 */

#include "Stdafx.h"
#include "TimeUtils.h"

unsigned int CTimeUtils::frameTime = 0;

void CTimeUtils::UpdateFrameTime()
{
	frameTime = GetTimeMS();
}

unsigned int CTimeUtils::GetFrameTime()
{
	// we don't have an actual frametime on Xbox so just return timeGetTime()
#ifdef _XBOX
	UpdateFrameTime();
#endif
	return frameTime;
}

unsigned int CTimeUtils::GetTimeMS()
{
	return 0; //timeGetTime(); //MARTY FIXME WIP
}
