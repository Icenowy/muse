//=============================================================================
//  Awl
//  Audio Widget Library
//  $Id:$
//
//  Copyright (C) 1999-2011 by Werner Schweer and others
//
//  This program is free software; you can redistribute it and/or modify
//  it under the terms of the GNU General Public License
//  as published by the Free Software Foundation; version 2 of
//  the License, or (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
//=============================================================================

#ifndef __AWLVOLENTRY_H__
#define __AWLVOLENTRY_H__

#include "floatentry.h"

namespace Awl {

//---------------------------------------------------------
//   VolEntry
//---------------------------------------------------------

class VolEntry : public FloatEntry {
      Q_OBJECT

      bool _leftMouseButtonCanDecrease;
    
   public:
      VolEntry(QWidget* parent, bool leftMouseButtonCanDecrease = false);
      
      bool leftMouseButtonCanDecrease() const { return _leftMouseButtonCanDecrease; }
      void setLeftMouseButtonCanDecrease(bool v) { _leftMouseButtonCanDecrease = v; }
      };

}

#endif
