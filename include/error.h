/* eerr -- ewe-errors
   Copyright (C) 2024 The EWE Project.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program. If not, see <https://www.gnu.org/licenses/>. */
/* Written by netheround <myemail@email.com> */

/* TODO: Make it compatible with windows, see: strerror_s */

#ifndef ERROR_H_
#define ERROR_H_

#include <stdlib.h>
#include <errno.h>
#include <string.h>

#define EXIT_CODE -1
#define ERROR_MSG_MAX 256

/* Outputs the error to stderr and exits with `-1' */
void eputs(const char *e);

/* Compatible, safe, errno to human-readable version. */
char *strerror_c(int errnum);

/* Outputs the error using `eputs' and uses `strerror_c', also frees everything. */
void eputsfr(const char *e, int errnum);

#endif /* ERROR_H_ */