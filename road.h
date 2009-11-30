/***************************************************************************
 *   Copyright (C) 2009 by Richard Crook                                   *
 *   http://code.google.com/p/qroadtraffic/                                *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

#ifndef ROAD_H
#define ROAD_H

class Junction;
class Vehicle;

#include <QList>

/*************************************************************************************/
/************************ Road along which vehicles can travel ***********************/
/*************************************************************************************/

class Road
{
public:
  Road( Junction*, int, Junction* );        // constructor

  void  tick();                             // simulate 1 time unit step
  void  add( Vehicle* );                    // add vehicle to the road

private:
  Junction*         m_startJunction;        // road start junction
  Junction*         m_endJunction;          // road end junction
  QList<Vehicle*>   m_vehicleList;          // list of vehicles on this road
};

#endif // ROAD_H