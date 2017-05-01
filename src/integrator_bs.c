/**
 * @file 	integrator.c
 * @brief 	Leap-frog integration scheme.
 * @author 	Hanno Rein <hanno@hanno-rein.de>
 * @details	This file implements the Bulirsch-Stoer integrator.
 *
 * @section 	LICENSE
 * Copyright (c) 2017 Hanno Rein
 *
 * This file is part of rebound.
 *
 * rebound is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * rebound is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with rebound.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include <time.h>
#include "rebound.h"

void reb_integrator_leapfrog_part1(struct reb_simulation* r){
    r->gravity_ignore_terms = 0;
}
void reb_integrator_leapfrog_part2(struct reb_simulation* r){
	r->t+=dt;
	r->dt_last_done = r->dt;
}
	
void reb_integrator_leapfrog_synchronize(struct reb_simulation* r){
	// Do nothing.
}

void reb_integrator_leapfrog_reset(struct reb_simulation* r){
	// Do nothing.
}
