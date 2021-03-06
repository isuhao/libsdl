/*
    SDL - Simple DirectMedia Layer
    Copyright (C) 1997-2009 Sam Lantinga

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

    Sam Lantinga
    slouken@libsdl.org
*/

#ifndef _SDL_config_sylixos_h
#define _SDL_config_sylixos_h

#include "SDL_platform.h"
#include "unistd.h"

/* Use LIBC */
#define HAVE_LIBC           1

/* Useful headers */
#define HAVE_STDIO_H        1
#define STDC_HEADERS        1
#define HAVE_STRING_H       1
#define HAVE_CTYPE_H        1
#define HAVE_MATH_H         1
#define HAVE_SIGNAL_H       1

/* C library functions */
#define HAVE_MALLOC         1
#define HAVE_CALLOC         1
#define HAVE_REALLOC        1
#define HAVE_FREE           1
#define HAVE_ABS            1
#define HAVE_MEMSET         1
#define HAVE_MEMCPY         1
#define HAVE_MEMMOVE        1
#define HAVE_MEMCMP         1
#define HAVE_STRLEN         1
#define HAVE_STRCHR         1
#define HAVE_STRRCHR        1
#define HAVE_STRSTR         1
#define HAVE_ITOA           1
#define HAVE_STRTOL         1
#define HAVE_STRTOD         1
#define HAVE_ATOI           1
#define HAVE_STRCMP         1
#define HAVE_STRNCMP        1
#define HAVE_SSCANF         1
#define HAVE_SNPRINTF       1
#define HAVE_VSNPRINTF      1
#define HAVE_QSORT          1
#define HAVE_CLOCK_GETTIME  1
#define HAVE_GETENV         1
#define HAVE_PUTENV         1

/* Use OSS audio driver */
#define SDL_AUDIO_DRIVER_OSS    1

/* Disable the stub cdrom driver */
#define SDL_CDROM_DISABLED      1

/* Disable the stub joystick driver */
#define SDL_JOYSTICK_DISABLED   1

/* Enable various shared object loading systems */
#define SDL_LOADSO_DLOPEN       1

/* Enable the pthread support */
#define SDL_THREAD_PTHREAD      1
#define SDL_THREAD_PTHREAD_RECURSIVE_MUTEX  1

#ifndef SIGWINCH
#define SIGWINCH                28
#endif
#ifndef SIGVTALRM
#define SIGVTALRM               26
#endif
#ifndef SIGPROF
#define SIGPROF                 27
#endif

/* Enable the unix timer support */
#define SDL_TIMER_UNIX          1
#define HAVE_NANOSLEEP          1

/* Enable the dummy & sylixos video driver */
#define SDL_VIDEO_DRIVER_DUMMY      1
#define SDL_VIDEO_DRIVER_SYLIXOS    1

/* Fix inline style */
#define SDL_INLINE_OKAY         1
 
#endif /* _SDL_config_sylixos_h */
