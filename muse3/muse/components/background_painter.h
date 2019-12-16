//=========================================================
//  MusE
//  Linux Music Editor
//
//  background_painter.h
//  (C) Copyright 2016 Tim E. Real (terminator356 on sourceforge)
//
//  This program is free software; you can redistribute it and/or
//  modify it under the terms of the GNU General Public License
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
//
//=========================================================

#ifndef __BACKGROUND_PAINTER_H__
#define __BACKGROUND_PAINTER_H__

#include <QObject>
#include <QRect>
#include <QColor>
#include <QPainter>
#include <QPalette>
#include <QColor>
#include <QRect>
#include <QString>

namespace MusEGui {

//---------------------------------------------------------
//   ItemBackgroundPainter
//---------------------------------------------------------

// FIXME : To access this from a stylesheet, it must inherit QWidget !
class ItemBackgroundPainter : public QObject
{
  Q_OBJECT

  Q_PROPERTY( QColor activeColor READ activeColor WRITE setActiveColor )

  QColor _activeColor;

  public:
   ItemBackgroundPainter(QObject* parent = nullptr);

   QColor activeColor() const { return _activeColor; }
   void setActiveColor(const QColor& c) { _activeColor = c; }
  
   void drawBackground(QPainter* painter,
                       const QRect& rect,
                       const QPalette& pal,
                       int xMargin = 1,
                       int yMargin = 1,
                       const QRect& onRect = QRect(),
                       const QColor& activeColor = QColor());
};

} // namespace MusEGui

#endif
