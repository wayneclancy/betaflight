/*
 * This file is part of Cleanflight and Betaflight.
 *
 * Cleanflight and Betaflight are free software. You can redistribute
 * this software and/or modify this software under the terms of the
 * GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * Cleanflight and Betaflight are distributed in the hope that they
 * will be useful, but WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "common/time.h"

extern int32_t AltHold;

typedef struct airplaneConfig_s {
    bool fixedwing_althold_reversed;           // false for negative pitch/althold gain. later check if need more than just sign
} airplaneConfig_t;

PG_DECLARE(airplaneConfig_t, airplaneConfig);

void calculateEstimatedAltitude(timeUs_t currentTimeUs);
int32_t getEstimatedAltitude(void);
int32_t getEstimatedVario(void);

void applyAltHold(void);
void updateAltHoldState(void);
void updateRangefinderAltHoldState(void);
