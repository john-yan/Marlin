/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2019 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

#define REVERSE_TEMP_SENSOR_RANGE

// Pt100 with INA826 amp on Ultimaker v2.0 electronics
// const short temptable_20[][2] PROGMEM = {
//   { OV(  0),    0 },
//   { OV(227),    1 },
//   { OV(236),   10 },
//   { OV(245),   20 },
//   { OV(253),   30 },
//   { OV(262),   40 },
//   { OV(270),   50 },
//   { OV(279),   60 },
//   { OV(287),   70 },
//   { OV(295),   80 },
//   { OV(304),   90 },
//   { OV(312),  100 },
//   { OV(320),  110 },
//   { OV(329),  120 },
//   { OV(337),  130 },
//   { OV(345),  140 },
//   { OV(353),  150 },
//   { OV(361),  160 },
//   { OV(369),  170 },
//   { OV(377),  180 },
//   { OV(385),  190 },
//   { OV(393),  200 },
//   { OV(401),  210 },
//   { OV(409),  220 },
//   { OV(417),  230 },
//   { OV(424),  240 },
//   { OV(432),  250 },
//   { OV(440),  260 },
//   { OV(447),  270 },
//   { OV(455),  280 },
//   { OV(463),  290 },
//   { OV(470),  300 },
//   { OV(478),  310 },
//   { OV(485),  320 },
//   { OV(493),  330 },
//   { OV(500),  340 },
//   { OV(507),  350 },
//   { OV(515),  360 },
//   { OV(522),  370 },
//   { OV(529),  380 },
//   { OV(537),  390 },
//   { OV(544),  400 },
//   { OV(614),  500 },
//   { OV(681),  600 },
//   { OV(744),  700 },
//   { OV(805),  800 },
//   { OV(862),  900 },
//   { OV(917), 1000 },
//   { OV(968), 1100 }
// };
const short temptable_20[][2] PROGMEM = {
  // { OV(  0),    0 },
  // { OV(227),    0 },
  { OV(236),    0 },
  { OV(245),    1 },
  { OV(253),   10 },
  { OV(262),   20 },
  { OV(270),   30 },
  { OV(279),   40 },
  { OV(287),   50 },
  { OV(295),   60 },
  { OV(304),   70 },
  { OV(312),   80 },
  { OV(320),   90 },
  { OV(329),  100 },
  { OV(337),  110 },
  { OV(345),  120 },
  { OV(353),  130 },
  { OV(361),  140 },
  { OV(369),  150 },
  { OV(377),  160 },
  { OV(385),  170 },
  { OV(393),  180 },
  { OV(401),  190 },
  { OV(409),  200 },
  { OV(417),  210 },
  { OV(424),  220 },
  { OV(432),  230 },
  { OV(440),  240 },
  { OV(447),  250 },
  { OV(455),  260 },
  { OV(463),  270 },
  { OV(470),  280 },
  { OV(478),  290 },
  { OV(485),  300 },
  { OV(493),  310 },
  { OV(500),  320 },
  { OV(507),  330 },
  { OV(515),  340 },
  { OV(522),  350 },
  { OV(529),  360 },
  { OV(537),  370 },
  { OV(544),  380 },
  { OV(614),  390 },
  { OV(681),  400 },
  { OV(744),  500 },
  { OV(805),  600 },
  { OV(862),  700 },
  { OV(917),  800 },
  { OV(968),  900 }
};
