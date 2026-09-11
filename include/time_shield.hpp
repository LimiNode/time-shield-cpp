// SPDX-License-Identifier: MIT
#pragma once
#ifndef TIME_SHIELD_HEADER_TIME_SHIELD_HPP_INCLUDED
#define TIME_SHIELD_HEADER_TIME_SHIELD_HPP_INCLUDED

/// \file time_shield.hpp
/// \brief Main header file for the Time Shield library.
/// \details
/// Includes all domain umbrellas of the Time Shield library.

#include "time_shield/core.hpp"         ///< Core types, constants, validation, and utilities.
#include "time_shield/conversions.hpp"  ///< Timestamp, calendar, and offset conversions.
#include "time_shield/text.hpp"         ///< Parsing and formatting helpers.
#include "time_shield/datetime.hpp"     ///< Fixed-offset date-time value type.
#include "time_shield/astronomy.hpp"    ///< Julian and lunar astronomy helpers.
#include "time_shield/timers.hpp"       ///< Timer and scheduling utilities.
#if TIME_SHIELD_ENABLE_NTP_CLIENT
#   include "time_shield/ntp.hpp"       ///< NTP client and time service.
#endif
#include "time_shield/timezone.hpp"     ///< Named-zone and fixed-offset clocks.

/// \namespace tsh
/// \brief Alias for the namespace time_shield.
namespace tsh = time_shield;

/// \namespace tshield
/// \brief Alias for the namespace time_shield.
namespace tshield = time_shield;

/// \namespace time_shield
/// \brief Main namespace for the Time Shield library.
namespace time_shield {};

#endif // TIME_SHIELD_HEADER_TIME_SHIELD_HPP_INCLUDED
