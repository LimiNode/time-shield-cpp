// SPDX-License-Identifier: MIT
#pragma once
#ifndef TIME_SHIELD_HEADER_CONVERSIONS_HPP_INCLUDED
#define TIME_SHIELD_HEADER_CONVERSIONS_HPP_INCLUDED

#include <time_shield/core.hpp>
#include <time_shield/conversions/time_unit_conversions.hpp>
#include <time_shield/conversions/unix_time_conversions.hpp>
#include <time_shield/conversions/date_conversions.hpp>
#include <time_shield/conversions/date_time_conversions.hpp>
#include <time_shield/conversions/iso_week_conversions.hpp>
#include <time_shield/conversions/workday_conversions.hpp>
#include <time_shield/conversions/ole_automation_conversions.hpp>
#include <time_shield/conversions/time_zone_offset.hpp>
#include <time_shield/conversions/time_zone_offset_conversions.hpp>
#include <time_shield/conversions/time_conversion_aliases.hpp>

#if defined(TIME_SHIELD_ENABLE_LEGACY_ALIASES)
#   include <time_shield/conversions/legacy_aliases.hpp>
#endif

#endif // TIME_SHIELD_HEADER_CONVERSIONS_HPP_INCLUDED
