// SPDX-License-Identifier: MIT
#pragma once
#ifndef TIME_SHIELD_HEADER_TIME_SHIELD_LEGACY_ALIASES_HPP_INCLUDED
#define TIME_SHIELD_HEADER_TIME_SHIELD_LEGACY_ALIASES_HPP_INCLUDED

/// \file legacy_aliases.hpp
/// \brief Opt-in compatibility aliases for renamed time-conversion helpers.
///
/// Define `TIME_SHIELD_ENABLE_LEGACY_ALIASES` before including this header or
/// `time_conversions.hpp` to make the aliases available.

#include "time_conversions.hpp"

#include <type_traits>

#if defined(TIME_SHIELD_ENABLE_LEGACY_ALIASES)

namespace time_shield {

/// \ingroup time_conversions
/// \{

    /// \brief Legacy alias for years_since_epoch.
    /// \copydoc years_since_epoch
    template<class T = year_t>
    TIME_SHIELD_CONSTEXPR T get_unix_year(ts_t ts) noexcept {
        return years_since_epoch<T>(ts);
    }

    /// \brief Legacy alias for days_since_epoch.
    /// \copydoc days_since_epoch
    template<class T = dse_t>
    TIME_SHIELD_CONSTEXPR T get_unix_day(ts_t ts = time_shield::ts()) noexcept {
        return days_since_epoch<T>(ts);
    }

    /// \brief Legacy alias for days_since_epoch_ms.
    /// \copydoc days_since_epoch_ms
    template<class T = dse_t>
    TIME_SHIELD_CONSTEXPR T get_unix_day_ms(ts_ms_t ts_ms = time_shield::ts_ms()) noexcept {
        return days_since_epoch_ms<T>(ts_ms);
    }

    /// \brief Legacy alias for unix_day_to_ts.
    /// \copydoc unix_day_to_ts
    template<class T = ts_t>
    TIME_SHIELD_CONSTEXPR T unix_day_to_timestamp(dse_t unix_day) noexcept {
        return unix_day_to_ts<T>(unix_day);
    }

    /// \brief Legacy alias for unix_day_to_ts_ms.
    /// \copydoc unix_day_to_ts_ms
    template<class T = ts_t>
    TIME_SHIELD_CONSTEXPR T unix_day_to_timestamp_ms(dse_t unix_day) noexcept {
        return unix_day_to_ts_ms<T>(unix_day);
    }

    /// \brief Legacy alias for min_since_epoch.
    /// \copydoc min_since_epoch
    template<class T = int64_t>
    TIME_SHIELD_CONSTEXPR T get_unix_min(ts_t ts = time_shield::ts()) {
        return min_since_epoch<T>(ts);
    }

    /// \brief Legacy alias for year_of.
    /// \copydoc year_of
    template<class T = year_t>
    TIME_SHIELD_CONSTEXPR T get_year(ts_t ts = time_shield::ts()) {
        return year_of<T>(ts);
    }

    /// \brief Legacy alias for year_of_ms.
    /// \copydoc year_of_ms
    template<class T = year_t>
    TIME_SHIELD_CONSTEXPR T get_year_ms(ts_ms_t ts_ms = time_shield::ts_ms()) {
        return year_of_ms<T>(ts_ms);
    }

    /// \brief Legacy alias for weekday_of_date.
    /// \copydoc weekday_of_date
    template<class T1 = Weekday, class T2,
             typename std::enable_if<std::is_class<T2>::value, int>::type = 0>
    TIME_SHIELD_CONSTEXPR T1 get_weekday_from_date(const T2& date) {
        return weekday_of_date<T1>(date);
    }

    /// \brief Legacy alias for weekday_of_ts.
    /// \copydoc weekday_of_ts
    template<class T = Weekday, class U,
             typename std::enable_if<std::is_integral<U>::value, int>::type = 0>
    TIME_SHIELD_CONSTEXPR T get_weekday_from_ts(U ts) noexcept {
        return weekday_of_ts<T>(ts);
    }

    /// \brief Legacy alias for weekday_of_ts_ms.
    /// \copydoc weekday_of_ts_ms
    template<class T = Weekday>
    TIME_SHIELD_CONSTEXPR T get_weekday_from_ts_ms(ts_ms_t ts_ms) {
        return weekday_of_ts_ms<T>(ts_ms);
    }

    /// \brief Legacy alias for start_of_next_day_from_unix_day.
    /// \copydoc start_of_next_day_from_unix_day
    template<class T = ts_t>
    TIME_SHIELD_CONSTEXPR T next_day_unix_day(dse_t unix_day) noexcept {
        return start_of_next_day_from_unix_day(unix_day);
    }

    /// \brief Legacy alias for start_of_next_day_from_unix_day.
    /// \copydoc start_of_next_day_from_unix_day
    template<class T = ts_t>
    TIME_SHIELD_CONSTEXPR T next_day_unixday(dse_t unix_day) noexcept {
        return start_of_next_day_from_unix_day(unix_day);
    }

    /// \brief Legacy alias for start_of_next_day_from_unix_day_ms.
    /// \copydoc start_of_next_day_from_unix_day_ms
    template<class T = ts_ms_t>
    TIME_SHIELD_CONSTEXPR T next_day_unix_day_ms(dse_t unix_day) noexcept {
        return start_of_next_day_from_unix_day_ms(unix_day);
    }

    /// \brief Legacy alias for start_of_next_day_from_unix_day_ms.
    /// \copydoc start_of_next_day_from_unix_day_ms
    template<class T = ts_ms_t>
    TIME_SHIELD_CONSTEXPR T next_day_unixday_ms(dse_t unix_day) noexcept {
        return start_of_next_day_from_unix_day_ms(unix_day);
    }

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

/// \}

} // namespace time_shield

#endif // defined(TIME_SHIELD_ENABLE_LEGACY_ALIASES)

#endif // TIME_SHIELD_HEADER_TIME_SHIELD_LEGACY_ALIASES_HPP_INCLUDED
