// SPDX-License-Identifier: MIT
#pragma once
#ifndef TIME_SHIELD_HEADER_TIME_SHIELD_ASTRONOMY_LEGACY_ALIASES_HPP_INCLUDED
#define TIME_SHIELD_HEADER_TIME_SHIELD_ASTRONOMY_LEGACY_ALIASES_HPP_INCLUDED

/// \file legacy_aliases.hpp
/// \brief Opt-in compatibility aliases for renamed astronomy helpers.

#include <time_shield/astronomy.hpp>

#if defined(TIME_SHIELD_ENABLE_LEGACY_ALIASES)

namespace time_shield {

    /// \brief Legacy day-first Gregorian Julian Date conversion.
    /// \details Use gregorian_ymd_to_jd for the preferred year-first API.
    inline jd_t gregorian_to_jd(double day, int64_t month, int64_t year) noexcept {
        return detail::gregorian_dmy_to_jd_unchecked(day, month, year);
    }

    /// \brief Legacy day-first Gregorian Julian Date conversion.
    /// \details Use gregorian_ymd_to_jd for the preferred year-first API.
    inline jd_t gregorian_to_jd(
            uint32_t day,
            uint32_t month,
            uint32_t year,
            uint32_t hour,
            uint32_t minute,
            uint32_t second = 0,
            uint32_t millisecond = 0) noexcept {
        return detail::gregorian_dmy_to_jd_unchecked(
                static_cast<double>(day) + detail::day_fraction_from_hms(
                        static_cast<int>(hour),
                        static_cast<int>(minute),
                        static_cast<int>(second),
                        static_cast<int>(millisecond)),
                static_cast<int64_t>(month),
                static_cast<int64_t>(year));
    }

    /// \brief Legacy day-first Gregorian Julian Day Number conversion.
    /// \details Use gregorian_ymd_to_jdn for the preferred year-first API.
    inline jdn_t gregorian_to_jdn(uint32_t day, uint32_t month, uint32_t year) noexcept {
        return detail::gregorian_dmy_to_jdn_unchecked(
                static_cast<int64_t>(day),
                static_cast<int64_t>(month),
                static_cast<int64_t>(year));
    }

} // namespace time_shield

#endif // defined(TIME_SHIELD_ENABLE_LEGACY_ALIASES)

#endif // TIME_SHIELD_HEADER_TIME_SHIELD_ASTRONOMY_LEGACY_ALIASES_HPP_INCLUDED
